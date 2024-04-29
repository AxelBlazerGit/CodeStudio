#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i=n-1,j=m-1,carryOver=0;
	vector<int>ans;
	while(i>=0 and j>=0){
		int sum=a[i--]+b[j--]+carryOver;
		carryOver=sum/10;
		ans.push_back(sum%10);
	}
	while(i>=0){
		int sum=a[i--]+carryOver;
		carryOver=sum/10;
		ans.push_back(sum%10);
	}
	while(j>=0){
		int sum=b[j--]+carryOver;
		carryOver=sum/10;
		ans.push_back(sum%10);
	}
	// ans.push_back(carryOver);
	while(carryOver>0){
		int sum=carryOver;
		carryOver=sum/10;
		ans.push_back(sum%10);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
