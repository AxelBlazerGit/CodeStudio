#include <bits/stdc++.h>

vector < vector < int >> findTriplets(vector < int > v, int n) {
    // Write your code here
    sort(v.begin(), v.end());
    vector < vector < int >> ans;
    set < vector < int >> temp;
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = v[i] + v[l] + v[r];
            if (sum == 0) {
                temp.insert({
                    v[i],
                    v[l],
                    v[r]
                });
                l++;
                r--;
            } else if (sum > 0) {
                r--;
            }
            else {
                l++;
            }
        }
    }
    for (auto it: temp) ans.push_back(it);
    return ans;
}
