// To check whether prime number or not
#include <iostream>
using namespace std;

int main()
{
    int num, c=0;
    cin>>num;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
        /*if(num%i==0)
            {
            cout<<"Not a prime number";
            break;
        }*/
    }
    if(c==0)
    {
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }

}