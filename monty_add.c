#include "monty.h"


/**
 * add_opcode - adds the top two of the stack.
 * @st: dll struct.
 * @line_no: no. of file lines.
 * Return: void.
 */

void add_opcode(stack_t **st, unsigned int line_no)
{
	int new;

	if (*st == NULL || (*st)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	new = (*st)->n;
	new += (*st)->next->n;
	pop_opcode(st, line_no);
	(*st)->n = new;
}
