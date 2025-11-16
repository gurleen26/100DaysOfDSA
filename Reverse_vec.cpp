#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &vec)
{
    int start = 0;
    int end = vec.size()-1;
    
    while(start <= end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {40,43,47,58,67,72};

    cout<<"Before reversing : ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }

    reverse(vec);

    cout<<endl<<"After reversing : ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
}