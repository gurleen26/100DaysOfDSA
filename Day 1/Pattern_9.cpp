/*
A A A
B B B
C C C
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cin>>n;
    row = 1;
    int start = 65;
    while(row<=n)
    {
        col = 1;
        while(col<=n)
        {
            cout<<(char)start<<" ";
            col++;
        }
        start++;
        cout<<endl;
        row++;
    }
    // or char ch = 'A' + i - 1 
} 