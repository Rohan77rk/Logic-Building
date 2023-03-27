import java.util.*;

class MyArray
{
    void Accept(float arr[])
    {
        Scanner sobj = new Scanner(System.in);
        for(int i = 0;i < arr.length; i++)
        {
            System.out.print("Enter element no "+(i+1)+"=");
            arr[i] = sobj.nextFloat();
        }
        System.out.println();
            }

    void Display(float arr[])
    {
        System.out.println("Elements of Array are :");
        Scanner sobj = new Scanner(System.in);
        for(int i = 0;i < arr.length; i++)
        {
            System.out.print(arr[i]+"\t");
        }
        System.out.println();
    }
    public void Percentage(float arr[])
    {
        for(int i = 0;i < arr.length;i++)
        {
            
                if(arr[i]< 35)
                {

                System.out.println(arr[i]+"Fail");
                }
                
                 else if(arr[i]< 50)
                 {

                System.out.println(arr[i]+"\t"+"Pass Class");
                 }
                
                else if(arr[i]< 60)
                {

                System.out.println(arr[i]+"\t"+"Second Class");
                }
            
               else if(arr[i]< 70)
                {

                System.out.println(arr[i]+"\t"+"First Class");
                }
                
                else if(arr[i] > 70)
                {

                System.out.println(arr[i]+"\t"+"First Class with distinction");
                }
                
            }
        }
        
}       
    
class Program43_5
{
public static void main(String Args[])
{
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the Number of Elements :");
    int iSize = sobj.nextInt();
    float Arr[] = new float[iSize];

    MyArray obj = new MyArray();
    obj.Accept(Arr);
    obj.Display(Arr);
    System.out.println("-----------------------------------------------------------OUTPUT-----------------------------------------------------------");
    obj.Percentage(Arr);

}
}