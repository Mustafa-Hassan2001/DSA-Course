#include <iostream>
using namespace std;

int main(){
    int arr[10] = {23, 200, 43, 67};
    cout<<arr<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<&arr[0]<<endl;

    cout<<"4th"<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cont<<*(arr)+1<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;  
    
    int i =33;
    cout<<i[arr]<<endl;

    int temp[30] = {1,2};
    cout<<sizeof(temp)<<endl;
    cout<<"1st"<<sizeof(*temp)<<endl;
    cout<<"1st"<<sizeof(&temp)<<endl;
    
    int a[20] = {1,2,3,4};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[0];
    cout<< p <<endl;
    cout<< *p <<endl;
    cout<< &p <<endl;

    //char array:

    int arr[10] = {23, 200, 43, 67};
    char ch[6] = "abcde";
    // char *c = "abcdf";
    cout<<arr<<endl;
    cout<<ch<<endl;
    


    int val = 5;
    int *p = &val;

    cout<<"Before: "<<*p<<endl;
    update(p);
    cout<<"After: "<<*p<<endl;

    return  0;
}



    void update(int *p){
        p = p +1;
    }