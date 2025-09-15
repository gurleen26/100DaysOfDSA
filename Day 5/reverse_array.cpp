#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    /*
    // my approach 
    int n_arr[size];
    int s =size;
    for(int i=0;i<size;i++)
    {
        n_arr[i] = arr[s-1];
        s--;
    }
    cout<<"Reversed array : ";
    for(int i=0;i<size;i++)
    {
        cout<<n_arr[i]<<" ";
    }

    */


    //another method
    int start = 0;
    int end = size-1;

    while (start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<"Reversed array : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[5];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    reverse(arr,5);

}