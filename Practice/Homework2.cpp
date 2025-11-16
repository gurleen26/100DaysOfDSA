// nimal to Binary
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s = "";
    while(n)
    {
        int bit = n%2;
        s = (char)(bit + '0') + s;
        n = n/2;
    }
    cout<<"Binary form : "<<s;
   

};