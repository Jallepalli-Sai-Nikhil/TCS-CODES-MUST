#include <bits/stdc++.h>
using namespace std;

/*
Given an array of integers arr[], the task is to find the first equilibrium point in the array.

The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists. 

Examples:

Input: arr[] = [1, 2, 0, 3]
Output: 2 
Explanation: The sum of left of index 2 is 1 + 2 = 3 and sum on right of index 2 is 3.
*/

class Solution {
    public:
      // Function to find equilibrium point in the array.
      // arr: input array
      int equilibriumPoint(vector<long long> &arr) {
          int n = arr.size();
          
          if(n == 1) return 1;
          
          long long totalSum = 0;
          for(int i=0;i<n;++i){
              totalSum += arr[i];
          }
          
          
          long long prefixSum = 0;
          for(int i=0; i<n; ++i){
              long long rightSum = totalSum - prefixSum - arr[i];
              
              if(prefixSum == rightSum){
                  return i+1;
              }
              
              prefixSum += arr[i];
          }
          return -1;
      }
  };