// C++ implementation to find the transition point 
#include<iostream> 
using namespace std; 
  
/*
Given a sorted array containing only numbers 0 and 1, the task is to find the transition point efficiently. The transition point is the point where “0” ends and “1” begins.

Examples : 

Input: 0 0 0 1 1
Output: 3
Explanation: Index of first 1 is 3

Input: 0 0 0 0 1 1 1 1
Output: 4
Explanation: Index of first 1 is 4
*/

// Function to find the transition point 
int findTransitionPoint(int arr[], int n) 
{ 
    // Initialise lower and upper bounds 
    int lb = 0, ub = n-1; 
  
    // Perform Binary search 
    while (lb <= ub) 
    { 
        // Find mid 
        int mid = (lb+ub)/2; 
  
        // update lower_bound if mid contains 0 
        if (arr[mid] == 0) 
            lb = mid+1; 
  
        // If mid contains 1 
        else if (arr[mid] == 1) 
        { 
            // Check if it is the left most 1 
            // Return mid, if yes 
            if (mid == 0 
                    || (mid > 0 &&  
                       arr[mid - 1] == 0)) 
                return mid; 
  
            // Else update upper_bound 
            ub = mid-1; 
        } 
    } 
    return -1; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = {0, 0, 0, 0, 1, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    int point = findTransitionPoint(arr, n); 
  
    point >= 0 ? cout<<"Transition point is " << point 
               : cout<<"There is no transition point"; 
    return 0; 
} 