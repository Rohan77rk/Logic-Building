import java.util.*;

class StringDemo
{
    public boolean StrPallindrome(String s)
    {
        boolean bCheck = false;
        int iCnt = 0;
        char Arr[] = s.toCharArray();

        char temp[] = new char[Arr.length];
    
        
        
        
        
    
        for(int i = Arr.length - 1,j = 0; (i >= 0) && (j < Arr.length) ; i--,j++)
        {
            
            

            temp[j] =(char) Arr[i] ;
            
            
                
            
             
            
           
           
        }
        
        
        String result = new String(temp);
   for(int i = 0;i < Arr.length;i++) 
   {
        if((s.charAt(i) )== (result.charAt(i)))
        {
            iCnt++;
        }
   }    
   if(iCnt == Arr.length)
   {
    bCheck = true;
   }
   else
   {
    bCheck = false;
   }
    
        return bCheck;
        
    }


}
class Program35_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        

             

        StringDemo obj = new StringDemo();
        boolean bRet = obj.StrPallindrome(str);

    
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