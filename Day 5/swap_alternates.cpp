#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    cout<<"OUTPUT: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void a_swap(int arr[], int size)
{
    for(int i=0;i<size;i+=2)
    {
        if((i+1) < size)
        {
            swap(arr[i],arr[i+1]);
        }
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

    a_swap(arr,5);
    printArr(arr,5);
}