/*
WITH SPACES PATTERN
   *
  **
 ***
****
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
        int spaces = n - row;
        while(spaces)
        {
            cout<<" ";
            spaces--;
        }
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}