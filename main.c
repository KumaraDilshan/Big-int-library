#include "bigint.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


int main(){
  int i,f,count;

  for(f = 1; f <=100; f++) {

     char * a1="1";   

           bigint_t a=  new_bigint(a1);   //make int arrays for a and b and fib by using new_bigint function of the bigint header
           bigint_t b=new_bigint(a1);
           bigint_t fib=new_bigint(a1);

    for(i=2; i < f; i++) {
      add(fib,a,b);
      for(count=0;count<30;count++)   //the loop runs to equal a and b also b and fib elementwise
      {
            a[count] = b[count];
            b[count] = fib[count];
      }

    }

    printf("%d the Fib is ",f);
    show_bigint(fib);  //print the result
    printf("\n");

  } // end for(fib=10..)

  return 0;
}

