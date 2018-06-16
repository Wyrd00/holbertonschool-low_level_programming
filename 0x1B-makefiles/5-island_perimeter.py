#!/usr/bin/python3
"""
Module with one function
"""


def island_perimeter(grid):
    """Return the perimeter of the island in grid"""
    perim = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                try:
                    perim += 1 if grid[row - 1][column] == 0 else 0
                    perim += 1 if grid[row + 1][column] == 0 else 0
                    perim += 1 if grid[row][column - 1] == 0 else 0
                    perim += 1 if grid[row][column + 1] == 0 else 0
                except IndexError:
                    perim += 1
    return perim
