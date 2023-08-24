#include "monty.h"


/**
 * pint_opcode - top of stack value
 * @st: dll struct.
 * @line_no: no. of file lines.
 * Return: void
 */

void pint_opcode(stack_t **st, unsigned int line_no)
{
	stack_t *temp = *st;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
	while (temp != NULL)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
}
