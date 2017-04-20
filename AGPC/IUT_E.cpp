#include<bits/stdc++.h>
using namespace std;


int main(){
    map<int, char> soLame;
    char singles[] = {'A', 'D', 'O', 'P', 'Q', 'R'};

    for(int i=0; i<sizeof(singles); i++){
        soLame[singles[i]]=1;
    }
    soLame['B']=2;

    //cout<<"test:\t"<<soLame['F']<<endl;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s;   cin>>s; int res=0;
        for(int i=0; i<s.length(); i++){
            res += soLame[s[i]];
        }
        cout<<res<<endl;
    }
    return 0;
}
