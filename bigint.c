#include "bigint.h"
#include <stdlib.h>
#include <stdio.h>


/* implement the functions in *.h
 * Given are broken code!!!!!!!
 */
typedef int * bigint_t;     

bigint_t new_bigint(char * a)    //this function take a char array(the corresponding numbers should input as a string) and convert it to a integer array of size 30 and return its pointer
{
    int size=strlen1(a);
    int counter;
    bigint_t arr=(bigint_t)malloc(sizeof(int)*30);
    for(counter=0;counter<size;counter++)
    {
        arr[counter]=a[size-1-counter]-48;   //here the int array take the converted numbers.It take the numbers from the end of the char array
    }
    for(counter=size;counter<30;counter++)   //fill zeros to the remaining elements int the int array
        arr[counter]=0;

    return arr;
}


void free_bigint(bigint_t a)
{
    free(a);
}



int add(bigint_t s, bigint_t a, bigint_t b)
{
    int carry=0,total,counter;

    for(counter=0;counter<30;counter++)    //adding element wise and carry 1 if the summation goes over 10
    {
        total=a[counter]+b[counter]+carry;
        if(total>=10)
        {
            s[counter]=total%10;
            carry=1;
        }
        else
        {
            s[counter]=total;
            carry=0;
        }
    }
    return 0;
}

void show_bigint(bigint_t v)      //this function show(print) the given int array by element wise.
{
    int size=30;
    int count,condition=0;
    for(count=(size-1);count>=0;count--)   //a condition is testing to avoid printing unnecessary zeros at the begining
    {
        if(v[count]!=0 && condition==0)
        condition=1;


          if(condition==1)
            printf("%d",v[count]);
    }
}
