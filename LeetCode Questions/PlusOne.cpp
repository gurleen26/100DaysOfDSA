// ✔ If digit < 9 → just increment
// ✔ If digit = 9 → make it 0 and carry over
// ✔ If all digits were 9 → insert a 1 at the front

// Leetcode 66 - PlusOne
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int num = 0;
    
    for(int i=digits.size()-1; i>=0;i--)
    {
        if(digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    
    digits.insert(digits.begin(),1); // 1 starting mei insert krna pdega if all are 9,9,9,9...
    return digits; 
}

int main() {
    
    vector<int> digits = {9,9,9,9,9,9,9,9,9,9}; // return [1,2,4]
    vector<int> r = plusOne(digits);
    for(int i: r)
    {
        cout<<i<<",";
    }
}