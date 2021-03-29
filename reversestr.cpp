#include<iostream>
#include<string>
//#include<algorithm>
using namespace std;
int main(){
  string name;
  cout<<"Enter the string to reverse:";
  cin>>name;
int size=name.size();
int temp=size-1;
int half=size/2;
for(int i=0;i<half;i++){
    swap(name[i],name[temp]);
    temp--;
  }
std::cout<<name;
}