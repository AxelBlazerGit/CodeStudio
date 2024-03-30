int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s=0,e=n-1;
    while(s<=e){
      int mid=s+(e-s)/2;
      if(arr[mid]==k) return mid;
        
      else if(arr[s]<arr[mid]){//check for k before pivot
        if(arr[s]<=k and k<=arr[mid]) e=mid-1;
        else s=mid+1;
      }
        
      else{
        if(arr[mid]<=k and k<=arr[e]) s=mid+1;
        else e=mid-1;
      }

    }
    return -1;
}
