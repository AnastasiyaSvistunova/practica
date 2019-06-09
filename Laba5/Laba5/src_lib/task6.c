#include "func.h"

_Bool insert(const char *src, const char *str, int index, char *dest, int len) 
{	
	if (strlen(src) + strlen(str) < len) 
	{
		strcpy(dest, len, src);
		for (int i = strlen(src) - 1; i >= index; i--)
		{
			dest[i + strlen(str)] = dest[i];
		}
		dest[strlen(src) + strlen(str)] = '\0';
		for (int i = 0; i < strlen(str); i++)
		{
			dest[index + i] = str[i];
		}
		return 1;
	}
	else
	{
		return 0;
	}
}