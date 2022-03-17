#!/usr/bin/python3


"""
Module to calculate the perimeter of an island.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island
    Parameters
    ----------
    grid: list int
        the representation of island in list int.
    Return
    ------
    Perimeter of island:
        width + width + height + height
    """
    tmp = 0

    for x in range(len(grid)):
            for y in range(len(grid[1])):
                if grid[x][y] == 1:
                    if x == 0 or grid[x - 1][y] == 0:
                        tmp += 1
                    if y == 0 or grid[x][y - 1] == 0:
                        tmp += 1
                    if x == len(grid) - 1 or grid[x + 1][y] == 0:
                        tmp += 1
                    if y == len(grid[x]) - 1 or grid[x][y + 1] == 0:
                        tmp += 1

    return tmp
