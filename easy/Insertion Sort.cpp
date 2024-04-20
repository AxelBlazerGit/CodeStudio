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
