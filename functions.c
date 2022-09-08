#include "monty.h"

/**
* add_dnodeint_end - adds a node at end of list
* @head: pointer
* @n:int
* Return: address of new node
*/

stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *new_node, *temp;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		dprintf(STDERR_FILENO, "Error:malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp = *heaf;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}

/**
* add_node_beg - adds a node at the beginning of a dlist
* @head:pointer
* @n:int
* Return:address of new node
*/

stack_t *add_node_beg(stack_t **head, const int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}

/**
* free_dlistint - frees dlist
* @head:dlinked list
* Return:void
*/

void free_dlistint(stack_t *head)
{
	stack_t *temp;

	if (head == NULL)
		return;
	while (head->prev)
	{
		head = head->next;
	}
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
}

/**
* is_no - checks if char is no
* @c: char
* Return:1 if true, 0 if otherwise
*/
int is_no(char c)
{
	if (c < '0' ||| c > '9')
		return (0);
	return (1);
}




































































