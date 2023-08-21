#include "main.h"

/* Define the specifier array */

static const specifier_info specifier[] = {
	{'c', print_character},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_integer},
	{'i', print_integeri},
	{'u', print_unsigned_integer},
	{'o', print_octal},
	{'x', print_hex_lower},
	{'X', print_hex_upper},
	{'p', print_pointer},
	{0, NULL}
};

/* Implement the function to get the specifier array */
const specifier_info *get_specifier_array(void)
{
	return (specifier);
}
