#include <iostream>
using namespace std;

void LinearSearch(int mat[][3],int rows,int cols,int k){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j] == k){
                cout<<"Key="<<k<<" found at row:"<<i+1<<" and column:"<<j+1;
            }
        }
    }
}

int main(){
    int matrix[4][3];
    int rows = 4;
    int columns = 3;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>matrix[i][j];
        }
    }
    // output 
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<columns;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    int key = 4;
    
    LinearSearch(matrix,rows,columns,key);
}