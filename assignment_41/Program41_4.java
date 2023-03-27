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

    public int[] ArrayConCatX(int A[],int B[])
    {
         int lengthRet= (A.length+B.length);
        int Ret[] = new int[lengthRet];
        System.out.println("ODD ELEMENTS :");
        for(int i = 0; i < A.length;i++)
        {
            Ret[i] = A[i];

        }
        
        for(int j = (A.length),k = 0;(j < lengthRet) && (k < (B.length));j++,k++)
        {
            Ret[j]= B[k];
        }
        
        
    return Ret;
    }
}


class Program41_4

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
        obj.Accept(Arr2);
        
        obj.Display(Arr1);
        obj.Display(Arr2);
        
        int iRet[]=obj.ArrayConCatX(Arr1,Arr2);

        obj.Display(iRet);

        


    }
}