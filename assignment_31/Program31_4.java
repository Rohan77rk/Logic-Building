import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String s)
    {
        int iCnt = 0;
        boolean BCheck = false ;
        char Arr[] = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {

        if((s.charAt(i)=='a') || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u')
        {
            iCnt++;

        }
        }

        if(iCnt >= 1)
        {
            BCheck = true;
        }
        return BCheck;
    }
}

class Program31_4
{
    public static void main(String A[])
    {

    Scanner sobj= new Scanner(System.in);

    System.out.println("Enter the string :");
    String value = sobj.nextLine();

    StringDemo obj = new StringDemo();
    boolean bRet =  obj.ChkVowel(value);

    if(bRet == true)
    {
        System.out.println("vowel is PRESENT");
    }
    else
    {
        System.out.println("vowel is ABSENT");
    }
    }
}