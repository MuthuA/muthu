#include<stdio.h>
int main()
{ 
 chat str[30],i,c=0,n=0,v=0,len=0;
 printf("enter string:");
 scanf("%s",&str);
 for(i=0;str[i]!='\0';i++)
 {
 len++;
 }
 for(i=0;i<len;i++)
 {
  if(str[i]>=65 && str[i]<=0 || str[i]>=97 && str[i]<=123)
  {
   c++;
   }
   else if(str[i]>=49 && str[i]<=57)
   {
    n++;
   }
   else
    {
     v++;
    }
   }
   printf("%d %d %d",c,n,v);
   return;
   }
