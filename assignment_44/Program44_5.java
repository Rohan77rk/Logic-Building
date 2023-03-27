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
    public void Pattern(int arr[])
    {
        
        int temp = 0;
        
        for(int i = 0; i< arr.length; i++)
        {
            temp = arr[i];
            while(temp != 0)
            {
                System.out.print("* ");
                temp--;
            }    
            temp = 0;
            System.out.println();
        }
        
    }
}

class Program44_5
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
    obj.Pattern(Arr);

}
}