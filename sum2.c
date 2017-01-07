#include<stdio.h>
int main()
{
 int i,sum=0,sum1=0,n;
 printf("enter n value:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(i<=15)
  {
   sum=sum+i;
  }
  else if(i>15 && i<=45)
  {
   if(i%2==1)
   {
    sum1=sum1+i;
   }
   else
   {
   }
 }
 printf("%d %d",sum,sum1);
 return 0;
}
