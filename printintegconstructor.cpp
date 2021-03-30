#include<iostream>
using namespace std;
class custom_function{
    public:
    custom_function(int begin,int end, int dif=5){
        int size=end-begin;
        int arr[size];
        int i=0;
        for(int j = begin; j <= end; j++){
            arr[i]=j;
            i++;
                
        }
        
        for(int i = 0; i <= size; i++){
            ((i % dif) == dif-1) ? cout << arr[i] << '\n' : cout << arr[i] << ' ';
        }
    }
};
int main(){int begin,end,df;
    /*cout<<"Enter the begin range: "<<endl;
    cin>>begin;
    cout<<"Enter the end range: "<<endl;
    cin>>end;
    cout<<"Enter how many integer to be printed in a line: ";
    cin>>df;*/
    custom_function obj(33,78,6);
}