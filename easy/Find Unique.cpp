int findUnique(int *arr, int size)
{
    //Write your code here
    int s=0;
    while(size--) s=s^arr[size];
    return s;
}
