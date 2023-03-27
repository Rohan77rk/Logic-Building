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

    public int Product(int Arr[])
    {
    
        int i = 0;
        int iMult = 1;
        int iCnt = 0;

        for(i = 0; i < Arr.length ; i++)
        {
            if(Arr[i] % 2 != 0)
            {
                iCnt++;
                
            iMult = iMult * Arr[i];
            }
            
        }
        if(iCnt <= 0)
        {
            iMult = 0;
        }
        return iMult;
            
        

    }
}

class Program34_5
{
    public static void main(String Args[])
    {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int iLength = sobj.nextInt();

       

        int N[] = new int [iLength];
        
        Number obj = new Number();

        obj.Accept(N,iLength);
        obj.Display(N,iLength);

        System.out.println(); 
       int iRet = obj.Product(N);

       System.out.println("Product of odd elements = "+iRet);

        

        
    }
}