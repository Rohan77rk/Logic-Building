import java.util.*;

class MyArray
{
    public void Accept(int A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the elements of aray :");
        
        for(int i = 0;i< A.length;i++)
        {
            System.out.println("Enter element "+(i+1)+"=");
            A[i]=sobj.nextInt();
        }
    }

    public void Display(int A[])
    {
        System.out.println("ARRAY ELEMENTS ARE :");
        for(int i = 0; i < A.length;i++)
        {
            System.out.print(A[i]+"\t");
        }
        System.out.println();
    }
}


class Program41_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number of the elements :");
        int iSize = sobj.nextInt();

        int Arr1[] =new int[iSize];
        int Arr2 []= new int[iSize];

        MyArray obj = new MyArray();

        obj.Accept(Arr1);
        obj.Display(Arr1);
        


    }
}