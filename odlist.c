#include<stdio.h>
int main()
{
 int i,n,x;
 printf("enter values:");
 scanf("%d %d",&i,&n);
 for(x=i;x<=n;x++)
 {
  if(x%2==0)
    {
     printf("%d",x);
    }
   }
   return 0;
 }
