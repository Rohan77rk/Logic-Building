import java.util.*;

class StringDemo
{
    public boolean StrCmpX(String s1,String s2,int iNo)
    {
        int iCnt = 0;
        boolean bCheck = false;
        char Arr1[] = s1.toCharArray();
        char Arr2[] = s2.toCharArray();
        
        
    
        for(int i = 0; i < iNo; i++)
        {
            
           if(Arr1[i] == Arr2[i])
           {
            iCnt++;
           }
        }
        
        
        if(iCnt == iNo)
        {
            bCheck = true;
        }
        return bCheck;
        
    }


}
class Program35_3
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the first string :");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string :");
        String str2 = sobj.nextLine();

        System.out.println("Enter the number");
        int iValue = sobj.nextInt();        

        StringDemo obj = new StringDemo();
        boolean bRet = obj.StrCmpX(str1,str2,iValue);

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