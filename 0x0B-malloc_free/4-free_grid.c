#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: the grid to be freed
* @height: the height of the grid
*/
void free_grid(int **grid, int height)
{
int i;

/* check for valid grid and height */
if (grid == NULL || height <= 0)
return;

/* free each row of the grid */
for (i = 0; i < height; i++)
free(grid[i]);

/* free the grid pointer */
free(grid);
}
