// make a function, use a formula 3*n + 7 , and return the nth term.
#include <iostream>
using namespace std;

int Ap(int n)
{
    return (3*n+7);
}

int main()
{
    int n;
    cin>>n;
    cout<<n<<"th term is : " << Ap(n);
    return 0;
};