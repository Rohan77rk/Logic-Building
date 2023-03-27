import java.util.*;
class ArrayDemo
{
    public void Accept(int Arr[],int iSize)
    {
        System.out.println("Enter the Array elements:");

    for(int i = 0; i < iSize ;i++)
    {
        System.out.println("Enter the element no:"+(i+1));
    Scanner sobj = new Scanner(System.in);
    Arr[i] = sobj.nextInt();
    }
    
    }

    public void Display(int Arr[],int iSize)
    {
        for(int i = 0; i < iSize;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
    }

    public int Difference(int Arr[])
    {
       int iOddSum = 0;
       int iEvenSum = 0;
       int iDiff = 0;

       for(int i = 0; i < Arr.length;i++)
       {
        if(Arr[i]%2 == 0)
        {
            iEvenSum = iEvenSum + Arr[i];
        } 
        else
        {
            iOddSum = iOddSum + Arr[i];
        }
       } 
       iDiff = iOddSum - iEvenSum;
       if(iDiff < 0)
       {
        iDiff = -iDiff;
       }
       return iDiff;
    
    }
}
class Program32_1
{
    public static void main(String A[])
    {
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the length of array =");
    int iLength = sobj.nextInt();
        int value[] = new int[iLength];
    

    ArrayDemo obj = new ArrayDemo();
    obj.Accept(value,iLength);
    obj.Display(value,iLength);
    int iRet = obj.Difference(value);
    System.out.println();
    System.out.println("Difference between odd and even numbers ="+iRet);
    }
}
