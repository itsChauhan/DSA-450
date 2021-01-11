#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    priority_queue<pair<int,int>> max_heap;

    for(int i=0;i<n;i++){
        if(max_heap.size()<k)
            max_heap.push(make_pair(abs(arr[i]-x),arr[i]));
        else if(abs(arr[i]-x)<max_heap.top().first){
            max_heap.pop();
            max_heap.push(make_pair(abs(arr[i]-x),arr[i]));
        }
    }
    while(!max_heap.empty()){
        cout<<max_heap.top().second<<" ";
        max_heap.pop();
    }
    return 0;
}