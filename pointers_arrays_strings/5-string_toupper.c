#include "main.h"

/**
 *
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if ((ptr[i] >= 97) && (ptr[i] <= 122))
		{
			(ptr[i] + 32);
		}
	}




//har* string_toupper(char *str);
//
//char* string_toupper(char *str)
//	{
//	        int i = 0;
//
//	        while (i != '\0')
//	        {
//	                if ((str[i] >= 97) && (str[i] <= 122))
//	                {
//	                        (str[i] + 32);
//	                        i++;
//	                }
//	        }
//
