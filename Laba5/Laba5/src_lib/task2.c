#include "func.h"

_Bool istr(const char* str, const char* substr)
{
	int i = 0;
	while (*(str + i) == *(substr + i) && *(str + i) != '\0')
	{
		i++;
	}
	return (strlen(substr) == i) ? 1 : 0;
}
char *find(const char *str, const char *substr)
{	
	int quantity_str = 0, quantity_substr = 0;
	quantity_str = strlen(str);
	quantity_substr = strlen(substr);
	for (int i = 0; i <= quantity_str - quantity_substr; i++) 
	{
		int j = 0;
		if (str[i] == substr[j])
		{
			while (str[i + j] == substr[j]) 
			{
				j++;
				if (j == quantity_substr)
				{
					return i;
				}
			}
		}
	}
	return -1;
}