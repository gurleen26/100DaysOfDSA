// Longest Common Prefix
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    vector<string> strs = {"flower","flow","flight"};
    
    string s = strs[0];
    
    for(int i=1;i<strs.size();i++)
    {
        int j=0;
        while(j<s.length() && j<strs[i].length() && s[j]==strs[i][j])
        {
            j++;
        }
        
        s = s.substr(0,j);
        
    }
    cout<<s;
    return 0;
}
