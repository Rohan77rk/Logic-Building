import java.util.*;

class MyArray
{
    void Accept(int arr[])
    {
        Scanner sobj = new Scanner(System.in);
        for(int i = 0;i < arr.length; i++)
        {
            System.out.print("Enter element no "+(i+1)+"=");
            arr[i] = sobj.nextInt();
        }
        System.out.println();
            }

    void Display(int arr[])
    {
        System.out.println("Elements of Array are :");
        Scanner sobj = new Scanner(System.in);
        for(int i = 0;i < arr.length; i++)
        {
            System.out.print(arr[i]+"\t");
        }
        System.out.println();
    }
    public void SumArray(int arr[])
    {
        int No = 0,Sum = 0,Digit = 0;
        
        int output[] = new int[arr.length];
        for(int i = 0; i< arr.length; i++)
        {
            No = arr[i];
            while(No != 0)
            {
            
            Digit=No % 10;
            Sum = Sum+Digit;
            No = No/ 10;
            }
            output[i] = Sum;
            Digit = 0;
            Sum = 0;
        }
        Display(output);
    }
}

class Program43_2
{
public static void main(String Args[])
{
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the Number of Elements :");
    int iSize = sobj.nextInt();
    int Arr[] = new int[iSize];

    MyArray obj = new MyArray();
    obj.Accept(Arr);
    obj.Display(Arr);
    System.out.println("-----------------------------------------------------------OUTPUT-----------------------------------------------------------");
    obj.SumArray(Arr);

}
}