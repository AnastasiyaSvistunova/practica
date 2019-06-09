#include "func.h"

void strcpy(char *dest, int len, const char *src)
{	
	if (strlen(src) > len)
	{
		int i;
		for (i = 0; i < len - 1; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
	else 
	{
		int i;
		for (i = 0; i < strlen(src); i++) 
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
}