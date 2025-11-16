// Return the element which appears more than floor(n/2) times
#include <iostream>
#include <vector>
using namespace std;

// BRUT FORCE APPROACH
/* int main()
{
    vector<int> vec = {1,2,2,1,1,1,1,5,5};

    for(int val: vec)
    {
        int c=0;
        for(int el: vec)
        {
            if(el == val)
            {
                c++;
            }
        }
        if(c>(vec.size()/2))
        {
            cout<<val;
            break;
        }
    }
}*/

// Moore Algorithm
int main()
{
    vector<int> vec = {1,2,2,1,1,1,1,5,5};

    int freq=0, ans=0;
    for( int val : vec)
    {
        if(freq==0)
        {
            ans = val;
        }
        if(val == ans) freq++;
        else freq--;
    }
    cout<<"Majority element is: "<<ans;
}