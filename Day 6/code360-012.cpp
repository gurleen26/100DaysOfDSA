// Dutch National Flag algorithm - A Kind of THREE POINTER APPROACH
#include <iostream>
using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int low = 0;
    int mid = 0;
    int end = size-1;
    while(mid <= end)
    {
        if(input[mid]==2)
        {
            int temp = input[mid];
            input[mid] = input[end];
            input[end] = temp;
            end--;
        }
        else if(input[mid]==0)
        {
            int temp = input[mid];
            input[mid] = input[low];
            input[low] = temp;
            low++, mid++;
        }
        else
        {
            mid++;
        }
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<input[i]<<" ";
    }
}

int main() {
    int arr[7] = {0,1,2,2,1,0,1};
    sortZeroesAndOne(arr,7);
}