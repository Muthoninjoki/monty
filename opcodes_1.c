#include "monty.h"
/**
* push - pushes an element to the stack
* @stack:pointer
* @line_number: no of monty files to parse
*/

void push(stack_t **stack, unsigned int line_number)
{
	int number, i = 0;
	char *n = mon.args[1];

	if (n == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		freer();
		exit(EXIT_FAILURE);
	}

	while (n[i])
	{
		if ((is_no(n[i]) == 0 && n[i] != '-') || (n[i] == '-' && n[i + 1] == '\0'))
		{
			dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
			freer();
			exit(EXIT_FAILURE);
		}
		i++;
	}
	number = atoi(n);
	mon.args[1] = NULL;
	if (mon.stack_queue == 1)
		add_dnodeint_end(stack, number);
	else
		add_node_beg(stack, number);
}

/**
* pall - prints all the values on the stack, starting from the top of the stack
* @stack:pointer
* @ln: line no
*/

void pall(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;

	(void)ln;
	if (tmp == NULL)
		return;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (tmp->prev != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
	printf("%d\n", tmp->n);
}














