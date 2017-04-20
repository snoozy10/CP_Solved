//unused

#include<bits/stdc++.h>
using namespace std;

int n, wpie[50], wrack[50], maxInRack[50][50];

int dp(int remWeight, int pieNo, int rackNo){
    if(pieNo==n || rackNo==n) return 0;

    if(maxInRack[rackNo][remWeight]!=-1) return maxInRack[rackNo][remWeight];
    int one=0, two=0;
    if(remWeight >= wpie[pieNo]){
        one = 1+dp(remWeight-wpie[pieNo], pieNo+1, rackNo);
    }
    else if(remWeight == 0){
        two = dp(wrack[rackNo+1], pieNo, rackNo+1);
    }
    three = dp(remWeight, pieNo+1, rackNo);

    maxInRack[rackNo][remWeight]=max(one, max(two, three));
    return maxInRack[rackNo][remWeight];
}

int main(){
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>wpie[i];
    }
    for(int i=0; i<n; i++){
        cin>>wrack[i];
    }
    return 0;
}
