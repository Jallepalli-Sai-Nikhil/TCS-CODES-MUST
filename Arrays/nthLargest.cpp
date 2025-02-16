#include <bits/stdc++.h>
using namespace std;

int nthLargest(vector<int>& arr, int n){
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int num: arr){
        minHeap.push(num);

        if(minHeap.size() > n)
            minHeap.pop();
    }
    return minHeap.top();
}

int main(){
    vector<int> arr = {1,2,4,7,9};
    int k;
    cin>>k;
    cout<<nthLargest(arr,arr.size());
    return 0;
}