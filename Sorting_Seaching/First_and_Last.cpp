// First and Last postion in an sorted arrray
// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#

#include<bits/stdc++.h>
using namespace std;
vector<int>find(int a[], int n, int target);

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
} 
// 1. The array is sorted
//2. Apply Binary search since the array is sorted

//This is a Naive;s solution with 0(N) complexity and O(ans) space
// vector<int> find(int arr[], int n, int target){
//      vector<int> ans;
//     for(int i=0;i<n-1;i++){
//          if(arr[i]==target){
//              if(i>0 && arr[i]!=arr[i-1])
//                 ans.push_back(i); 
//              if(i<n && arr[i]!=arr[i+1])
//                 ans.push_back(i);
//          }
//     }
//     return ans;
// }

vector<int> find(int arr[], int n , int target )
{
    vector<int> ans;
    
    return ans;
}