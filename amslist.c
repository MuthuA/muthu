#include<stdio.h>
int main()
{
 int i,num,rev,sum=0,n,temp;
 printf("enter two values");
 scanf("%d%d",&num,&n);
 for(i=num;i<=n;i++)
 { 
  temp=i;
  while(temp>0)
  {
   rev=i%10;
   sum=sum+(rev*rev*rev);
   i/=10;
  }
  if(i==sum)
   printf("%d",i);
  }
  return 0;
 }
