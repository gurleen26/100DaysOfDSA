// BOOK ALLOCATION PROBLEM
/* There are n books, each ith book has A[i] no. of pages
We have to allocate books to m no. of students so that the MAXIMUM NUMBER OF PAGES ALLOCATED TO A STUDENT IS MINIMUM
    - Each book should be to a student 
    - Each student has to be allocates at least one book 
    - Allotment should be in contiguous order

Calculate and Return that minimum possible number 
Return -1 if a valid assignment is not possible
*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int maxAllowedPages)
{
    int stud = 1, pages = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > maxAllowedPages)
        {
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages)
        {f
            pages += arr[i];
        }
        else
        {
            stud++;
            pages = arr[i];
        }
    } 
    return stud>m ? false : true;
}


int allocateBooks(vector<int> &arr, int n, int m) // O(logN * n) N->range on which we are applying our binary search 
 {
    if(m>n)
    {
        return -1;
    }
    // sum of all pages
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }

    int st = 0, end = sum; // range of possible answers -- iss range pe binary search apply krenge 
    int mid, ans;
 
    while(st <= end)
    {
        mid = st + (end-st)/2;

        if(isValid(arr,n,m,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }

    }    
    return ans;
}

int main()
{
    vector<int> arr = {2,1,3,4};
    int n = 4, m = 2;

    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}