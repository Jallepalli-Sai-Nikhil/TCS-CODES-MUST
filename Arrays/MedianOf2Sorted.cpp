#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) return findMedianSortedArrays(B, A); // Ensure A is smaller
    
    int n = A.size(), m = B.size(), low = 0, high = n;
    
    while (low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = (n + m + 1) / 2 - cut1;
        
        int L1 = cut1 == 0 ? INT_MIN : A[cut1 - 1];  // Left max of A
        int L2 = cut2 == 0 ? INT_MIN : B[cut2 - 1];  // Left max of B
        int R1 = cut1 == n ? INT_MAX : A[cut1];      // Right min of A
        int R2 = cut2 == m ? INT_MAX : B[cut2];      // Right min of B

        if (L1 <= R2 && L2 <= R1) { // Valid partition found
            return (n + m) % 2 == 0 ? (max(L1, L2) + min(R1, R2)) / 2.0 : max(L1, L2);
        } else if (L1 > R2) { 
            high = cut1 - 1; // Move left
        } else { 
            low = cut1 + 1;  // Move right
        }
    }
    return 0.0;
}

int main() {
    vector<int> A = {1, 3, 8};
    vector<int> B = {7, 9, 10, 11};
    cout << findMedianSortedArrays(A, B); // Output: 8.0
}
