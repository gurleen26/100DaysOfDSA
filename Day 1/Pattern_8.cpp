/*
1
2 1
3 2 1
4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    int row,col,n;
    row = 1;
    cin>>n;

    while(row <= n)
    {
        col = 1;
        while(col<=row)
        {
            cout<<row-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}