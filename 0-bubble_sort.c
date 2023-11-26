#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - sorting function using bubble sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 */

void bubble_sort(int *array, size_t size)
{
int temp = 0;
unsigned int counter = 0;
unsigned int i;
if (!array || size < 2)
return;
for (i = 0; i < size; i++)
{
if (i == (size - 1))
{
if (counter != (size - 1))
{
i = 0;
counter = 0;
}
}

if (i < size - 1)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
else
{
counter = counter + 1;
}
}
}
}
