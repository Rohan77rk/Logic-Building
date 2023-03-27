#include<iostream>
using namespace std;

class Array
{
    protected:
    int *Arr;
    int size;

    public:
    Array(int value = 10)
    {
        cout<<"Inside Constructer\n";
        
        this->size = value;
        this->Arr = new int[size];
    }

    Array(Array &ref)
    {
        cout<<"Inside copy constructor\n";

        this->size = ref.size;
        this->Arr = new int[this->size];

        for(int i = 0;i < size;i++)
        {
            this->Arr[i]= ref.Arr[i];
        }
    }

    ~Array()
    {
        cout<<"Inside Destructor\n";

        delete[]Arr;
    }

    inline void Accept();
    inline void Display();
};

void Array :: Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i< this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements are \n";

    for(int i = 0; i< this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
    ArrSearch(int no = 10) : Array(no)
    {}

    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int Sum();
};

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;
    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
        
    }
    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}
int ArrSearch :: Frequency(int value)
{
    int iCnt = 0;
    for(int i = 0;i < size;i++)
    {
        if(Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt++;
}

int ArrSearch :: SearchLast(int value)
{
    int i = 0;
    for(i = (size-1);i >=0;i--)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i < 0)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch :: EvenCount()
{
    int i = 0;
    int iCnt = 0;
    for(i = 0;i < size;i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: OddCount()
{
    int i = 0;
    int iCnt = 0;
    for(i = 0;i < size;i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: Sum()
{
    int i = 0;
    int sum = 0;
    for(i = 0; i < size;i++)
    {
        sum = sum+Arr[i];
    }
return sum;
}

int main()
{
    int iRet = 0;
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    iRet = sobj1.Frequency(11);

    cout<<"frequency is "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);

    cout<<"First occurance is "<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);

    cout<<"Last occurance is "<<iRet<<"\n";

    iRet = sobj1.EvenCount();

    cout<<"Total Even elements are: "<<iRet<<"\n";

    iRet = sobj1.OddCount();

    cout<<"Total Odd elements are: "<<iRet<<"\n";

    iRet = sobj1.Sum();

    cout<<"Sum : "<<iRet<<"\n";
    return 0;
}