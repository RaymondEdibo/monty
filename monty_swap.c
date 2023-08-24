#include "monty.h"


/**
 * swap_opcode - swaps top two of stack.
 * @st: dll struct.
 * @line_no: no. of file lines.
 * Return: new beginning node
 */

void swap_opcode(stack_t **st, unsigned int line_no)
{
	stack_t *temp = *st;

	if (*st == NULL || (*st)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	temp = (*st)->next;
	(*st)->next = temp->next;
	(*st)->prev = temp;
	temp->next = *st;
	temp->prev = NULL;
	(*st)->next->prev = *st;
	*st = temp;
}
