/*
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    int count = 1;
    int n,col;
    cin>>n;

    while(row<n)
    {
        col = 1;
        while(col<row)
        {
            cout<<count<<" ";
            count = count + 1;
            col = col +1;
        }
        cout<<endl;
        row = row+1;
    }
}