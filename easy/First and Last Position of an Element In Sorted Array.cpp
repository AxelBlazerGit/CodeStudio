#include <bits/stdc++.h> 
int firstIdx(vector<int>& arr,int n,int k){
    int ans=-1,s=0,e=n-1;
    // int mid=s+(e-s)/2;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k) e=mid-1;
        else s=mid+1;
        // mid=s+(e-s)/2;
    }
    return ans;
}
int lastIdx(vector<int>& arr,int n,int k){
    int ans=-1,s=0,e=n-1;
    // int mid=s+(e-s)/2;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k) e=mid-1;
        else s=mid+1;
        // mid=s+(e-s)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    // int first=firstIdx(arr,n,k),last=lastIdx(arr,n,k);
    return make_pair(firstIdx(arr,n,k), lastIdx(arr,n,k));
}
