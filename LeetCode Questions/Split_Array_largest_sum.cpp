#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int k, int maxAllowedVal)
{
    int subarrays = 1, elem = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > maxAllowedVal) return false;

        if(elem + arr[i] <= maxAllowedVal)
        {
            elem += arr[i];
        }
        else
        {
            subarrays++;
            elem = arr[i];
        }
    }
    return subarrays>k ? false : true;
}
int splitArray(vector<int>& nums, int k) {
    int n=nums.size();
    if(k>n)
    {
        return -1;
    }

    int sum = 0, ans;
    for(int i=0;i<n;i++)
    {
        sum += nums[i];
    }

    int start = 0, end = sum, mid;
    while(start <= end)
    {
        
        mid = start + (end-start)/2;

        if(isValid(nums,n,k,mid))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {7,2,5,10,8};
    int k = 2;

    cout<<splitArray(arr,k)<<endl;
    return 0;
}
