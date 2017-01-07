#include<stdio.h>
int main()
{
 int i,n,x;
 printf("enter two values:");
 scanf("%d%d",&x,&n);
 for(i=x;i<=n;i++)
 {
  if(i%2==0)
  {
   printf("%d",i);
  }
 }
 return 0;
 }
