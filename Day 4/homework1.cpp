// NO. of 100,50,20,1 notes in an amount using switch case

#include <iostream>
using namespace std;

int main()
{
    int amount = 1330;
    // 100, 50, 10, 1
    int r1,r2,r3,r4;
    switch(1)
    {
        case 1:
        r1 = amount/100;
        amount = amount%100;
        cout<<"No. of 100 notes: "<<r1<<endl;

        case 2:
        r2 = amount/50;
        amount = amount%50;
        cout<<"No. of 50 notes: "<<r2<<endl;

        case 3:
        r3 = amount/20;
        amount = amount%20;
        cout<<"No. of 20 notes: "<<r3<<endl;
        
        case 4:
        r4 = amount/1;
        amount = amount%1;
        cout<<"No. of 1 notes: "<<r4<<endl;
        
    }
};