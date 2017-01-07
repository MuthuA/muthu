#include<stdio.h>
int main()
{
 int n,n1,max;
 printf("two numbers:");
 scanf("%d %d",&n,&n1);
 max=(n>n1)?n:n1;
 while(1)
 {
  if(n%max==0 && n1%max==0)
    {
     printf("%d",max);
    }
    max++;
  }
  return 0;
}
