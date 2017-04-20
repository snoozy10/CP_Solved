//unused

#include<bits/stdc++.h>
using namespace std;

int primeFlag[1000005];

void markNonPrime(){
    for(int i=3; i<1000001; i+=2){
        if(primeFlag[i]==0) continue;
        for(int j=3*i; j<4000000; j+=(2*i)){
            primeFlag[j] = 0;
        }
    }
}

bool isPrime(unsigned long int p){
    for(int i = 3; i<=sqrt(p); i+=2){
        if(p%i==0) return false;
    }
    return true;
}
bool isPali( unsigned long int p ){
    unsigned long int r = 0;
    unsigned long int n = p;

    while(n>0){
        r = r*10 + n%10;
        n/=10;
    }

    if(r==p)    return true;
    return false;
}
int main(){
    unsigned long int tempBleh;
    cin>>tempBleh;

    if(tempBleh == 2 || (tempBleh < 9 && tempBleh%2>0)){
        cout<<tempBleh<<endl;
        return 0;
    }
    tempBleh += (tempBleh%2==0 ? 1:0);
    //cout<<tempBleh<<endl;
    //bool foundPali = false;

    memset(primeFlag, -1, sizeof(primeFlag));
    markNonPrime();
    //bool flag = true;
    while(1){
        //cout<<"HERE "<<tempBleh<<endl;
        if(primeFlag[tempBleh]==0 || !isPali(tempBleh)){
            tempBleh += 2;
            //cout<<tempBleh<<endl;
        }
        else{
            break;
        }

    }
    cout<<tempBleh<<endl;
    return 0;
}
