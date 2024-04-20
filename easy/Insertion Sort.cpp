//insertion sort is basically creating a subarray and placing ele at correct ascending order index
//this is achieved by first checking for first two elements are sorted or not..if not then swap rightmost ele and left to rightmost
//then update pointer[for subarray increase]

#include <bits/stdc++.h> 
using namespace std;

void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(arr[j] < arr[j - 1]) swap(arr[j], arr[j - 1]); //swap till you find correct positiun
            else break; //for optimizing
        }
    }
}
