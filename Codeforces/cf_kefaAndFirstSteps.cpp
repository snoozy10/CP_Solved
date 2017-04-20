#include <bits/stdc++.h>
using namespace std;

int memo[100005], n, arr[100005];

int dp(int index){
    if(memo[index]!=-1){
        return memo[index];
    }

    if(arr[index]<=arr[index+1]){
        memo[index] = 1 + dp(index+1);
        return memo[index];
    }
    else {
        memo[index]=1;
        int temp = dp(index+1);
        return 1;
    }
}

int main(){
    cin>>n;
    memset(arr, -1, sizeof(arr));
    memset(memo, -1, sizeof(memo));

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    memo[n-1]=1;
    //for(int i=0; i<n; i++){
    //    int temp = dp(i);
    int temp = dp(0);
    //}
    sort(memo, memo+n);

    cout<<memo[n-1]<<endl;
    return 0;
}
