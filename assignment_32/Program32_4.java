import java.util.*;

class ArrayDemo
{
    public void Accept(int Arr[],int iSize)
    {
        Scanner sobj = new Scanner(System.in);
        for(int i = 0; i < iSize; i++)
        {
            System.out.println("enter element no :"+(i+1));
            Arr[i] =sobj.nextInt();
        }   

    }

    public void Display(int Arr[],int iSize)
    {
        for(int i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
    }

    public void Divisible(int Arr[],int iSize)
    {
        for(int i = 0; i < iSize; i++)
        {
            if((Arr[i]%5 == 0) && (Arr[i] % 3== 0))
            {
                System.out.print(Arr[i]+"\t");
            }
        }
    }
    

}

class Program32_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter the Size of array :");
        int iLength = sobj.nextInt();

        int value[]= new int[iLength];

        ArrayDemo obj =new ArrayDemo();
        obj.Accept(value,iLength);
        obj.Display(value,iLength);
        System.out.println();
        obj.Divisible(value,iLength);

    }
}