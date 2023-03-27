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

    public int LastOcc(int Arr[],int iNo)
    {
    
        int i = 0;
        int iRet = 0;
        for(i = (Arr.length - 1); i >= 0 ; i--)
        {
            if(Arr[i] == iNo)
            {
                
                iRet  = i;
                break;
            }
            else
            {
                iRet = -1;
            }
            
        
            
            
        }
        
            return i;
        

    }
}

class Program34_3
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
        int iRet = obj.LastOcc(N,iValue);

        System.out.println();
        System.out.println(iRet);

        
    }
}