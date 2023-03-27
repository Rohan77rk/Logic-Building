import java.util.*;

class MyArray
{
    void Accept(char arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Characters :");
        String s = sobj.nextLine();
        char brr[] = new char[s.length()];
        
        for(int i = 0;i < s.length(); i++)
        {
            
            brr[i] = s.charAt(i);
        }
        System.out.println();
        for(int j = 0;j<brr.length;j++)
        {
            arr[j] = brr[j];
        }
        
            }

    void Display(char arr[])
    {
        System.out.println("Elements of Array are :");
        Scanner sobj = new Scanner(System.in);
        for(int i = 0;i < arr.length; i++)
        {
            System.out.print(arr[i]+"\t");
        }
        System.out.println();
    }
    public void ArrayReplace(char arr[])
    {
        int No = 0,iCnt = 0;
        
        char brr[] = new char[arr.length];
        
        for(int i = 0; i< arr.length; i++)
        {
            
            if((arr[i] >= 'A') && (arr[i] <= 'Z'))
            {
                brr[i] = (char)(arr[i] + 32);
            }
    }
    Display(brr);
    
}
}

class Program44_1
{
public static void main(String Args[])
{
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the Number of Elements :");
    int iSize = sobj.nextInt();
    char Arr[] = new char[iSize];

    MyArray obj = new MyArray();
    obj.Accept(Arr);
    obj.Display(Arr);
    System.out.println("-----------------------------------------------------------OUTPUT-----------------------------------------------------------");
    obj.ArrayReplace(Arr);
    

}
}