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
	int fdFrom, testClose, testRead, testCreate;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdFrom = open(argv[1], O_RDONLY);
	testRead = read(fdFrom, buf, 1024);

	if (fdFrom == -1 || testRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	testClose = close(fdFrom);

	if (testClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(100);
	}

	testCreate = create_file(argv[2], buf);

	if (testCreate == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	return (0);
}

/**
 * _strlen - Return the length of a string
 *
 * @s: The String we want to know the length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}

/**
 * create_file - Create a file
 *
 * @filename: The name of the file to create
 * @text_content: The content of the file
 *
 * Return: 1 on sucess, -1 on failure
 * Failure when filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, testWrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		testWrite = write(fd, text_content, _strlen(text_content));

		if (testWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
