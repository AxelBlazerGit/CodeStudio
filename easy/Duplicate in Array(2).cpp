int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    int ans=(n-1)*n/2;

    for(int i = 0; i < n; i++) {
        ans-=arr[i];
    }

    return -ans; 

}
