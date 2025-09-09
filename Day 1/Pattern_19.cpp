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
    int row, col, n;
    cin>>n;
    row = 1;

    while(row<=n)
    {
        col = 1;
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        col = n - row + 1;
        while(col>=1)
        {
            cout<<"*";
            col--;
        }
        cout<<endl; 
        
        row++;
    }
}