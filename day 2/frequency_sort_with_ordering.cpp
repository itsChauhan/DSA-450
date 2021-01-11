#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
bool cmp(pii x,pii y){
    if(x.second==y.second)
        return x.first<y.first;
    return x.second>y.second;
}
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
	    //priority_queue<pii> max_heap;
	    vector<pii> res;
	    for(auto i=freq.begin();i!=freq.end();i++){
	        res.push_back(make_pair(i->first,i->second));
	    }
	    sort(res.begin(),res.end(),cmp);
	    for(auto i:res){
	        int x=i.second;
	        while(x--)
	            cout<<i.first<<" ";
	    }
	   // while(!max_heap.empty()){
	   //     int x=max_heap.top().first;
	   //     while(x--)
	   //         cout<<max_heap.top().second<<" ";
	   //    max_heap.pop();
	   // }
	    cout<<endl;
	}
	return 0;
}