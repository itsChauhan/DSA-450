// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


vector<int> kLargest(int arr[], int n, int k)
{
    priority_queue<int,vector<int>,greater<int>> min_heap;
    for(int i=0;i<n;i++){
        if(i<k)
            min_heap.push(arr[i]);
        else if(arr[i]>min_heap.top()){
            min_heap.pop();
            min_heap.push(arr[i]);
        }
    }
    vector<int> res;
    for(int i=0;i<k;i++){
        res.push_back(min_heap.top());
        min_heap.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

// { Driver Code Starts.
vector<int> kLargest(int arr[], int n, int k);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        
        vector<int> result = kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends