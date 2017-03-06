import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
	String str;
	char s,m=' ';
	int i,count=0,n,sum=0,j;
	Scanner sc=new Scanner(System.in);
	str=sc.nextLine();
	System.out.println("given string---->"+str);
	n=str.length();
	for(i=0;i<n-1;i++)
	{   count=0;
	    s=str.charAt(i);
	    for(j=i+1;j<n;j++)
	    {
	        if(s==str.charAt(j))
	        count++;
	    }
	    if(count>sum)
	     sum=count;
	     m=s;
	     
	}
	System.out.println("times-->"+sum+"  \ncharacter-->"+m);
	}
	
}
