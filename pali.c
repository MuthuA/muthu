#include<stdio.h>
int main()
{
 int num,rev,sum=0,num1;
 printf("enter num");
 scanf("%d",&num);
 num1=num;
 while(num>0)
 {
  rev=num%10;
  sum=sum*10+rev;
  num/=10;
  }
  if(sum==num1)
   printf("palindrome");
   else
    printf("not palindrome");
   return 0;
  }
 
