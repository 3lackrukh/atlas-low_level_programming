#include "main.h"


char *_strstr(char *haystack, char *needle)
{
    int i;
    int k = 0;
    int l;
    
    //iterate through haystack for a match to needle 0
    //if match save haystack position
    //iterate i and k 

    //if not match
    //reset i to 0
    //check i0 against k
    //if match save haystack position
    //iterate i and k

    //when i = \0
    //return address haystack l
    
    // if k = \0 return NULL
    
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
