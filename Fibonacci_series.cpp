#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int a = 0, b = 1;

    cout<<"Fibonacci Series :"<<endl;

    cout<<a<<" ";
    cout<<b<<" ";
    for(int i = 1; i <= n; i++)
    {
        int c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}