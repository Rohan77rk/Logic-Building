import java.util.*;

class StringDemo
{
    public String ConcatX(String s1,String s2, int iNo)
    {
        char Arr1[] = s1.toCharArray();
        char Arr2[] = s2.toCharArray();
        int iSize = (Arr1.length + Arr2.length) - iNo;
        char copy[]= new char[iSize];

        for(int i = 0; i < Arr1.length; i++)
        {
            copy[i] = Arr1[i];
        }

        for(int j = Arr1.length, k = 0; (j < iSize) && (k < iNo);j++,k++)
        {
            copy[j] = Arr2[k];
        }
        
        String result = new String(copy);
        return result;
        
    }


}
class Program35_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the first string :");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string :");
        String str2 = sobj.nextLine();

        System.out.println("Enter the number :");
        int iValue = sobj.nextInt();

        StringDemo obj = new StringDemo();
        String sRet = obj.ConcatX(str1,str2,iValue);

        System.out.println("output : "+sRet);


        

    }
}