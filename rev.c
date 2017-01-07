#include<stdio.h>
int main()
{
 int num,rev,sum=0;
 printf("enter num");
 scanf("%d",num);
 while(num>0)
 {
  rev=num%10;
  sum=sum*10+rev;
  num/=10;
  }
  printf("%d",sum);
  return 0;
 }
