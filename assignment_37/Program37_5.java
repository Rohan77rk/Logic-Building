import java.util.*;

class Pattern
{
    public void Pattern(int row, int col)
    {
        
        
        for(int i = 1; i <= row;i++)
        {
            

            for(int j = 1; j <= col;j++)
            {
                System.out.print(i+"\t");
            
            

            }
        
            System.out.println();
        }
    }

}
class Program37_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter number of rows");
        int iValue1 = sobj.nextInt();

        System.out.println("enter number of columns");
        int iValue2 = sobj.nextInt();

        Pattern obj = new Pattern();
        obj.Pattern(iValue1,iValue2);
        
    }
}