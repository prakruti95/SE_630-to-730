#include<stdio.h>
#include<conio.h>

int main()
{
    
    for(int i=1;i<=5;i++)//row
    {
        for(int j=1;j<=i;j++)//col
        {
            printf("%d",j);
        }
        printf("\n");
        
    }

    return 0;
}
