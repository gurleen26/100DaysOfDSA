/*
A
B C
C D E 
D E F G
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
        while(col<=row)
        {
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl; 
        
        row++;
    }
}