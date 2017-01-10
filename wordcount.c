#include<stdio.h>
int main()
{
 char str[50];
 int i,len=0,count=0;
 printf("enter string");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }
 for(i=0;i<len;i++)
 {
  if(str[i]==' ')
  {
   count++;
  }
 }
 printf("%d",count);
 return 0;
 }
