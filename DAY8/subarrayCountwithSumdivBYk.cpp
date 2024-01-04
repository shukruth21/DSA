#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    // HashMap to store frequency.
    unordered_map<int, int> remMap; 
    // Add base case in hashmap. 
    remMap[0] = 1;                   
    int count = 0;
    long summ = 0;
    for (int i = 0; i < arr.size(); i++) {
        summ += arr[i];

        int rem = ((summ % k) + k) % k;
        // If rem already in 'remMap'.
        if (remMap.find(rem) != remMap.end()) {
            count += remMap[rem];//so that count includes previous sub arrays and sub arrays made by joining other subarrays
            remMap[rem] += 1;
        } else {
            remMap[rem] = 1;
        }
    }

    return count;
}
