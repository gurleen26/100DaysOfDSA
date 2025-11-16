// Return pair in sorted array with targeted sum 
#include <iostream>
using namespace std;

// BRUT FORCE APPROACH 
/*int main()
{
    int n = 6;
    int arr[n] = {2,3,5,7,8,9};
    int target = 12;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }

}*/

// Optimal Approach 
int main()
{
    int n = 6;
    int arr[n] = {2,3,5,7,8,9};
    int target = 7;

    int i=0, j=n-1, sum=0;
    while(i<j)
    {
        sum = arr[i] + arr[j];
        if(sum == target)
        {
            cout<<"Target found at i = "<<arr[i]<<" and j = "<<arr[j];
            break;
        }
        else if(sum<target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
