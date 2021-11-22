#include "main.h"

/**
 * main - The cp program
 * Copy the first file
 *
 * @argc: The number of arguments
 * @argv: All names of files
 *
 * Return: 0 if the copy is a sucess
 */
int main(int argc, char *argv[])
{
	int fdFrom, fdTo, testClose, testRead, testWrite;
	char buf[1024];

	if (argc != 3)
		exit_procedure(97, NULL, 0);

	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom == -1)
		exit_procedure(98, argv, 0);

	fdTo = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if(fdTo == -1)
		exit_procedure(99, argv, 0);

	while ((testRead = read(fdFrom, buf, 1024)) != 0)
	{
		if (testRead == -1)
			exit_procedure(98, argv, 0);
		else
		{
			testWrite = write(fdTo, buf, testRead);

			if (testWrite == -1)
				exit_procedure(99, argv,fdTo);
		}
	}

	testClose = close(fdFrom);
	if (testClose == -1)
		exit_procedure(100, NULL, fdFrom);

	testClose = close(fdTo);
	if (testClose == -1)
		exit_procedure(100, NULL, fdTo);

	return (0);
}

/**
 * exit_procedure - If the code fail the procedure due of the faillure
 * is print and exit with the exit code
 *
 * @exitCode: The Number of the exit code
 * @fd: The file of the faillure
 */
void exit_procedure(int exitCode, char *argv[], int fd)
{
	switch (exitCode)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
		break;

	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		break;

	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		break;

	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
		break;

	default:
		break;
	}


}
