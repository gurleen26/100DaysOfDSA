#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "the sky is blue";

    reverse(s.begin(),s.end());
    cout<<s<<endl;

    int i=0, n=s.length();
    string ans;
    for(int i=0;i<n;i++)
    {
        string word="";
        while(i<n && s[i]!=' ')
        {
            word += s[i];
            i++;
        }
        
        reverse(word.begin(),word.end());
        if(word.length() > 0){
            ans += " " + word;
        }
    }

    cout<<ans.substr(1);
    
}