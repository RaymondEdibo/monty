#include "monty.h"


/**
 * free_all_stack - frees
 * @st: doubly linked list representation of a stack (or queue)
 * Return: void
 */

void free_all_stack(stack_t **st)
{
	stack_t *temp;

	if (*st == NULL)
		return;
	while (1)
	{
		temp = *st;
		if ((*st)->next == NULL)
		{
			free(temp);
			*st = NULL;
			break;
		}
		*st = (*st)->next;
		(*st)->prev = NULL;
		free(temp);
	}

}
