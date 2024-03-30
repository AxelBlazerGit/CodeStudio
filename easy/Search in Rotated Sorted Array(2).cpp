int binSearch(vector<int> &arr, int s, int e, int key) {
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (arr[mid] == key)
      return mid;
    else if (arr[mid] > key)
      e = mid - 1;
    else
      s = mid + 1;
    mid = s - (s - e) / 2;
  }
  return -1;
}
int findPivot(vector<int> &arr, int n) {
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  while (s < e) {
    if (arr[mid] > arr[0])
      s = mid + 1;
    else
      e = mid;
      mid=s+(e-s)/2;
  }
  return s;
}
int search(vector<int> &arr, int n, int k) {
  // Write your code here.
  // Return the position of K in ARR else return -1.
  // if(arr.size()==1) return (k==arr[0])?0:-1;
  if(arr.size()<=3){
    for(int i=0;i<n;i++) if(arr[i]==k) return i;
    return -1;
  }
  int decide = findPivot(arr, n);
  return (k >= arr[0])? binSearch(arr, 0, decide - 1, k) : binSearch(arr, decide, n - 1, k);
}
