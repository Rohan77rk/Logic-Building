import java.util.*;

class StringDemo
{
    public boolean CheckStringRotation(String first,String second)
    {
        char Arr1[] = first.toCharArray();
        char Arr2[] = second.toCharArray();

        boolean result = false;
        
        int Count = 0;
        for(int i = 0; i < Arr1.length;i++)
        {
            int j = 0;
            while(j < Arr1.length)
            {
                if(Arr2[j] == Arr1[i])
                {
                    Count++;
                }
                j++;
            }
        }
        
        if(Count == Arr1.length)
        {
            result = true;
        }
        return result;

        
    }
}

class Program45_1
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the First string : \n");
        String str1 = sobj.nextLine();

         System.out.println("Enter the Second string : \n");
        String str2 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        boolean bret = obj.CheckStringRotation(str1,str2);

        if(bret == true)
        {
            System.out.println("TRUE");
        } 
        else
        {
            System.out.println("FALSE");
        }
    }
}