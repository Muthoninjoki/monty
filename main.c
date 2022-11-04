#include "monty.h"
/*monty_details*/
#define AGSIZE 10
/**
 *main - main file
 *@argc:args count
 *@argv:args vector
 *Return:0
 */
int main(int argc, char *argv[])
{
	/*initialization */
	mon.line_number = 1;
	mon.stack_queue = 1;
	mon.file = NULL;
	mon.args = malloc(sizeof(char *) * AGSIZE);
	if (!mon.args)
	{
		dprintf(STDERR_FILNO, "USAGE: monty file\n");
		free();
		exit(EXIT_FAILURE);
	}
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		freer();
		exit(EXIT_FAILURE);
	}
	if (access(argv[1], R_OK) == -1)
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
