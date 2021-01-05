#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   priority_queue<int,vector<int>,greater<int>> min_heap;
	   int index=0;
	   for(int i=0;i<n;i++){
	       min_heap.push(arr[i]);
	       if(min_heap.size()>k){
	           arr[index++]=min_heap.top();
	           min_heap.pop();
	       }
	   }
	   while(!min_heap.empty()){
	       arr[index++]=min_heap.top();
	       min_heap.pop();
	   }
	   for(int i=0;i<n;i++)
	        cout<<arr[i]<<" ";
	   cout<<endl;
	    
	}
	return 0;
}