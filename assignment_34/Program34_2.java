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

    public int firstOcc(int Arr[],int iNo)
    {
    
        int i = 0;
        int iRet = -1;
        while(i < Arr.length)
        {
            if(Arr[i] == iNo)
            {
                iRet = i;
                break;
            }
            else
            {
                iRet = -1;
            }
            i++;
            
            
        }
        
        return iRet;

    }
}

class Program34_2
{
    public static void main(String Args[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int iLength = sobj.nextInt();

        System.out.println("Enter the number to check:");
        int iValue = sobj.nextInt();
        
        int N[] = new int [iLength];
        
        Number obj = new Number();

        obj.Accept(N,iLength);
        obj.Display(N,iLength);
        int iRet = obj.firstOcc(N,iValue);

        System.out.println();
        System.out.println(iRet);

        
    }
}