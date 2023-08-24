#include "monty.h"


/**
 * push_opcode - pushes to stack.
 * @st: dll struct.
 * @line_no: no. of file lines.
 * Return: Void.
 */

void push_opcode(stack_t **st, unsigned int line_no)
{
	stack_t *temp;
	unsigned int count;
	unsigned int i;

	for (i = 0; i < strlen(num); i++)
	{
		if (num[i] == '-')
			i++;
		if (!isdigit(num[i]))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_no);
			free_all_stack(st);
			exit(EXIT_FAILURE);
		}
	}
	count = atoi(num);
	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
	temp->next = *st;
	temp->prev = NULL;
	temp->n = count;
	if (*st != NULL)
		(*st)->prev = temp;
	*st = temp;
}
