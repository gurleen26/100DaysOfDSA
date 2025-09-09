/*
1234554321
1234**4321
123****321
12******21
1********1
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
        int num = 1;
        col = 1;
        while(col<=(n-row+1))
        {
            cout<<num;
            num++;
            col++;
        }

        int star = row-1;
        while(star)
        {
            cout<<"*";
            star--;
        }

        int startwo = row-1;
        while(startwo)
        {
            cout<<"*";
            startwo--;
        }

        int b = n-row+1;
        while(b)
        {
            cout<<b;
            b--;
        }

        cout<<endl;
        row++;
    
    }


}