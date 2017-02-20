import java.util.*;
class sample
{
public static void main(String[] args) {
        
        String str;
        Scanner in=new Scanner(System.in);
        str=in.nextLine();
        int n=str.length();
        int i,sum=0,rev,avg;
        char m,res;
        for(i=0;i<n;i++)
        {
            m=str.charAt(i);
            rev=(int)m;
            sum=sum+rev;
        }
        avg=sum/n;
        res=(char)avg;
        System.out.println(res);
}
}
