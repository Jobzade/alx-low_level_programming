#include "school.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */

char *s, to;
void set_string(char **s, char *to);
{
	*s = to;
}
