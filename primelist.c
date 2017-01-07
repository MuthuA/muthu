#include<stdio.h>
int main()
{
 int i,j,n,x,flag=0;
 printf("enter two numbers:");
 scanf("%d%d",&x,&n);
 for(i=x;i<=n;i++)
 {
  for(j=x;j<=i/2;j++)
  {
   if(i%j==0)
   {
    flag=1;
    break;
   }
  }
  if(flag==0)
   printf("%d",i);
  }
  return 0;
 }
  
