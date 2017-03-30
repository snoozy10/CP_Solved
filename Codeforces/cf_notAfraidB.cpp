#include <bits/stdc++.h>
using namespace std;

int main(){
    bool cancel = false;

    int n, m, uni;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>n;
        map<int, int> uniMap;
        bool donotCancel = false;

        for(int j=0; j<n; j++){
            cin>>uni;
            if(uniMap[-uni]>0){
                donotCancel = true;
            }
            uniMap[uni]++;
        }

        if(!donotCancel){
            cancel = true;
        }
    }

    if(cancel){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
