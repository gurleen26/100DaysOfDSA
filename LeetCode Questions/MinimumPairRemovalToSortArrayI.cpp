#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minPairSum(vector<int> nums){
    int minsum = INT_MAX;
    int idx;
    for(int i=0;i<nums.size()-1;i++)
    {
        minsum = min(minsum, nums[i]+nums[i+1]);
        idx = i;
    }
    return idx;
}

int main(){
    vector<int> nums = {5,2,3,1};
    int operations=0;
    while(!is_sorted(nums.begin(),nums.end()))
    {
        int index = minPairSum(nums);
        nums[index] = nums[index] + nums[index+1];
        nums.erase(nums.begin()+index+1);
        operations++;
    }
    cout<<operations;
}