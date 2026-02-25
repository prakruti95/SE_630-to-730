#include<stdio.h>
#include<conio.h>
int main()
{
    char a='a';
    char b='b';
    char c='c';
    
    
    char *ptr;
    char *ptr2;
    char *ptr3;
    
    ptr = &a;
    ptr2 = &b;
    ptr3 = &c;
    
    printf("\n %p ",ptr);
    printf("\n %p ",ptr2);
    printf("\n %p ",ptr3);
    
    
    
    return 0;
}