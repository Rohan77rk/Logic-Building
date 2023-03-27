import java.util.*;

class Pattern
{
    public void  Pattern(int iRow, int iCol)
    {
        
        for(int i = 1;i <= iRow;i++)
        {
            for(int j = 1;j <= iCol;j++)
            {
                if((j == i) || (i == 1) ||(i == iRow)||(j == 1) || (j == iCol))
                {
                    System.out.print('*'+"\t");
                }
                else 
                {
                    System.out.print(' '+"\t");
                }

            }
            System.out.println();
        }
    }
}

class Program40_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : \n");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : \n");
        int iValue2 = sobj.nextInt();

        Pattern obj = new Pattern();

        obj.Pattern(iValue1,iValue2);
    }
}