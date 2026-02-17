#include <iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{2,5,7}, {8,3,1}, {3,6,2}};
    int r=3, c=3, rowSum=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum += matrix[i][j];
        }
        rowSum = max(rowSum,sum);
    }

    cout<<"Maximum Row Sum is : "<<rowSum;
}