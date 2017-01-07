#include<stdio.h>
int main()
{
 int num,rev,count=0;
 printf("enter number");
 scanf("%d",&num);
 while(num>0)
 {
   rev=num%10;
   count++;
   num=num/10;
  }
  printf("%d",count);
  return 0;
 }
