#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,space,num;
    
    printf("Enter Num: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(space=1;space<=num-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
