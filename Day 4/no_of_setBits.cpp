// Count the number of set Bits in a and b 
#include <iostream>
using namespace std;

int setBit(int a)
{
    int count = 0;
    while(a>0)
    {
        if(a&1)
        {
            count++;
        }
        a = a>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int t = setBit(a) + setBit(b);
    cout<<"Total set bits : "<<t;
}