#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// BRUT FORCE APPROACH
/*int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int curr_sum=0;
    int max_sum=INT_MIN;

    for(int start=0;start<n;start++)
    {
        curr_sum = 0;
        for(int end=start;end<n;end++)
        {
            curr_sum+=arr[end];
            max_sum = max(curr_sum,max_sum);
        }
    }

    cout<<max_sum;
}*/

// Kadane's Algorithm
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int currSum = 0, maxSum = INT_MIN;

    for(int i=0;i<n;i++)
    {
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0)
        {
            currSum = 0;
        }
    }

    cout<<currSum;
}