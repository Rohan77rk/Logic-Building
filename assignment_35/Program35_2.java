import java.util.*;

class StringDemo
{
    public boolean StrCmpX(String s1,String s2)
    {
        boolean bCheck = false;
        char Arr1[] = s1.toCharArray();
        char Arr2[] = s2.toCharArray();
        
        
        if(Arr1.length == Arr2.length)
        {
        for(int i = 0; i < Arr1.length; i++)
        {
            
           if(Arr1[i] == Arr2[i])
           {
            bCheck = true;
           }
        }
        }
        else
        {
            bCheck = false;
        }

        return bCheck;
        
    }


}
class Program35_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the first string :");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string :");
        String str2 = sobj.nextLine();

        

        StringDemo obj = new StringDemo();
        boolean bRet = obj.StrCmpX(str1,str2);

        if(bRet == true)
        {

        System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }


        

    }
}