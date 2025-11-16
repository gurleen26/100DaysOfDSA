/*
****
***
**
*

*/

#include <iostream>
using namespace std;

int main()
{
    int row,col,n;
    row = 1;
    cin >> n;

    while(row<=n)
    {
        col = n-row+1;
        cout<<"col: "<<col<<endl;
        while(col>=1)
        {
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;
    }
}