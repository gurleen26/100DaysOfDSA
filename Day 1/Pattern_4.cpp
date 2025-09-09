/* 
3 2 1
3 2 1
3 2 1
*/
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 3;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j+n-1<<" ";
            j = j-1;
        }
        cout<<endl;
        i = i+1;
    }
}