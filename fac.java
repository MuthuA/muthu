import java.util.*;
class simple
{
    public static void main(String args[])
    {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int fact=1,i;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        System.out.println("fact value  "+fact);
        
    
}
}
