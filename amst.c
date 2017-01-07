#include<stdio.h>
int main()
{
 int num,temp,rev,sum=0;
 printf("enter num:");
 scanf("%d",&num);
 temp=num;
 while(num>0)
 {
   rev=num%10;
   sum=sum+(rev*rev*rev);
   num/=10;
  }
  if(temp==sum)
   printf("amstrong")
   else
   printf("not amstrong");
   
   return 0;
  }
