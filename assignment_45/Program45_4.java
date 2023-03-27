import java.util.*;

class StringDemo
{
    public void DeleteChar(String str,char word)
    {
        char Arr[] = str.toCharArray();
        
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] == word)
            {
                Arr[i] = (char)(' ');
            }
            
        System.out.print(Arr[i]);
        }
        
        
        
    }
    
}

class Program45_4
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
System.out.println("Enter the char : ");
        char c = sobj.next().charAt(0);
         

        StringDemo obj = new StringDemo();

        obj.DeleteChar(str,c);

        
    }
}