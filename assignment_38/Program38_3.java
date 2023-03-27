import java.util.*;

class Pattern
{
    public void Pattern(String s)
    {
        char Arr[] = s.toCharArray();
        for(int i = 0; i<=Arr.length;i++)
        {
            for(int j = 0 ; j <= Arr.length; j++)
            {
                
                {
                if(j < i)
                {
                System.out.print(Arr[j]+"\t");

                }
                else
                {
                    System.out.print(' '+"\t");
                }



            }
        }
            System.out.println();
    }

}
}

class Program38_3
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter the string :\n");
        String value = sobj.nextLine();

        Pattern obj = new Pattern();

        obj.Pattern(value);
    }
}