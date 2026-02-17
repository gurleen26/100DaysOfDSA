#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vec, int target){
    int n = vec.size();
    int start=0, end=n-1;

    while(start<=end)
    {
        // Why not mid = (start+end)/2 ??
        // In this traditional approach, if start and end are both large positive integers 
        // (e.g., close to the maximum value an int can hold), their sum (start + end) could exceed the
        // maximum value of an int. This would lead to an integer overflow, resulting in an incorrect 
        // mid value and potentially incorrect search results or program crashes.
        int mid = start + (end-start)/2;  // This method of calculating mid is an optimization to prevent potential integer overflow.
        if(target > vec[mid])
        {
            start = mid+1;
        }
        else if(target < vec[mid])
        {
            end = mid-1;
        }
        else
        {
            return mid;
        }
    }
}
int main()
{
    vector<int> v = {32,34,65,76,87,99};
    int target = 87;

    int res = binarySearch(v,target);
    cout<<"Target found at index : "<<res<<endl;
}