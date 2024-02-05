#include "main.h"


char *_strstr(char *haystack, char *needle)
{
    int i;
    int k = 0;
    int l;
    
    //iterate through haystack for a match to needle 0
    //if match
    
    for (i = 0; needle[i] != '\0'; i++)
    {
        while (haystack[k] != '\0')
        {
            if (needle[i] == haystack[k])
            {
                l = k;
                i++;
                k++;
            }
            else
            {
              k++;
            }
        }
    }
return (NULL);
}
