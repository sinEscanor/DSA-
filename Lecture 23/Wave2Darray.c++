#include<iostream>
using namespace std;

void printSum(int arr[][4], int row, int col){
    int sum =0;
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
void logestRowSum(int arr[][4], int row, int col){
    int max =INT_MIN;
    int longestRow = -1;
    for(int i=0; i<row; i++){
        int sum =0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if (sum > max ){
            max = sum;
            longestRow = i;
        }
    }cout << "The sum of longest row "<< longestRow << " is: " << max;
}

void wavePrint(int arr[][4], int row , int col){
    for (int i=0;i<col;i++){
        int start=0;
        int last = row-1;
        if(i%2 ==0){
            for (start; start<=last;start++){ 
                cout << arr[start][i] << " ";
            }
            
        }
        else{
            for (last; last>=start; last--){
                cout << arr[last][i] << " ";
            }
            
        }
    }
}

int main(){
    int arr[3][4];
    cout << "Enter the elements";

    for(int row=0;row<3;row++){
        for(int col=0; col<4;col++){
            cin >> arr[row][col];
        }
    }

    cout << "Printing the Array" << endl;
    for(int row=0;row<3;row++){
        for(int col=0; col<4;col++){
            cout << arr[row][col] << " ";
        } cout<<endl;
    }
    cout << "The row sum: ";
    wavePrint(arr,3,4);

    return 0;
}

