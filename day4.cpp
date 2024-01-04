#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printSum(int arr[][3], int row, int col){
	for(int row=0; row<3; row++){
		int sum = 0;
		for(int col=0; col<3; col++){
					sum += arr[row][col];	
		}
		cout<<sum<<" ";
	}
}

void printcolSum(int arr[][3], int row, int col){
	for(int row=0; row<3; row++){
		int sum = 0;
		for(int col=0; col<3; col++){
					sum += arr[col][row];	
		}
		cout<<sum<<" ";
	}
}


bool isPresent(int arr[][4], int target, int row, int col){
	for(int row=0; row<3; row++){
		for(int col=0; col<4; col++){
			
			if(arr[row][col] == target){
				return 1;
			}
			
		}
	}
	return 0;
}


int LargetRowSum(int arr[][3], int row, int col){
	int maxi = INT_MIN;
	int rowIndex = -1;
	for( int row=0; row<3; row++){
		int sum = 0;
		for(int col=0; col<3; col++){
			sum += arr[row][col];
		}
		if(sum > maxi){
			maxi = sum;
			rowIndex = row;
		}
	}
	return rowIndex;
}


int main(int argc, char** argv) {
	
//	int arr1[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
	int arr2[3][3];
	
	for(int row=0; row<3; row++){
		for(int col=0; col<3; col++){
			cin>>arr2[row][col];
		}
	}
	
	for(int row=0; row<3; row++){
		for(int col=0; col<3; col++){
			cout<<arr2[row][col]<<" ";
		}
		cout<<endl;
	}
	
//	int target;
//	cin>>target;
	
//	if(isPresent(arr1, target, 3, 4)){	
//		cout<<"Element Found";
//	}	
//	else{
//		cout<<"Element Not Found";
//	}

	cout<<"Row Wise Sum = ";
	printSum(arr2, 3, 3);
	cout<<endl;
//	cout<<"Colum Wise Sum = ";
//	printcolSum(arr2, 3, 3);
//	cout<<endl;
	
	cout<<"The Largest Sum is "<<LargetRowSum(arr2, 3,  3);	
	
	return 0;
}


//54. Spiral Matrix
//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        int row = matrix.size();
//        int col = matrix[0].size();
//        vector<int> ans;
//        int count = 0;
//        int total = row*col;
//        int startingRow = 0;
//        int startingCol = 0;
//        int endingRow = row-1;
//        int endingCol = col-1;
//
//        while(count<total){
//
//            for(int i=startingCol; count<total && i<=endingCol; i++){
//                ans.push_back(matrix[startingRow][i]);
//                count++;
//            }
//            startingRow++;
//
//            for(int i=startingRow; count<total &&i<=endingRow; i++){
//                ans.push_back(matrix[i][endingCol]);
//                count++;
//            }
//            endingCol--;
//
//            for(int i=endingCol; count<total && i>=startingCol; i--){
//                ans.push_back(matrix[endingRow][i]);
//                count++;
//            }
//            endingRow--;
//
//            for(int i=endingRow; count<total && i>=startingRow; i--){
//                ans.push_back(matrix[i][startingCol]);
//                count++;
//            }
//            startingCol++;
//        }
//        return ans;
//    }
//};
//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        int n=matrix.size(),m=matrix[0].size();
//        int left=0,top=0;
//        int bottom=n-1,right=m-1;
//        vector<int>ans;
//        while(left<=right&&top<=bottom)
//        {
//            for(int i=left;i<=right;i++)
//            {
//                ans.push_back(matrix[top][i]);
//            }
//            top++;
//            for(int i=top;i<=bottom;i++)
//            {
//                ans.push_back(matrix[i][right]);
//            }
//            right--;
//            if(top<=bottom)
//            {
//                for(int i=right;i>=left;i--)
//                {
//                    ans.push_back(matrix[bottom][i]);
//                }
//                bottom--;
//            }
//            if(left<=right)
//            {
//                for(int i=bottom;i>=top;i--)
//                {
//                    ans.push_back(matrix[i][left]);
//                }
//                left++;
//            }
//        }
//        return ans;
//    }
//};

//Rotate Image by 90 degree
//class Solution {
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//        for(int i=0; i<(n+1)/2;i++){
//            for(int j=0; j<n/2; j++){
//                int temp = matrix[n-1-j][i];
//                matrix[n-1-j][i] = matrix[n-1-i][n-j-1];
//                matrix[n-1-i][n-j-1] = matrix[j][n-1-i];
//                matrix[j][n-1-i] = matrix[i][j];
//                matrix[i][j] = temp;
//            }
//        }
//    }
//    
//};













//Print Like a Wave
//#include <bits/stdc++.h> 
//vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
//{
//    vector<int> ans;
//
//    for(int col=0; col<mCols; col++){
//        if(col&1){
//            for(int row=nRows-1; row>=0; row--){
//                ans.push_back(arr[row][col]);
//            }
//        }
//        else{
//            for(int row=0; row<nRows; row++){
//                ans.push_back(arr[row][col]);
//            }
//        }
//    }
//    return ans;
//}





// 2d matrix

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        // if(matrix.size()==0 || matrix[0].size()==0){
        //     return matrix;
        // }
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int row=0, col=0;        
        bool up = true;

        while(row<m && col<n){
            if(up){
                while(row>0 && col<n-1){
                    ans.push_back(matrix[row][col]);
                    row--;
                    col++;
                }
                 ans.push_back(matrix[row][col]);
                 if(col==n-1){
                     row++;
                 }
                 else{
                     col++;
                 }
            }
            else{
                while(col>0 && row<m-1){
                 ans.push_back(matrix[row][col]);
                 row++;
                 col--;   
                }
                ans.push_back(matrix[row][col]);
                if(row==m-1){
                    col++;
                }
                else{
                    row++;
                }
            }
            up = !up; // Fix: Toggle the boolean variable 'up'
        }
        return ans;
    }
};

