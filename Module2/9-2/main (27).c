#include <stdio.h>

int main()
{
    int num,max=0;
    
    printf("Enter Num: ");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num%10;
        if(rem>max)
        {
            max = rem;
        }
        num=num/10;
    }
    
    printf("Biggest digit is : %d",max);

    return 0;
}
