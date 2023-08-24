#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern char *num;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push_opcode(stack_t **st, unsigned int line_no);
void sub_opcode(stack_t **stack, unsigned int line_no);
void pall_opcode(stack_t **st, unsigned int line_no);
char **buffer_work(char *check, int p, FILE *b);
void val_opcode(char **comm, char *check, stack_t **lst, int l, FILE *c);
void add_opcode(stack_t **st, unsigned int line_no);
void nop_opcoode(stack_t **st, unsigned int line_no);
void file_work(char *monty_file);
int storage(char *check);
void pint_opcode(stack_t **st, unsigned int line_no);
void f_comp_opcode(char **comm, char *check, int l, stack_t **lst, FILE *d);
void pop_opcode(stack_t **st, unsigned int line_no);
void swap_opcode(stack_t **st, unsigned int line_no);
void free_all_stack(stack_t **st);

#endif
