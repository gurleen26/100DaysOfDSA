#include <iostream>
using namespace std;

bool linearS(int arr[], int size, int el)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==el)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int key;
    cout<<"Enter the element to search : ";
    cin>>key;

    bool ans = linearS(arr,10,key);

    if(ans)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }

}