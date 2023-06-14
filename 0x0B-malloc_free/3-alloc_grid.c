#include <stdlib.h>

/**
* alloc_grid - allocates a 2 dimensional array of integers
* @width: the width of the array
* @height: the height of the array
* Return: a pointer to the array, or NULL on failure
*/
int [**alloc_grid(int width, int height)
{
int **](https://www.bing.com/search?form=SKPBOT&q=alloc_grid%28int%20width%2C%20int%20height%29%0D%0A%7B%0D%0Aint%20)grid;
int i, j;

/* check for valid width and height */
if (width <= 0 || height <= 0)
return (NULL);

/* allocate memory for the array of pointers */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

/* allocate memory for each row of the array */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* free the allocated memory if allocation fails */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}

/* initialize each element of the array to 0 */
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

/* return the pointer to the array */
return (grid);
}
