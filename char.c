#include<stdio.h>
int main()
{
 char str[50];
 int i,len=0,ch=0;
 printf("\n enter string:");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
  len++;
  }
  for(i=0;i<len;i++)
  {
   if(str[i]>='a' && str<='z' || str[i]>='A' && str[i]<='Z')
   {
    ch++;
   }
  }
  printf("%d",ch);
  return 0;
  }
