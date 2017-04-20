#include<bits/stdc++.h>
using namespace std;

int wpie[100], wrack[100];

int main(){
    int T;
    cin>>T;

    for(int t=0; t<T; t++){
        int n, res = 0;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>wpie[i];
        }
        for(int i=0; i<n; i++){
            cin>>wrack[i];
        }

        sort(wpie, wpie+n);
        sort(wrack, wrack+n);

        if(wpie[0]>wrack[n-1]){
            cout<<res<<endl;
            continue;
        }
        int pie, rack=0;
        for(pie=0; pie<n; pie++){
            for(; rack<n; rack++){
                if(wpie[pie]<=wrack[rack]) {
                    //cout<<"Putting "<<wpie[pie]<<" in "<<wrack[rack]<<endl;
                    res++;
                    wrack[rack]=0;
                    rack++;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;

}
