/*
A B C D 
E F G H 
I J K L 
M N O P 
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cin>>n;
    row = 1;
    char start = 'A'; 
    while(row<=n)
    {
        col = 1;
        while(col<=n)
        {
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }

}