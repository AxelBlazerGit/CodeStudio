//bubble sort is basically sorting adjacent elements from zero to right pointer..at end of every iteration array from right pointer to end of array is sorted
//update right--

#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = n - 1; i > 0; i--){
        bool swapped = false;
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped)break; // optimize if swapped
    }
}
