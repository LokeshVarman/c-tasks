#include <iostream>
#include<vector>
using namespace std;
void maxmudsegment(vector<int> p,vector<int> h){
    int size=p.size();
    int start=p[0];
    int end=p[size-1];
    int missing[3];
    int rytp[end];
    int temp,y;
    int m=size;
    
    for (int i=0;i<end;i++){
        rytp[i]=start;
        start++;
    }
    for(int i=0;i<end;i++){
        cout<<rytp[i];
    }
    int n=sizeof(rytp);
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++){
            if (rytp[i] == p[j])
                break;
        }
        if (j == m){
            temp=rytp[i];
            missing[y]=temp;
            y++;
            }
        
    }
    int mudh[3];
    int ind;
    for(int y=0;y<3;y++){
        ind=missing[y]
        
    }
}
int main()
{
    std::vector<int>position={1,2,4,7};
    vector<int> height={4,6,8,11};
    maxmudsegment(position,height);
}
