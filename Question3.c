#include<stdio.h>

int main() 
{
    int num, a;
    printf("Enter a number:");
    scanf("%d", &num);
    a=num%2;
    switch(a)
    { 
        case 0 : printf("Number is even");
         break;
         default: printf(" Number is odd");
         break;
    }
 return 0;
}   