#include<bits/stdc++.h>
using namespace std;

bool isPrime(unsigned long int p){
    unsigned long sqr = sqrt(p);
    for(int i = 3; i<=sqr; i+=2){
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

    if(tempBleh==2 || (tempBleh < 9 && tempBleh%2>0)){
        cout<<tempBleh<<endl;
        return 0;
    }
    tempBleh += (tempBleh%2==0 ? 1:0);

    while(1){
        if(isPrime(tempBleh) && isPali(tempBleh)){
            break;
        }tempBleh+=2;

    }
    cout<<tempBleh<<endl;
    return 0;
}
