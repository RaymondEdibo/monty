#include "monty.h"

/**
 * f_comp_opcode - compares word read in file
 * @comm: tokenized string in getline
 * @check: string stored in getline
 * @lst: dll struct
 * @l: no. in the file
 * @d: File.
 * Return: void
 */

void f_comp_opcode(char **comm, char *check, int l, stack_t **lst, FILE *d)
{
	int j = 0;
	instruction_t opcodeFunc[] = {
		{"push", push_opcode},
		{"pall", pall_opcode},
		{"pint", pint_opcode},
		{"pop", pop_opcode},
		{"swap", swap_opcode},
		{"add", add_opcode},
		{"nop", nop_opcoode},
		{"sub", sub_opcode},
		{NULL, NULL},
	};

	while (opcodeFunc[j].opcode != NULL)
	{
		if (strcmp(opcodeFunc[j].opcode, comm[0]) == 0)
		{
			opcodeFunc[j].f(lst, l);
			return;
		}
		j++;
	}
	if (opcodeFunc[j].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", l, comm[0]);
		free(comm);
		free(check);
		free_all_stack(lst);
		fclose(d);
		exit(EXIT_FAILURE);
	}
}
