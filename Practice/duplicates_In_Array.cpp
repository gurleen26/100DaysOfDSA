#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int dup;

    for(int i=0; i<n; i++)
    {
        dup = arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(dup==arr[j])
            {
                cout<<dup<<" ";
            }
        }
    }
};