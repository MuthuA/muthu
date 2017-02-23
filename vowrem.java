public class Pro
{
    public static void main(String args[])
    {

      String str,str1="",str2="";
      Scanner sc=new Scanner(System.in);
      System.out.println("enter value:");
      str=sc.nextLine();
      int i,j;
      char c;
      for(i=str.length()-1;i>=0;i--)
      {
          str1=str1+str.charAt(i);
      }
      System.out.println("output  1---> "+str1);
      str2=str1.replaceAll("[aeiouAEIOU]","");
      System.out.println("output 2--->"+str2);
     
    }
}
