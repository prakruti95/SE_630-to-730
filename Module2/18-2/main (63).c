#include<stdio.h>
#include<conio.h>

int mylength(char ch[])
{
    int i=0;
    
    while(ch[i]!='\0')
    {
        i++;
    }
    
    return i;
}

int main()
{
    int length=0;
    char ch[50]="";
    printf("Enter Value: ");
    scanf("%s",&ch);
    
    //printf("%s",ch);
    length = mylength(ch);
    printf("%d",length);  
  
  
    return 0;
}