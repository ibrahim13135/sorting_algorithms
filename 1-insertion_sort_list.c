#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/*
 * swapper - implementing function that accepts two
 * values compares them and swaps them then it prients the value.
 * @a: argument 1 to compare
 * @b: argument 2 to compare
 * @list: doubly linked list
 */
listint_t *swapper(listint_t *a, listint_t *b, listint_t **list)
{
listint_t *tempNext;
listint_t *tempPrev;
listint_t *printable;
listint_t *temp1 = a;
listint_t *temp2 = b;
listint_t *swapper;
if (temp2->next)
{
tempNext = temp2->next;
temp2->next->prev = temp1;
}
else
{
tempNext = NULL;
}
if (temp1->prev)
{
temp1->prev->next = temp2;
}
tempPrev = temp2;
temp2->next = temp1;
temp2->prev = temp1->prev;
temp1->next = tempNext;
temp1->prev = tempPrev;
printable = temp2;
while (printable->prev)
{
printable = printable->prev;
}
*list = printable;
print_list(*list);
swapper = temp1;
temp1 = temp2;
temp2 = swapper;
temp1 = temp1->prev;
temp2 = temp2->prev;
return (temp1);
}
/*
* insertion_sort_list - implementing function
* that accepts a linked list and it sorts it.
* @list: doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *temp1;
listint_t *temp2;
listint_t *current;
listint_t *list_i = *list;
list_i = list_i->next;
while (list_i)
{
temp1 = list_i->prev;
temp2 = list_i;
current = list_i->next;
while (temp1)
{
if (temp1->n > temp2->n)
{
temp1 = swapper(temp1, temp2, list);
}
else
{
temp1 = NULL;
}
}
list_i = current;
}
}
