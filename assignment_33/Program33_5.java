import java.util.*;

class Digit
{
    public int CountDiff(int iNo)
    {   
        int iTemp = iNo;
        int iDigit = 0;
        int iDiff = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }    
            else
            {
                iOddSum = iOddSum + iDigit;
            }
        
            iTemp = iTemp / 10;
        }
        iDiff = iOddSum - iEvenSum;
        if(iDiff < 0)
        {
            iDiff = -iDiff;
        }
        return iDiff;
    }
}

class Program33_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number :");
        int iValue = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountDiff (iValue);

        System.out.println("Number of even digits in "+iValue+" = "+iRet);

    }
}