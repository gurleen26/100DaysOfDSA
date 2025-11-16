/*
   1
  22
 333
4444
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cin>>n;
    row = 1;

    int num = 1;

    while(row<=n)
    {
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        col = 1;
        while(col<=row)
        {
            cout<<num;
            col++;
        }
        cout<<endl; 
        num++;
        row++;
    }
}