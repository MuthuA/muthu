import java.util.*;
class sample
{
public static void main(String[] args) {
        
        int arr[]=new Integer[25];
        int max;
        Scanner sc=new Scanner(System.in);
        int i,j,n=25;
        for(i=1;i<=n;i++)
        {
            arr[i]=sc.nextInt();
        }
       max=arr[0];
       for(i=1;i<n;i++)
       {
           if(max<arr[i])
             max=arr[i];
       }
       System.out.println(max);
       
}
}
