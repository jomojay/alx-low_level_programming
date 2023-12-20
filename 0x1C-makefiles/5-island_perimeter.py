#!/usr/bin/python3
"""island_perimeter(grid) module"""


def island_perimeter(grid):
    """
    Calculater the Island's perimeter

    args:
        grid (array): An 0's and 1's array that represents an island (1)
        sourrounded by water (0)

    Returns:
        The island's perimeter
    """
    rows_l = len(grid)
    cols_l = len(grid[0])
    perimeter = 0
    for i in range(1, rows_l - 1):
        for j in range(1, cols_l - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
