#include "monty.h"

/**
 * main - The monty program
 * @argc: no. arguments
 * @argv: arguments vector
 * Return: zero (0)
 */

int main(int argc, char *argv[])
{

	char *monty_file;

	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}

	monty_file = argv[1];
	file_work(monty_file);

	return (0);
}
