#include <bits/stdc++.h>
using namespace std;

#define PI 2*acos(0)
int main(){
    int T; cin>>T;
    cout<<setprecision(10)<<fixed;
    for(int t=1; t<=T; t++){
        double R, r;
        int n;

        cin>>R>>n;

        if(n==2) r=R/2;
        else r = ( R*sin(2*PI/n) ) / ( ( 2*sin(PI/2 - PI/n) )  +  (sin(2*PI/n)) );

        cout<<"Case "<<t<<": "<<r<<endl;
    }
    return 0;
}
