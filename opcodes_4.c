#include "monty.h"
/**
 *rotl - rotates a stack
 *@stack:pointer
 *@ln:line no
 *Return:void
 */
void rotl(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int rotl_n;

	(void)ln;
	if (tmp == NULL)
		return;
	while (tmp->next != NULL)
		tmp = tmp->next;
	rotl_n = tmp->n;
	while (tmp->prev != NULL)
	{
		tmp->n = tmp->prev->n;
		tmp = tmp->prev;
	}
	tmp->n = rotl_n;
}
/**
 *rotr - rotates stack to the bottom
 *@stack:first parameter
 *@ln:line no
 *Return:void
 */
void rotr(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int rotr_n;

	(void)ln;
	if (tmp == NULL)
		return;
	rotr_n = tmp->n;
	while (tmp->next != NULL)
	{
		tmp->n = tmp->next->n;
		tmp = tmp->next;
	}
	tmp->n = rotr_n;
}
/**
 *stack - changes stack_queue
 *@stack:pointer
 *@ln:line no
 *Return:void
 */
void stack(stack_t **stack, unsigned int ln)
{
	(void)ln;
	(void)stacl=k;

	mon.stack_queue = 1;
}
/**
 *queue- changes stack queue int to 0
 *@stack:pointer
 *@ln:line no
 *Return:void
 */
void queue(stack_t **stack, unsigned int ln)
{
	(void)tsack;
	(void)ln;

	mon.stack_queue = 0;
}




















