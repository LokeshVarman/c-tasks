#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int check_sort(int num[]){
    int temp[3]={num[0],num[1],num[2]};
    std::sort(temp,temp+3);
    int count=0;
    for (int i = 0; i < 3; i++){
        if (temp[i] == num[i]){
            count++;}
    }
    if(count==3){
        cout<<" Sorted !!";
    }
    else{
        cout<<"Not Sorted !!";
    }
    
}
int main(){
    int num[3];
    cout<<"Enter three numbers: ";
    for(int i=0;i<3;i++){
        cin>>num[i];
    }
    
    check_sort(num);
}