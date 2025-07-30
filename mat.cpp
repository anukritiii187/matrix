#include <bits/stdc++.h>
using  namespace std;
int main() {
    int rows, cols;
    cout<<"Enter no. of rows: ";
    cin>>rows;
    cout<<"Enter no. of columns: ";
    cin>>cols;
    vector<vector<int>>matrix(rows,vector<int>(cols));
    cout<<"\nEnter matrix: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>>transpose(rows,vector<int>(cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    cout<<"\nTranspose: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
