#!/usr/bin/python3
"""This module contains a function island_perimeter that returns
    the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """island_perimeter function

    Args:
        grid ([list of a list of ints]):
            0 represents a water zone
            1 represents a land zone
            One cell is a square w/ side length 1
            Grid cells are connected horiz/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
            The island is one contiguous land mass
    """
    perim = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:  # value is 1 at that cell
                if row == 0 or grid[row - 1][col] == 0:
                    # outer rows always 0s, OR one cell above it is 0
                    perim += 1
                if col == 0 or grid[row][col - 1] == 0:
                    # outer cols always 0s, OR one cell to the left is 0
                    perim += 1
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    # if row is one above bottom OR value below curr pos. is 0
                    perim += 1
                if col == len(grid) - 1 or grid[row][col + 1] == 0:
                    # col is one to left of end OR value left of curr pos. is 0
                    perim += 1
    return perim
