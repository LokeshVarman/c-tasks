#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string students_name[10];
    string *p;
    p=students_name;
    cout<<"Enter ten students_name: ";
    for(int i=0;i<10;i++){
        cin>>students_name[i];
    }
    sort(p,p+10);
    cout<<"Sorted namelist are: "<<endl;
    for(int i=0;i<10;i++){
        cout<<students_name[i]<<endl;
    }
}