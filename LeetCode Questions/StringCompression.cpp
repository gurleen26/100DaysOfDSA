#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int n = chars.size();
    int idx = 0;
    for(int i=0;i<n;){
        int count = 0;
        char ch = chars[i];
        while(i<n && chars[i] == ch){
        count++;
        i++;
        }
        if(count==1){
            chars[idx++] = ch; 
        }
        else{
            chars[idx++] = ch;
            string cnt_str = to_string(count);
            for(char k : cnt_str)
            {
                chars[idx++] = k;
            }
        }
    }

    cout<< idx;
}

