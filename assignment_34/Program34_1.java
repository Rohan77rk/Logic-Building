import java.util.*;

class Number
{
    public void Accept(int Arr[],int iSize)
    {
        Scanner sobj = new Scanner(System.in);
        for(int i = 0; i < iSize; i++)
        {
            System.out.println("Enter the element no : "+(i+1));
            Arr[i] = sobj.nextInt();

        }
    }

    public void Display(int Arr[],int iSize)
    {
        
        
        for(int i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
            

        }
    }

    public boolean Check(int Arr[],int iNo)
    {
        int iCnt = 0;
        boolean bCheck = false;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                iCnt++;
            }
            
        }
        if(iCnt > 1)
        {
            bCheck = true;
        }

        return bCheck;
    }
}

class Program34_1
{
    public static void main(String Args[])
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int iLength = sobj.nextInt();

        System.out.println("Enter the number to check:");
        int iValue = sobj.nextInt();
        
        int N[] = new int [iLength];
        
        Number obj = new Number();

        obj.Accept(N,iLength);
        obj.Display(N,iLength);
        bRet = obj.Check(N,iValue);

        System.out.println();

        if(bRet == true)
        {
            System.out.println(iValue+" is present");
        }
        else
        {
            System.out.println(iValue+" is absent");
        }
    }
}