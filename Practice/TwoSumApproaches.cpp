#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> brutForceApproach(vector<int> arr, int tar){
    int n = arr.size(), f, s, sum;
    vector<int> ans;
    for(int i=0;i<n;i++){
        f = arr[i];
        for(int j=i+1;j<n;j++){
            s = arr[j];
            sum = f + s;
            if(f + s == tar){
                ans.push_back(f);
                ans.push_back(s);
            }
        }
    }
    return ans;
}

vector<int> betterApproach(vector<int> arr, int tar){
    int n = arr.size(), st, end, sum;
    sort(arr.begin(), arr.end());
    vector<int> ans;
    st = 0;
    end = n-1;
    while(st<end){
        
        sum = arr[st] + arr[end];
        if(sum < tar)
        {
            st++;
        }
        else if(sum > tar)
        {
            end--;
        }
        else{
            ans.push_back(arr[st]);
            ans.push_back(arr[end]);
            break;
        }
    }
    return ans;
}

vector<int> optimisedApproach(vector<int> arr, int tar){
    int n = arr.size();
    
}

int main(){
    vector<int> arr = {5,2,11,7,15};
    int tar = 9;
    vector<int> ans;

    // ans = brutForceApproach(arr,tar); O(n2)
    // ans = betterApproach(arr,tar); O(nlogn)
    ans = optimisedApproach(arr,tar);

    for(int i : ans){
        cout<<i<<" ";
    }
}