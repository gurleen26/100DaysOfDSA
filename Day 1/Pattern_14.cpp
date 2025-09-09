/*
A
B C
D E F
G H I J
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cin>>n;
    row = 1;
    int count = 0;

    while(row<=n)
    {
        col = 1;
        while(col<=row)
        {
            char ch = 'A' + count;
            cout<<ch<<" ";
            col++;
            count++;
        }
        cout<<endl; 
        
        row++;
    }
}