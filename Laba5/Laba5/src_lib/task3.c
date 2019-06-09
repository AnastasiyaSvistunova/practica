#include "func.h"

void delete(char *str, const char *substr)
{	
	int first_pos = find(str, substr);
	for (int i = first_pos; i < strlen(str) - strlen(substr); i++)
	{
		str[i] = str[i + strlen(substr)];
	}
	for (int i = strlen(str) - strlen(substr); i < strlen(str); i++)
	{
		str[i] = 0;
	}