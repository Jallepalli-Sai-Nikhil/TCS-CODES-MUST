#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int k){
    int n = arr.size();
    k = k % n;

    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = {1,2,4,7,9};
    int k;
    cin>>k;
    rotate(arr,k);
    return 0;
}