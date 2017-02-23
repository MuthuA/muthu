import java.util.Scanner;
public class Pro
{
   public boolean isHoliday(String str)
    {
        boolean isHoliday = false;
       if(str.equals("saturday") || str.equals("sunday"))
        {
           isHoliday = true;
        }
   return isHoliday;
    } 
    public static void main(String args[])
    {
        Pro bb=new Pro();
        String day;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the day:");
        day=sc.nextLine();
        
        if(bb.isHoliday(day))
            System.out.println("given day is holiday");
        else
             System.out.println("given day is working day");
            
         }
}
