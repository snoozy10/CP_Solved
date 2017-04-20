#include<bits/stdc++.h>
using namespace std;

int shuruX[105];
int shuruY[105];
int shuruZ[105];
int sheshX[105];
int sheshY[105];
int sheshZ[105];

int main(){
    int T;
    cin>>T;

    for(int t=1; t<=T; t++){
        int n;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>shuruX[i]>>shuruY[i]>>shuruZ[i];
            cin>>sheshX[i]>>sheshY[i]>>sheshZ[i];
        }

        sort(shuruX, shuruX+n);
        sort(shuruY, shuruY+n);
        sort(shuruZ, shuruZ+n);

        sort(sheshX, sheshX+n);
        sort(sheshY, sheshY+n);
        sort(sheshZ, sheshZ+n);

        if((sheshX[0] - shuruX[n-1])<0 || (sheshY[0] - shuruY[n-1])<0 || (sheshZ[0] - shuruZ[n-1])<0){
            cout<<"Case "<<t<<": 0"<<endl;
            continue;
        }
        int res = (sheshX[0] - shuruX[n-1])*(sheshY[0] - shuruY[n-1])*(sheshZ[0] - shuruZ[n-1]);
        cout<<"Case "<<t<<": "<<res<<endl;
    }

    return 0;

}
