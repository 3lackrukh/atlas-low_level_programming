#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
#include "function_pointers.h"

int main(int argc, char *argv[])
{
	
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
        {
                printf("Error\n");
                exit (98);
        }
	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return(0);
}
