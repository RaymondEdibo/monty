#include "monty.h"

/**
 * pall_opcode - nodo value
 * @st: dll struct
 * @line_no: no. of file lines.
 */

void pall_opcode(stack_t **st, unsigned int line_no)
{
	stack_t *temp = *st;
	(void) line_no;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
