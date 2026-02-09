#include <stdio.h>

int main()
{
    int num,sum=0;
    
    printf("Enter Num: ");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num%10;
        sum+=rem;
        num=num/10;
    }
    
    printf("Sum of all digits are : %d",sum);

    return 0;
}
