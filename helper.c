#include "helper.h"

/* implementation of the helper functions */
int strlen1(char * c)    //the funciton is to count the elements of a given char array
{
    int counter=0;
    while(c[counter]!='\0')
    {
        counter++;
    }
    return counter;
}

