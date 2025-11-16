/*
1234
 234
  34
   4
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cin>>n;
    row = 1;

    while(row<=n)
    {
        int space = row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        col = row;
        while(col<=n)
        {
            cout<<col;
            col++;

        }
        cout<<endl; 
        row++;
    }
}