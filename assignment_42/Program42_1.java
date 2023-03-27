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

    public int SumDiff(int A[],int B[])
    {
         int iSum1 = 0;
         int iSum2 = 0;
         int iDiff = 0;
        for(int i = 0; i < A.length;i++)
        {
            iSum1 = iSum1+A[i];

        }
        for(int j  = 0;j < B.length;j++)
        {
            iSum2 = iSum2+B[j];

        }
        
    
        iDiff = iSum1-iSum2;
        
    return iDiff;
    }
}


class Program42_1

{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number of the elements in First Array:");
        int iSize1 = sobj.nextInt();

        System.out.println("Please enter the number of the elements in second Array:");
        int iSize2 = sobj.nextInt();

        int Arr1[] =new int[iSize1];
        int Arr2 []= new int[iSize2];

        MyArray obj = new MyArray();

        obj.Accept(Arr1);
        obj.Accept(Arr2);
        
        obj.Display(Arr1);
        obj.Display(Arr2);
        
        int iRet =obj.SumDiff(Arr1,Arr2);

        System.out.println("DIFFRENCE BETWEEN THE SUMMATION OF BOTH ARRAYS = "+iRet);

        

        


    }
}