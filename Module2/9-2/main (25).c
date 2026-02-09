#include <stdio.h>

int main()
{
    int num,fact=1;
    
    printf("Enter Num: ");
    scanf("%d",&num);
    
    if(num<=0)
    {
        printf("Number is Negative or Zero");
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
    
        printf("%d",fact);//5*4*3*2*1
    }
    
    

    return 0;
}
