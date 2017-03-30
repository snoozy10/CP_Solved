#include <bits/stdc++.h>
using namespace std;

class point{
public:
    int x, y;

    point(){
        x=0; y=0;
    }

    point(int a, int b){
        x = a; y = b;
    }

    double dis(point po2){
        double temp = (x - po2.x)*(x - po2.x) + (y - po2.y)*(y - po2.y);
        return sqrt(temp);
    }
};

point po[10005];


int main(){
    int T, n, res=0;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>n;
        res = 0;
        for(int j=0; j<n; j++){
            cin>>po[j].x>>po[j].y;
            //point p(5, 5);
            //cout<<po[j].dis(p)<<endl;
        }
        if(n<4) {
            cout<<"Case "<<t<<": "<<res<<endl;
            break;
        }

        for(int i=0; i<n-3; i++){
            for(int j=1; j<n-2; j++){
                for(int k=2; k<n-1; k++){
                    for(int l=3; l<n; l++){

                        if( po[i].dis(po[j]) == po[k].dis(po[l]) && ( po[k].dis(po[i]) == po[j].dis(po[l]) || po[i].dis(po[l]) == po[k].dis(po[j]) ) ){
                            res++;
                        }
                        else if(  po[i].dis(po[k]) == po[j].dis(po[l]) && ( po[i].dis(po[l]) == po[j].dis(po[k]) || po[i].dis(po[j]) == po[k].dis(po[l]) )  ){
                            res++;
                        }

                    }
                }
            }
        }
        cout<<"Case "<<t<<": "<<res<<endl;
    }

    return 0;
}
