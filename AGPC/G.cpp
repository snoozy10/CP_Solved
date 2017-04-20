#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    //unsigned long Y;
    cin>>T;
    //scanf("%d", &T);
    //cout<<setprecision(0)<<fixed;

    for(int t=0; t<T; t++){
        //memset(tracker, -1, sizeof(tracker));
        int maxi = 0;

        int lboro, lchhoto;
        string boro, chhoto;

        cin>>lboro>>lchhoto;
        cin>>boro>>chhoto;

        for(int i=0; i<lchhoto; i++){
            int temp = count(boro.begin(), boro.end(), chhoto[i]);
            maxi = max(temp, maxi);
        }

        cout<<maxi<<endl;
    }
}
/*

2
4 2
abcd
ca
4 1
abcd
e

*/
