#include <iostream>
using namespace std;

void sum(int arr[], int size)
{
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    
    cout<<"Sum of elements of array is : "<<sum;
    
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
    sum(arr,5);
}