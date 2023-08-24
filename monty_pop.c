#include "monty.h"


/**
 * pop_opcode - removes top of stack.
 * @st: dll struct.
 * @line_no: no. of file lines.
 * Return: void
 */

void pop_opcode(stack_t **st, unsigned int line_no)
{
	stack_t *temp = *st;
	(void) line_no;

	if (*st == NULL)
		return;
	if ((*st)->next == NULL)
	{
		free(temp);
		*st = NULL;
		return;
	}
	*st = (*st)->next;
	(*st)->prev = NULL;
	free(temp);

}
