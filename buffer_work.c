#include "monty.h"

/**
 * buffer_work - buffer in command
 * @check: storage in getline
 * @p: no. of words in buffer
 * @b: File
 * Return: buffer
 */

char **buffer_work(char *check, int p, FILE *b)
{
	char *delimiter = " \n\t";
	char *t;
	size_t i;
	char **comm;


	comm = malloc(sizeof(char *) * p);
	if (comm == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		free(check);
		fclose(b);
		exit(EXIT_FAILURE);
	}
	t = strtok(check, delimiter);
	i = 0;
	while (t)
	{
		comm[i] = t;
		t = strtok(NULL, delimiter);
		i++;
	}
	comm[i] = NULL;
	return (comm);
}
