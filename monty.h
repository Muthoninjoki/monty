#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
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
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
* struct monty- to hold monty details
* @args:args passed
* @buff:buffer
* @len:length
* @stack:pointer
* @line_number:monty file line no
* @line: return getline
* @file:pointer
* @stack_queue:corresponds to a stack
*/
typedef struct monty
{
	char **args;
	char *buff;
	size_t len;
	stack_t *stack;
unsigned int line_number;
	int line;
	FILE *file;
	unsigned int stack_queue;
} monty_details;
monty_details mon;

void parse(void);

int is_no(char c);
stack_t *add_dnoeint_end(stack_t **head, const int n);
stack_t *add_node_beg(stack_t **head, const int n);

void freer(void);
void free_dlistint(stack_t *head);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line number);

void ops(void);
#endif /* __MONTY_H__ */
