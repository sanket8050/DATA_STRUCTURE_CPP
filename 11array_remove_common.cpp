#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>remove(const vector<int>&arr1 , const vector<int>&arr2){
    unordered_map<int,int>freq1,freq2;
    vector<int>ans;
    for(int x : arr1) freq1[x]++;
    for(int y : arr2) freq2[y]++;

    for(int x : arr2){
        if(freq1[x] == 0){
            ans.push_back(x);
        }
    }

    for(int y : arr1){
        if(freq2[y] == 0){
            ans.push_back(y);
        }
    }

    return ans;

}

int main(){
    vector<int>arr1{1,1,5,6,7};
    vector<int>arr2{9,5,7};

    vector<int>ans = remove(arr1,arr2);
    for(auto X: ans){
        cout<<X<<endl;
    }

}