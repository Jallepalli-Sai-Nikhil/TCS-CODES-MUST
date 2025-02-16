#include <bits/stdc++.h>
using namespace std;

/*
Given an array arr[] where no two adjacent elements 
are same, find the index of a peak element. 
An element is considered to be a peak element if it is 
strictly greater than its adjacent elements. If there 
are multiple peak elements, return the index of any one 
of them.


Input: arr[] = [1, 2, 4, 5, 7, 8, 3]
Output: 5

Explanation: arr[5] = 8 is a peak element 
because arr[4] < arr[5] > arr[6].
*/

int findPeakElement(vector<int> &arr, int n){
    int left = 0, right = n-1;

    while(left < right){
        int mid = left + (right - left)/2;

        if(arr[mid] > arr[mid+1])
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    findPeakElement(arr, n);
    return 0;
}