import java.util.*;

class StringDemo
{
    public void CountEachWord(String str)
    {
        int Count = 0;
        String Input[] = str.split(" ");
        for(int i = 0;i < Input.length;i++)
        {
            int j = 0;
            while(j < Input.length)
            {
                if(Input[i] == Input[j])
                {
                    Count++;
                }
                j++;
            }
            System.out.println(Input[i] +"="+Count);
            Count = 0;
        }
    }
}

class Program45_2
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the First string : \n");
        String str = sobj.nextLine();

         

        StringDemo obj = new StringDemo();

        obj.CountEachWord(str);

        
    }
}