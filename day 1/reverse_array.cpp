#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *x=new int[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    int l=0,r=n-1;
    while(l<r){
        swap(x[l],x[r]);
        l++;
        r--;
    }
    for(int i=0;i<n;i++)
        cout<<x[i]<<" ";
    delete[] x;
    return 0;

}