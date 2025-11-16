#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {5,3,7,2,8,1,6};
    
    int el;
    cout<<"Enter the element you want to search : ";
    cin>>el;

    for(int val : vec)
    {
        if(val == el)
        {
            cout<<el<<" found in vector";
            return 0;
        }
    }
    cout<<el<<" not found";
}