#!/usr/bin/python3
"""
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """Function to find the perimeter of an island"""
    perimeter = 0
    if not grid:
        return 0
    if not all(type(arr) == list for arr in grid):
        return 0
    al = len(grid[0])
    if not all(len(arr) == al for arr in grid):
        return 0
    al = al - 1
    gl = len(grid) - 1
    for cell, arr in enumerate(grid):
        for element, val in enumerate(arr):
            if (val == 1):
                if element == 0 or arr[element - 1] == 0:
                    perimeter += 1
                if element == al or arr[element + 1] == 0:
                    perimeter += 1
                if cell == 0 or grid[cell - 1][element] == 0:
                    perimeter += 1
                if cell == gl or grid[cell + 1][element] == 0:
                    perimeter += 1
    return perimeter
