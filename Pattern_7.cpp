/*
1
2 3
3 4 5
4 5 6 7
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    int n, col;
    cin>>n;

    while(row<=n)
    {
        col = 1;
        int val = row;
        while(col<=row)
        {
            cout<<val<<" ";
            val = val + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
}

*/

// Without using val 
#include <iostream>
using namespace std;
int main()
{
    int row = 1;
    int n, col;
    cin>>n;

    while(row<=n)
    {
        col = 1;
        while(col<=row)
        {
            cout<<col+row-1<<" ";
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }
}