/*
   1
  121
 12321
1234321
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
        int a = 1;
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
            col++;
            a++;
        }
        int start = row - 1;
        while(start)
        {
            cout<<start;
            start--;
        }

        cout<<endl; 
        
        row++;
    }
}