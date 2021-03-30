#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int const size=5;
    int value;
    int* arr=new int[size];
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<size;i++){
        cin>>value;
        arr[i]=value;
    }
    cout<<"Entered Values are: "<<endl;
    for(int i=0;i<size;i++){
        value=arr[i];
        cout<<value<<endl;
        
    }
    delete [] arr;
}