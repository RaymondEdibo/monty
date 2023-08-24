#include "monty.h"


/**
 * sub_opcode - substracts the top two of stack.
 * @stack: dll struct.
 * @line_no: no. of file lines.
 * Return: void.
 */

void sub_opcode(stack_t **stack, unsigned int line_no)
{
	int new;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	new = (*stack)->n;
	new -= (*stack)->next->n;
	new *= -1;
	pop_opcode(stack, line_no);
	(*stack)->n = new;
}
