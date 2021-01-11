#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x;
	    map<int,int> freq;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        freq[x]++;
	    }
	    priority_queue<pii> max_heap;
	    for(auto i=freq.begin();i!=freq.end();i++){
	        max_heap.push(make_pair(i->second,i->first));
	    }
	    while(!max_heap.empty()){
	        int x=max_heap.top().first;
	        while(x--)
	            cout<<max_heap.top().second<<" ";
	       max_heap.pop();
	    }
	    cout<<endl;
	}
	return 0;
}