#include "monty.h"

/**
 * file_work - validate file
 * @monty_file: file to open
 *
 * Return: Void
 */

void file_work(char *monty_file)
{
	FILE *a;
	char *check = NULL, **comm;
	size_t sz = 0;
	ssize_t j;
	int p, l = 0, i = 0;
	stack_t *lst = NULL;

	a = fopen(monty_file, "r");
	if (a == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", monty_file);
		exit(EXIT_FAILURE);
	}
	while ((j = getline(&check, &sz, a)) != EOF)
	{
		if (!check)
		{
			write(2, "Error: malloc failed\n", 21);
			fclose(a);
			exit(EXIT_FAILURE);
		} l += 1;
		if (j == 1)
			continue;
		else
		{
			i = 0;
			while (check[i] == ' ' && check[i + 1] == ' ')
				i++;
			if (check[i + 1] == '\n')
				continue;
		}
		p = storage(check);
		comm = buffer_work(check, p, a);
		val_opcode(comm, check, &lst, l, a);
		free(comm);
	}
	free_all_stack(&lst);
	free(check);
	fclose(a);
}
