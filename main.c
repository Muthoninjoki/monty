#include "monty.h"

#define AGSIZE 10
/**
* main- main file
*@argc:arguments
*@argv:vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	mon.line_number = 1;
	mon.stack_queue = 1;
	mon.file = NULL;
	mon.args = malloc(sizeof(char *) * AGSIZE);
	if (!mon.args)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		freer();
		exit(EXIT_FAILURE);
	}

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		freer();
		exit(EXIT_FAILURE);
	}
	mon.file = fopen(argv[1], "r");
	if (!mon.file)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		freer();
		exit(EXIT_FAILURE);
	}
	parse();
	freer();
	return (EXIT_SUCCESS);
}
