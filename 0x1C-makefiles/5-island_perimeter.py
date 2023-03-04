#!/usr/bin/python3
"""A module that returns a perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    perimeter = 0
    for row in range(len(grid)):
        for num in range(len(grid[0])):
            if grid[row][num] == 1:
                if row == 0 or grid[row - 1][num] == 0:
                    perimeter += 1
                if num == 0 or grid[row][num - 1] == 0:
                    perimeter += 1
                if row == len(grid) - 1 or grid[row + 1][num] == 0:
                    perimeter += 1
                if num == len(grid[0]) - 1 or grid[row][num + 1] == 0:
                    perimeter += 1
    return perimeter
