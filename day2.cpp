#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//maximum occurring string
//Function to find the maximum occurring character in a string.
char getMaxOccuringChar(string s){
        int arr[26] = {0};
        for(int i=0; i<s.length(); i++){
        	char ch = s[i];
            int num = 0;
            num = ch - 'a';
            arr[num]++;
        }
        
        int max = -1, ans=0;
        for(int i=0; i<26; i++){
            if(max < arr[i]){
                ans=i;
                max = arr[i];
            }
        }
        return 'a' + ans;
}


//replace space 


string replaceSpace(string str){
	string temp = " ";
	for(int i=0; i< str.length(); i++){
		if(str[i] == ' '){
		temp.push_back('@');
		temp.push_back('4');
		temp.push_back('0');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;	
}



int main(){

	cout<<getMaxOccuringChar("test");
	cout<<replaceSpace("My name is khan");
	
	return 0;
}
