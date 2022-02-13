
#include<stdio.h>
int main()
{
  int num1, num2, opr;
  printf("Enter the first number:");
  scanf("%d",&num1);
  printf("Enter the second number:");
  scanf("%d", &num2);
  printf("Choose the operator from the following: 
     1. + 2.- 3.* 4./ ");
  scanf("%d", &opr);
  switch(opr)
  { 
    case 1 : printf(" %d+%d= %d ", num1, num2, num1+num2);
    break;
     
    case 2 : printf(" %d-%d= %d ", num1, num2, num1-num2);
    break;
    case 3 : printf(" %d*%d= %d ", num1, num2, num1*num2);
    break;

    case 4 : printf(" %d/%d= %d", num1, num2, num1/num2);
     break;
    
  }
 
    return 0;
}