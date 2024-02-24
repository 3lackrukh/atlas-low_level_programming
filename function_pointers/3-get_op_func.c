#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * *get_op_func- selects the correct function to perform the
 * operation asked by the user.
 *
 * @s: the function operator called for.
 *
 * Return
 * int (*get_op_func(char *s))(int, int);
