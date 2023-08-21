#include "main.h"

/* Define the specifier array */

static const specifier_info specifier[] = {
	{'c', print_character},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_integer},
	{'i', print_integeri},
	{0, NULL}
};

/* Implement the function to get the specifier array */
const specifier_info *get_specifier_array(void)
{
	return (specifier);
}
