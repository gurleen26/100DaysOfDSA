#include <iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{9,5,7}, {6,8,7}, {5,9,7}};
    int r=3, c=3, colSum=0;
    for(int i=0;i<c;i++){
        int sum=0;
        for(int j=0;j<r;j++){
            sum += matrix[j][i];
        }
        colSum = max(colSum,sum);
    }

    cout<<"Maximum Column Sum is : "<<colSum;
}