#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, half, temp; cin>>n;
    temp = n%2; half = n/2;

    long long int res = half*(half+1) - half - half*(half - 1) - temp*n;
    cout<<res<<endl;
    return 0;
}
