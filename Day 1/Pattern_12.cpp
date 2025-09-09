/*
A B C
B C D
C D E
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
        while(col<=n)
        {
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}

// ALTERNATIVE 
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
        char start = 'A'+row - 1;
        while(col<=n)
        {
            cout<<start<<" ";
            start = start + 1;
            col++;
        }
        cout<<endl; 
        
        row++;
    }
}