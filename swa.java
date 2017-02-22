import java.util.*;
class Sample
{
    public static void main(String args[])
    {
        String input;
        StringBuilder output = new StringBuilder();
        Scanner sc=new Scanner(System.in);
        input=sc.nextLine();

        char[] characters = input.toCharArray();

       for (int i = 0; i < characters.length; i++)
     {
      if (i % 2 == 0)
      {
    if((i+1) < characters.length)
    {
      output.append(characters[i + 1]);
    }
               output.append(characters[i]);
  }
}
System.out.println(output);
}
}
