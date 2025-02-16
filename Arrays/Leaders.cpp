#include <bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int> &arr){
    vector<int> leaders;

    int n = arr.size();
    int maxFromRight = INT_MIN;
    for(int i = n-1;i>=0;i++){
        if(arr[i] > maxFromRight){
            leaders.push_back(arr[i]);
            maxFromRight = arr[i];
        }
    }
    return leaders;
}

int main(){
    vector<int> arr = {1,2,4,7,9};
    int k;
    cin>>k;
    cout<<Leaders(arr);
    return 0;
}