import java.util.*;
class Sample
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,n1,i,j,count=0,flag;
        n=sc.nextInt();
        n1=sc.nextInt();
        for(i=n;i<=n1;i++)
        {
             flag=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
                count++;
        }
        
        System.out.println(count);
    }
}
