//maximum occurring string

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26] = 0;
        for(int i=0; i<s.length(); i++){
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
    }

};
