class simple
{
    public static void main(String args[])
    {
        String str="muthu";
        String n_str=" ";
        int n=str.length();
        int i;
        for(i=n-1;i>=0;i--)
        {
            n_str=n_str+str.charAt(i);
        }
        System.out.print(n_str);
    
}
}
