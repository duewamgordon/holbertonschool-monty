#include "monty.h"

/**
 * check_num - checks if int is an integer
 * @str: srtring to be checked
 * Return: 1 if success, 0 unsuccessful
*/

int check_num(char *str)
{
	int d = 0;

while (str[d])
{
	if (d == 0 && str[d] == '-' && str[d + 1])
	{
	d++;
	continue;
	}
	if (str[d] < '0' || str[d] > '9')
	return 0;
	d++;
}
	return (1);
}
