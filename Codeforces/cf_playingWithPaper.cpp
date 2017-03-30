#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long x=0;
    unsigned long long y=0;
    unsigned long long res=0;
    cin>>x>>y;

    while(x>0 && y>0){
        if(y>x) swap(x, y);
        unsigned long long temp=floor( x/y );
        res += temp;
        x-= (temp*y);
    }
    cout<<res<<endl;
    return 0;
}
