// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    int low=0,med=0,high=n-1;
    while(med<=high){
        if(a[med]==0){
            swap(a[med],a[low]);
                low++;
                med++;
            }
        else if(a[med]==1)
            med++;
        else{
            swap(a[med],a[high]);
            high--;
        }
            
        }
    }