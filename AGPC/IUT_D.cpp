#include<bits/stdc++.h>
using namespace std;


int main(){
    bool flag = false;
    int bleh;
    while(cin>>bleh){
        if(flag)    continue;

        if(bleh == 42){
            flag = true;
            continue;
        }
        cout<<bleh<<endl;
    }
    return 0;
}
