#include <bits/stdc++.h>
using namespace std;

vector<int> unique(vector<int>& arr, int n){
    unordered_map<int, int> freq;
    vector<int> res;
    for(int num: arr)
        freq[num]++;

    for(auto pair: freq){
        if(pair.second == 1){
            res.push_back(pair.first);
        }
    }
    return res;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    vector<int> res = unique(arr,n);
    return 0;
}