#!/usr/bin/python3
"""Island Perimeter described in grid
"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Start with 4 sides
                perimeter += 4
                # Subtract 2 for each adjacent land cell (shared sides)
                if i > 0 and grid[i - 1][j] == 1:  # Check the cell above
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:  # Check the cell to the left
                    perimeter -= 2

    return perimeter
