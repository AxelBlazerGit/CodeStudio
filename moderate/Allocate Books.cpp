bool partition(vector<int> arr,int n,int m,int mid){
    int curr=0,partition=0;
    for(int i=0;i<n;i++){
        if(curr+arr[i]<=mid) curr+=arr[i];
        else{
            partition++;
            if((partition +1)>m or arr[i]>mid) return false;
            
                curr=arr[i];
                // partition++;
            
        }
    }
    return true;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    // sort(arr.begin(),arr.end());
    if(m>n) return -1;
    int s=0,sum=0,ans=-1;
    for(int i=0;i<n;i++) sum+=arr[i];
    int e=sum,mid=sum/2;
    while(s<=e){
        if(partition(arr,n,m,mid)){
            e=mid-1;
            ans=mid;
        }
        else s=mid+1;
        mid=s+(e-s)/2;
    }return ans;
}
