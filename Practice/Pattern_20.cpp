/*
1 1 1 1
  2 2 2
    3 3
      4
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
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        col = n-row+1;
        while(col>=1)
        {
            cout<<num;
            col--;
        }
        cout<<endl; 
        num++;
        row++;
    }
}