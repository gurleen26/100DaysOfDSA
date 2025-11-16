/*
   1
  23
 456
78910
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cin>>n;
    row = 1;
    int a = 1;
    while(row<=n)
    {
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        col = 1;
        while(col<=row)
        {
            cout<<a;
            a++;
            col++;

        }
        cout<<endl; 
        
        row++;
    }
}