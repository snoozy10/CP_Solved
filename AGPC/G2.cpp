#include <bits/stdc++.h>
using namespace std;

long long int fdp[100005];
//int myC[100005];


long long int testDP(long long int n){
        if(n<2) return 1;
        if(fdp[n]>-1) return fdp[n];

        fdp[n] = (  ((n-1) * testDP(n-2))%1000000007  +  testDP(n-1)  )%1000000007;
        return fdp[n];

}
int main(){

    memset(fdp, -1, sizeof(fdp));

    int T;
    cin>>T;
    testDP(100000);

    for(int t=0; t<T; t++){
        long long int n;
        cin>>n;
        cout<<testDP(n)<<endl;
    }


    return 0;
}
