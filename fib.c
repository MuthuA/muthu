#include<stdio.h>
int main()
{
 int i,n,a,b,temp;
 printf("enter n value:")
 scanf("%d",&n);
 a=0;
 b=1;
 printf("0");
 for(i=1;i<=n;i++)
 {
 temp=a+b;
 printf(%d",a);
 a=b;
 b=temp;
}
return 0;
}
 
