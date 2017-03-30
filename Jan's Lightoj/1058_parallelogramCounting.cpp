#include <bits/stdc++.h>
using namespace std;

int x[1005], y[1005];

double d(int a, int b){

}

int main(){
    int T, n, res=0;
    for(int t=1; t<=T; t++){
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>x[j]>>y[j];
        }
        if(n<4) break;
        for(int p=0; p<n-3; p++){
            for(int q=1; q<n-2; q++){
                for(int r=2; r<n-1; r++){
                    for(int s=3; s<n; s++){

                    }
                }
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
