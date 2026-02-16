#include <stdio.h>

int main() 
{
     int n, sum = 0, i = 0 ;

     printf ("Enter a number") ;
     scanf ("%d", &n); //10
     
     tops:
     i++;//1//2//10
     sum+=i;//1+2=3+
     
     if(i<n)
     goto tops;
     printf ("\n sum of %d natural numbers = %d", n, sum) ;

    return 0;
}
