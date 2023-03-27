import java.util.*;

class StringDemo
{
    public String StrRevToggleX(String s)
    {
        
        
        char Arr[] = s.toCharArray();

        char temp[] = new char[Arr.length];
    
        
        
        
        
    
        for(int i = Arr.length - 1,j = 0; (i >= 0) && (j < Arr.length) ; i--,j++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {

            temp[j] =(char) (Arr[i] + 32) ;
            }
            else
            {
                temp[j] =(char) (Arr[i] - 32) ;
            }
             
            
           
           
        }
        
        
        String result = new String(temp);
        
        return result;
        
    }


}
class Program35_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        

             

        StringDemo obj = new StringDemo();
        String sRet = obj.StrRevToggleX(str);

    

        System.out.println(sRet);
        


        

    }
}