#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s1 = "11";
    // string s2 = "1";
    string s1 = "1010";
    string s2 = "1011";

    int m = s1.length()-1;
    int n = s2.length()-1;

    int sum = 0;
    int carry = 0;
    string res = "";

    while(m>=0 || n>=0){
        sum = carry;
    
        if(m>=0){
            sum += s1[m] - '0';
            m--;
        }
        if(n>=0){
            sum += s2[n] - '0';
            n--;
        }

        res.push_back((sum%2==0) ? '0' : '1');
        carry = (sum>1) ? 1 : 0;
    }
    if(carry == 1){
        res.push_back('1');
    }

    reverse(res.begin(), res.end());
    cout<<res;
    return 0;
}