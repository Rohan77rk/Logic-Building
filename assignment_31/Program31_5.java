import java.util.*;

class StringDemo
{
    public void DisplayReverse(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();
        for(int i = (Arr.length-1); i >= 0;i--)
        {
            System.out.print(s.charAt(i));
        }
            
    }
}

class Program31_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        obj.DisplayReverse(str);

    }
}