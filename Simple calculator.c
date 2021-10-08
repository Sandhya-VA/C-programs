#include <stdio.h>
int main(void) {
  int num1=0;
  int num2=0;
  int sum=0;
  int sub=0;
  int mul=0;
  int div=0;
  printf("Enter two numbers\n");
  scanf("%d",&num1);
  scanf("%d",&num2);
  sum=num1+num2;
  printf("Addition of two numbers is %d:\n",sum);
  sub=num1-num2;
  printf("Subtraction of two numbers is %d:\n",sub);
  mul=num1*num2;
  printf("Multiplication of two numbers is %d:\n",mul);
  div=num1/num2;
  printf("Division of two numbers is: %d\n",div);
  return 0;
}