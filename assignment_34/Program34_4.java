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

    public void Range(int Arr[],int iStart, int iEnd)
    {
    
        int i = 0;
        int iRet = 0;
        for(i = 0; i < Arr.length ; i++)
        {
            if((Arr[i] >= iStart) && Arr[i] <= iEnd)
            {
                
            System.out.print(Arr[i]+"\t");
            }
            
            
        
            
            
        }
        
            
        

    }
}

class Program34_4
{
    public static void main(String Args[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int iLength = sobj.nextInt();

        System.out.print("Enter starting Point:");
        int iValue1 = sobj.nextInt();
        
        System.out.println("Enter ending Point:");
        int iValue2 = sobj.nextInt();

        int N[] = new int [iLength];
        
        Number obj = new Number();

        obj.Accept(N,iLength);
        obj.Display(N,iLength);

        System.out.println(); 
        obj.Range(N,iValue1,iValue2);

        

        
    }
}