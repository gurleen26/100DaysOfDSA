// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> triplets(vector<int> &arr, int n){
   sort(arr.begin(), arr.end());
   vector<vector<int>> matrix;
   for(int i=0;i<arr.size();i++)
   {
       for(int j=i+1;j<arr.size();j++)
       {
           for(int k=j+1;k<arr.size();k++)
           {
               if(arr[i]+arr[j]+arr[k] == 0)
               {
                   matrix.push_back({arr[i], arr[j], arr[k]});
               }
           }
       }
    }
   return matrix;
}

int main() {
    int size;
    cin >>size;  // size of vector

    vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> v = triplets(nums,size);
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
}