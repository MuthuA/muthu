public class Pro
{
    public static void main(String args[])
    {

      int input;
      Scanner sc=new Scanner(System.in);
      System.out.println("enter value:");
      input=sc.nextInt();
      int values=0;
      while(input>=10){
	values=0;
	while(input!=0){
		int temp=input%10;
		values=values+(temp*temp);
                System.out.println(values);
		input=input/10;
	}
	input=values;
}
if(input==1){
	System.out.println("happy");
}
else
	System.out.println("not happy");
	}

}
