#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int *nums=new int[n];
    for(int i=0;i<n;i++)
        cin>>nums[i];
            unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> min_heap;
        for(auto i=freq.begin();i!=freq.end();i++){
            //cout<<i->first<<" "<<i->second<<endl;
                min_heap.push(make_pair(i->second,i->first));
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }
        while(!min_heap.empty()){
            cout<<min_heap.top().second<<" "<<min_heap.top().first<<endl;
            min_heap.pop();
        }   

   
    return 0;
}