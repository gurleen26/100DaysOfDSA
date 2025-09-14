//Binary to decimal
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //If number is binary then extract last digit by dividing with 10 not 2
    int bin;
    cin>>bin;
    int s=0, i=0;
    while(bin)
    {
        int temp = bin%10;
        s += temp*pow(2,i);
        i++;
        bin = bin/10;
    }
    cout<<"DECIMAL FORM : "<<s;
}