#ifndef _calc_h_
#define _calc_h_
/*headers*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/*protytypes*/
int (*get_op_func(char *s))(int, int);
/*structures and typedef*/
/**
 *struct op - Struct op
 *
 *@op: The operator
 *@f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif /*calc.h*/
