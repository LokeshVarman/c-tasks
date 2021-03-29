#include <iostream>
#include <string>
using namespace std;
int main() {
  string temp;
  int c=0;
  string employee[4]={"lokesh","arunachalam","shankar","bharani"};
  int size=sizeof(employee);
  cout<<"Enter the employee name to find :";
  cin>>temp;
  for(int i=0;i<size;i++){
    if(employee[i]==temp){
      c=1;
    }
  }
  if(c==1){
    cout<<" YES!! Employee Found "<<endl;
  }
  else{
    cout<<"NO!! Employee Not Found "<<endl;
  }
}