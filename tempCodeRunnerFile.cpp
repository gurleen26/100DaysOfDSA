#include <iostream>
using namespace std;

int main()
{
    int n = 234;
    int sum = 0;
    int prod = 1;
    while(n!=0)
    {
        int a = n%10; 
        sum += a;
        prod *= a;
        cout<<n<<" ";
        n = n/10;
    }
    cout<<sum<<" "<<prod;
    cout << prod-sum;

}