#include <bits/stdc++.h>
using namespace std;

int memo[100005], n, arr[100005];

int dp(int index){
//    if(index==(n-1)){
////        cout<<"index==(n-1)"<<endl;
////        cout<<"memo[index] : 1, array[index] = "<<arr[index]<<" for index = "<<index<<endl<<endl;
//        return 1;
//    }
    if(memo[index]!=-1){
//        cout<<"(memo[index]!=-1"<<endl;
//        cout<<"memo[index] : "<<memo[index]<<", array[index] = "<<arr[index]<<" for index = "<<index<<endl<<endl;
        return memo[index];
    }

    if(arr[index]<=arr[index+1]){
//        cout<<"arr[index]<=arr[index+1]"<<endl;
        memo[index] = 1 + dp(index+1);
//        cout<<"memo[index] : "<<memo[index]<<", array[index] = "<<arr[index]<<" for index = "<<index<<endl<<endl;
        return memo[index];
    }
    else {
//        cout<<"arr[index]>arr[index+1]"<<endl;
//        cout<<"memo[index] : 1, array[index] = "<<arr[index]<<" for index = "<<index<<endl;
        memo[index]=1;
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
    for(int i=0; i<n; i++){
        int temp = dp(i);
    }
    sort(memo, memo+n);

    cout<<memo[n-1]<<endl;
    return 0;
}
