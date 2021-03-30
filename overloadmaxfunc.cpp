#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class maximum{
    public:
    int maxi(int a,int b){
        return max(a,b);
    }
    double maxi(double a,double b){
        return max(a,b);
    }
    string maxi(string a,string b){
        return max(a,b);
    }
};
int main(){
    maximum m1,m2,m3;
    cout<<m1.maxi(3,5)<<endl;
    cout<<m2.maxi(-56/2,-8)<<endl;
    cout<<m3.maxi("lokesh","lokeshvarman")<<endl;
}