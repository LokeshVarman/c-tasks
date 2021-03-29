#include <string>
#include <algorithm>
#include<iostream>
using namespace std;
int main(){
string temp;
char t;
int count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
// vowels[]={'a','e','i','o','u'};
cout<<" Enter the string to count vowels in that: ";
cin>>temp;
int size=temp.size();
for(int i=0;i<size;i++){
    t=temp[i];
    switch (t){
    case 'a':
        count_a++;
        break;
    case 'e':
        count_e++;
        break;
    case 'i':
        count_i++;
        break;
    case 'o':
        count_o++;
        break;
    case 'u':
        count_u++;
        break;
    default:
        continue;
    }
        
}
int sum=count_a+count_e+count_i+count_o+count_u;
if(sum==0){
    cout<<" NO VOwels in the string entered ";
}
else{
    cout<<"count of vowel a : "<<count_a<<endl;
    cout<<"count of vowel e : "<<count_e<<endl;
    cout<<"count of vowel i : "<<count_i<<endl;
    cout<<"count of vowel o : "<<count_o<<endl;
    cout<<"count of vowel u : "<<count_u<<endl;
}
}
