#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    char ch = 'A';
    switch(ch)
    {
        case 'A':
            switch(num){
                case 3:
                cout<<"num: "<<num;
                break;
            }
        break;
        
        case 'B':
        cout<<"hello - B";
        break;

        case 'C':
        cout<<"hello - C";
        break;
        
        case 'D':
        cout<<"hello - D";
        break;
        
        default:
        cout<<"Bye";

    }
};