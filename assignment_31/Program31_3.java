import java.util.*;

class StringDemo
{
    public int Frequency(String s)
    {
        int iCap = 0;
        int iSmall = 0;
        int iFrequency = 0;
        char Arr[] = s.toCharArray();
        for(int i = 0; i< Arr.length;i++)
        {
            if(s.charAt(i) >= 'a' && s.charAt(i) <= 'z')
            {
                iSmall++;
            }
            else if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z')
            {
                iCap++;
            }
        }
        iFrequency = iCap - iSmall;
        if(iFrequency < 0)
        {
            iFrequency = -iFrequency;
        }
            return iFrequency;
    }
}

class Program31_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.Frequency(str);

        System.out.println("Difference between Capital and small ="+iRet); 

    }
}