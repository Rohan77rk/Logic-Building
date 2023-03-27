import java.util.*;

class Digit
{
    public int CountOdd(int iNo)
    {   
        int iTemp = iNo;
        int iDigit = 0;
        int iCnt = 0;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit % 2 != 0)
            {
                iCnt++;
            }
            iTemp = iTemp / 10;
        }
        return iCnt;
    }
}

class Program33_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number :");
        int iValue = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountOdd(iValue);

        System.out.println("Number of even digits in "+iValue+" = "+iRet);

    }
}