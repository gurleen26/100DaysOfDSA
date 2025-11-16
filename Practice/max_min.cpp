#include <iostream>
#include <climits>
using namespace std;

void min_max(int arr[], int size)
{
    int maxi = INT_MIN;
    for(int i=0 ; i<size ; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    cout<<endl<<"Maximum element in array is : "<<maxi;

    int mini = INT_MAX;
    for(int i=0 ; i<size ; i++)
    {
        mini = min(mini,arr[i]);
    }
    cout<<endl<<"Minimum element in array is : "<<mini;

}

int main()
{
    int arr[5];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    min_max(arr,5);
}