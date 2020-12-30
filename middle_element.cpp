#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if((x-y)*(x-z)<0)   
        cout<<x<<" ";
    else if((y-z)*(y-x)<0) 
        cout<<y<<" ";
    else 
        cout<<z;
    return 0;
}