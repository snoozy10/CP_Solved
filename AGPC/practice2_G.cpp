#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, temp;
    bool nai=false;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp==1) nai = true;
    }
    if(nai)   cout<<"-1"<<endl;
    else cout<<"1"<<endl;
    return 0;
}
