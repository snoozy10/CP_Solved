#include <bits/stdc++.h>
using namespace std;

#define PI 2*acos(0.0)


int main(){
    int T;
    double r;
    cout << setprecision(2) << fixed;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>r;
        double result = pow(10, -9) + 4*r*r - PI*r*r;
        //double circle = PI*r*r;
        cout<<"Case "<<t<<": "<<(result)<<endl;

    }
    return 0;
}
