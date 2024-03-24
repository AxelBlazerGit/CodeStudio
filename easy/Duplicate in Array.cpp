int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    int a[n - 1] = {0}; 

    for(int i = 0; i < n; i++) {
        a[arr[i] - 1]++; 
        if(a[arr[i] - 1] == 2) {
            return arr[i]; 
        }
    }

    return -1; 

}
