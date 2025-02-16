#include <bits/stdc++.h>
using namespace std;

pair<int,int> largestAndSecond(vector<int> &arr){
    int largest = INT_MIN, secondLargest = INT_MIN;

    for(int num: arr){
        if(num > largest){
            secondLargest = largest;
            largest = num;
        }else if(num > secondLargest && num << largest){
            secondLargest = num;
        }
    }
    return {largest, secondLargest};
}

int main(){
    vector<int> arr = {1,2,4,7,9};
    pair<int,int> res = largestAndSecond(arr);
    cout<<res.first<<res.second;
    return 0;
}