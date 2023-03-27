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

    public boolean ChkPallindrome(int A[])
    {
        int iCnt = 0;
        boolean bCheck = false; 
         int B[] = new int[A.length];
        for(int i = (A.length-1),j = 0; (i >=0) && (j < B.length);i--,j++)
        {
            B[j]=A[i];

    }
    for(int k = 0; k < A.length;k++)
    {
        if(A[k]==B[k])
        {
            iCnt++;
        }
    }
    if(iCnt == A.length)
    {
        return true;
    }
    else
    {
        return false;
    }
}
}


class Program42_5

{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number of the elements in First Array:");
        int iSize = sobj.nextInt();

        

        int Arr1[] = new int[iSize];
        int Arr2 []= new int[iSize];

        MyArray obj = new MyArray();

        obj.Accept(Arr1);
        
        
        obj.Display(Arr1);
        
        
        boolean bRet = obj.ChkPallindrome(Arr1);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        
        
        

       }
}