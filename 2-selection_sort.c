#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * selection_sort - implementer function
 * @array: input array
 * @size: size of input array
 */
void selection_sort(int *array, size_t size)
{
int temp;
unsigned int pos;
unsigned int i;
unsigned int j;
int exchangeFound = 0;

for (i = 0; i < size; i++)
  {
    temp = array[i];
  for (j = i; j < size; j++)
    {
      if (temp > array[j])
	{
	  temp = array[j];
	  pos = j;
	  exchangeFound = 1;
	}
    }
  if (exchangeFound == 1)
    {
      array[pos] = array[i];
      array[i] = temp;
      print_array(array, size);
      exchangeFound = 0;
    }
   }
}

