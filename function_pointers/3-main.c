#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "function_pointers.h"

int main(int argc, char *argv[])
{
	(void)argc;
	
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
// get_op_func
// takes a single argument, a char pointer
// and returns a pointer to the appropriate function
// which takes two int parameters and returns an int.
//
//
	get_op_func((argv[2])(a, b));

	return(0);
}
