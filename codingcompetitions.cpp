#include <iostream>
using namespace std;

int main(){
  
// Reverse Array Queries 
  for (const auto& op : operations) {
        int start = op[0];
        int end = op[1];
        reverse(arr.begin() + start, arr.begin() + end + 1);
    }
    return arr;

// validating string with RegEx: 
// ^([ab]).*\\1$
// ^([ab]).*\\1$|^([ab])$
//-------------------------------------------

vector<vector<int>> applicationPairs(int deviceCapacity, vector<vector<int>> foregroundAppList, vector<vector<int>> backgroundAppList){

std::vector< std::vector<int>> result;
int maxSum = numeric_limits< int >::min();

for (int i=0; i<foregroundAppList.size(); ++i){
for (int j=0; j<backgroundAppList.size(); ++j){
const int currSum = i<foregroundAppList[i][1] + backgroundAppList[j][1];
if(currSum <= deviceCapacity && currSum >= maxSum){
if( currSum > maxSum){
maxSum = currSum;
result.clear();
}

result.push_back({foregroundAppList[i][0], backgroundAppList[j][0]});
}
/* 

The approach is Brute Force.
-> Traversing the foregroundAppList first vector and backgroundAppList secound vector while checking the sum of the secound element of the pair int the first and secound vector.
-> If the sum is equal to deviceCapacity(d) then append the vector to ans vector. 
	Return ans.
-> Else If teh sum is less than d, then find the largest sum lesss than d and append to ans.
	Return ans.
-> Else return empty pair means if sum is gerter than d.


Time Complexity  = O(N^2).
*/

// --------------------------------------------------
  
public static List<String> sortOrders(List<String> orderList){
orderList.sort(order1, order2) ->{
boolean isOrder1Prime = isPrimeOrder(order1);
boolean isOrder2Prime = isPrimeOrder(order2);

String[] order1Parts = order1.split(" ", 2);
String[] order2Parts = order2.split(" ", 2);

if(isOrder1Prime && isOrder2Prime){

int compareMetadata = order1arts[1].compareTo(order2Parts[1]);
if(compareMetadata != 0)
return compareMetadata;
return order1Parts[0].cmpareTo(order2Parts[0]);
}
if(isOrder1Prime)
return -1;
if(isOrder2Prime)
return 1;

return 0;
});

return orderList;
}
private static boolean isPrimeOrder(String order){
String[] orderParts = order.split(" ", 3);
try{
Integer.parseInt(orderParts[1]);
}
catch (NumberFormatException e){
return true;
}
return false;
}



/* both prime orders, so compare to prioritize
prioritize if there is only prime order
return original order if both the order are non-prime
Time-Complexity = O(N)
Space-Complexity = O(1)*/
  
}
