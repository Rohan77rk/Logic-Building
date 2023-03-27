import java.util.*;

class StringDemo
{
    public int SmallCount(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();
        for(int i = 0; i< Arr.length;i++)
        {
            if(s.charAt(i) >= 'a' && s.charAt(i) <= 'z')
            {
                iCnt++;
            }
        }
            return iCnt;
    }
}

class Program31_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.SmallCount(str);

        System.out.println("Number of small character ="+iRet); 

    }
}