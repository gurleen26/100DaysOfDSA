// Sub Array Sum equals K 
#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k){
    int n = nums.size();
    int PrefixSum[n];

    PrefixSum[0] = nums[0];
    for(int i=1;i<n;i++)
    {
        PrefixSum[i] = PrefixSum[i-1] + nums[i];
    }

    int count=0;
    unordered_map<int,int> mp;
    for(int j=0;j<n;j++)
    {
        if(PrefixSum[j] == k) count++;

        int val = PrefixSum[j] - k;
        if(mp.find(val) != mp.end())
        {
            count += mp[val];
        }

        mp[PrefixSum[j]]++;
    }

    return count;
}

int main()
{
    vector<int> arr = {1,2,3};
    int k = 3;

    int res = subarraySum(arr,k);
    cout<<"Output: "<<res<<endl;
}