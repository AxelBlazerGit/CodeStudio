//selection sort is basically traversing array from start pointer to end and finding min element
//then swap min element with start pointer element
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n-1;i++){
        int minn=i;
        for(int j=i+1;j<n;j++) {
            if(arr[minn]>arr[j]) minn=j;
        }
        if(minn!=i)swap(arr[minn],arr[i]);
    }
}
