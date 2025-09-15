#include <iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    
    for(int i=1;i<=num;i++)
    {
        ans = ans * i;
    }

    return ans;
}

int nCr(int n, int r){

    int numer = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return (numer/denom);
}

int main()
{
    int n, r;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter r : "<<endl;
    cin>>r;

    cout<<"Solution of nCr = " << nCr(n,r);

};