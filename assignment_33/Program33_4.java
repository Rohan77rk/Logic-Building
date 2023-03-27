import java.util.*;

class Digit
{
    public int Multiply(int iNo)
    {   
        int iTemp = iNo;
        int iDigit = 0;
        int iMult = 1;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
        iMult = iMult * iDigit;
            iTemp = iTemp / 10;
        }
        return iMult;
    }
}

class Program33_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number :");
        int iValue = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.Multiply(iValue);

        System.out.println("Number of even digits in "+iValue+" = "+iRet);

    }
}