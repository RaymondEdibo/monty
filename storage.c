#include "monty.h"

/**
 * storage - counter
 * @check: checker/validator string
 * Return: no. of words
 */


int storage(char *check)
{
	int i, counter = 2;
	char *delimiter = " ";

	for (i = 0; check[i] != '\0'; i++)
	{
		if (check[i] == delimiter[0])
			counter++;
	}
	return (counter);
}
