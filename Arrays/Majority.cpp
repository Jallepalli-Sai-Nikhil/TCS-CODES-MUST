#include <bits/stdc++.h>
using namespace std;

int BoyerMoore(vector<int> &arr){
    int count = 0;
    int candidate = 0;

    for(int num: arr){
        if(count == 0)
            candidate = num;

        count += (num == candidate) ? 1: -1;
    }
    return candidate;
}

int main(){
    vector<int> arr = {1,2,4,7,9};
    int k;
    cin>>k;
    cout<<BoyerMoore(arr);
    return 0;
}