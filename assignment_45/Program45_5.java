import java.util.*;

class StringDemo
{
    public boolean CheckExpression(String str)
    {
        char Arr[] = str.toCharArray();
        int Open = 0;
        int Close = 0;
        boolean result = false;
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] == '(')
            {
                Open++;
            }
            else if(Arr[i] == ')')
            {
                Close++;
            }
        
        }
        if(Open == Close)
        {
            result = true;
        }
        return result;
        
    }
    
}

class Program45_5
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Expression : ");
        String str = sobj.nextLine();
         

        StringDemo obj = new StringDemo();

        boolean bRet = obj.CheckExpression(str);

        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
        
    }
}