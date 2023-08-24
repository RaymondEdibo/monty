#include "monty.h"

char *num;
/**
 * val_opcode - validate no. of arguments
 * @comm: tokenized string in getline
 * @check: string stored in getline
 * @lst: dll struct
 * @l: no. in the file
 * @c: File
 * Return: void
 */

void val_opcode(char **comm, char *check, stack_t **lst, int l, FILE *c)
{
	int i = 0;

	while (comm[i] != NULL)
		i++;
	if (!(i == 2 || i == 1))
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", l, comm[0]);
		free(comm);
		free(check);
		free_all_stack(lst);
		fclose(c);
		exit(EXIT_FAILURE);
	}
	if (i == 2)
		num = comm[1];
	f_comp_opcode(comm, check, l, lst, c);
}
