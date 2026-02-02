#include<stdio.h>
#include<conio.h>
int main()
{
   int year;
   
   printf("Enter Your Year");
   scanf("%d",&year);
   
   if(year%4==0)
   {
       printf("Leap Year");
   }
   else
   {
       printf("Not leap year");
   }
    
    
    return 0;
}
