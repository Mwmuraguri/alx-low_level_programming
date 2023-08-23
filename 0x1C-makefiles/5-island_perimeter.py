#!/usr/bin/python3
""" module - function for perimeter"""


def island_perimeter(grid):
    """ a function to determine the perimeter of a land 
    the time complaxity of this algorithm is O(n)"""

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
