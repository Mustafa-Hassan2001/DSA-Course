include <iostream>
using namespace;

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

int main(){

  // Double Pointer 
  int i = 5;
  int* ptr = &i;
  int** ptr2 = &ptr; 

  cout<< *ptr2<<endl;
  cout<< ptr <<endnl;

  cout<< i <<endl;
  cout << *ptr <<endl;
  cout<< **ptr <<endl;

  cout << &i<< endl;
  cout<< ptr <<endl;
  cout<< *ptr2 <<endl;

  int f = 8;
  int s = 18;
  int *ptr = &s;
  *ptr = 9;

  cout<< f << " "<< s<<endl;

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





  
return 0;
}
