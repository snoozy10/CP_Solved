#include <bits/stdc++.h>
using namespace std;

long int myCombos[100005];

unsigned long int testCombo(int n){
    if(n<2) return myCombos[n]=1;
    if(myCombos[n]!=-1) return myCombos[n];
    return myCombos[n] = ((n*(n-1))/2)%1000000007;
//    return myCombos[n] = facto[n] / ( 2 * facto[n-2] );
}

unsigned long int testDP(int n){
    unsigned long int res = 1;
    int nn = n;
    while(nn>0){
        res *= (testCombo(nn)%1000000007);
        nn--;
    }
    return res%1000000007;
}
int main(){
    //memset(myC, -1, sizeof(myC));
    memset(myCombos, -1, sizeof(myCombos));

//    try{
    unsigned long int hudai2 = testCombo(1000);
    cout<< 2 * testDP(2)%1000000007<<endl;
    cout<< 2 * testDP(3)%1000000007<<endl;
    cout<< 2 * testDP(4)%1000000007<<endl;
//    }catch(int e){
//        cout<<"ERROR"<<endl;
//    }

    return 0;
}
