#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * struct stack_s - representation of a stack
 * @n: int
 * @prev: previous element
 * @next: next element
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: opcode
 * @f: handles the opd=code
 *
 * Description: opcode and its function
 * fir stack, queues, FIFO, LIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 *struct monty - holds monty details
 *@args:args
 *@buff:buffer
 *@len:length
 *@stack:stack
 *@line_number:line no
 *@line:getline
 *@file:file stream
 *@stack_queue:corresponds to a stack or a queue
 */
typedef struct monty
{
	char **args;
	char *buff;
	size_t len;
	stack_t *stack;
	unsigned int stack_queue;
	int line;
	FILE *file;
	unsigned int stack_queue;
} monty_details;
monty_details mon;
void parse(void);
int is_no(char c);
stack_t *add_dnodeint_end(stack_t **head, const int n);
stack_t *add_node_beg(stack_t **head, const int n);
/* free functions*/
void freer(void);
void free_dlistint(stack_t *head);
/*opcodes*/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stackk, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div_op(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
/*op functions*/
void ops(void);
#endif/*MONTY_H*/






