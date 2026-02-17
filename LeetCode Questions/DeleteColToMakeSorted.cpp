#include <bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string>& strs) {
    int n = strs.size(); // size of the string array 
    int m = strs[0].size(); // size of each element of the array

    int deletions = 0;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(strs[i][j] > strs[i+1][j])
            {
                deletions++;
                break;
            }
        }        
    }
    return deletions;
}

int main()
{
    // vector<string> strs = {"cba","daf","ghi"};
    vector<string> strs = {"zyx","wvu","tsr"};
    int result = minDeletionSize(strs);
    cout<<"Result : "<<result;
    return 0;
}