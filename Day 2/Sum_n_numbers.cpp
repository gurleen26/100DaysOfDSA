// Sum of n numbers
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of "<<n<<" numbers is : "<<sum;
}