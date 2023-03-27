import java.util.*;

class Pattern
{
    public void Pattern(String s)
    {
        char Arr[] = s.toCharArray();
        for(int i= (Arr.length) ; i>=1; i--)
        {
            for(int j = 0; j<Arr.length; j++)
            {
                if(j < i)
                {

                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print('*'+"\t");
                }
                }
            
            System.out.println();
        }

        for(int i = 1; i< (Arr.length);i++)
        {
            for(int j = 0 ; j < Arr.length; j++)
            {
                
                {
                if(j > i)
                {
                    System.out.print('*'+"\t");

                }
                else
                {
                System.out.print(Arr[j]+"\t");
                }



            }
        }
            System.out.println();
    }
    }

}


class Program39_4
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