#include <iostream>
using namespace std;

int fibo(int n)
{
    int a=0, b=1;

    if(n==1) return a;
    if(n==2) return b;
    
    int sol = 0;
    
    for(int i=3;i<=n;i++)
    {
        sol = a+b;
        a = b;
        b = sol;
    }
    return sol;
}

int main()
{
    int n;
    cin>>n;
    cout<<n<<"th term is : "<<fibo(n);
}