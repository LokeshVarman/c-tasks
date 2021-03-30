#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
template <typename M>
M maxi(M a,M b){
    return max(a,b);
}
int main(){
    cout<<maxi<int>(3,5)<<endl;
    cout<<maxi<double>(-56/2,-8)<<endl;
    cout<<maxi<string>("lokesh","lokeshvarman")<<endl;
}