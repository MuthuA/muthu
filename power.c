#include<stdio.h>
#include<math.h>
int main()
{
int n,,power,sum;
printf("enter two values:");
scanf("%d %d",&n,&power);
sum=pow(n,power);
printf("%d",sum);
return 0;
}
