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
            char ch = 'A' + col - 1 ;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}