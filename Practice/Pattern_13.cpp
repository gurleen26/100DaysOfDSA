/*
A
B B
C C C
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cin>>n;
    row = 1;
    char ch = 'A';
    while(row<=n)
    {
        col = 1;
        while(col<=row)
        {
            cout<<ch<<" ";
            col++;
        }
        ch++;
        cout<<endl;
        row++;
    }
}