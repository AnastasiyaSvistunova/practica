#include "func.h"

void strcat(char* dest, int len, const char* first, const char* second)
{	
	dest[len] = '\0';
	if (strlen(first) + strlen(second) < len)
	{
		int k = 0;
		while (dest[k] != '\0') 
		{
			for (int i = 0; i < strlen(first); i++)
			{
				dest[k] = first[i];
				k++;
			}
			for (int i = 0; i < strlen(second); i++)
			{
				dest[k] = second[i];
				k++;
			}
			dest[k] = '\0';
			break;
		}
	}
	else
	{
		int i;
		int k = 0;
		for (i = 0; i < strlen(first); i++) 
		{
			if (i == len)
			{
				break;
			}
			dest[i] = first[k];
			k++;
		}
		k = 0;
		for (i = strlen(first); i < strlen(first) + strlen(second); i++)
		{
			if (i == len)
			{
				break;
			}
			dest[i] = second[k];
			k++;
		}
		dest[i] = '\0';
	}
}