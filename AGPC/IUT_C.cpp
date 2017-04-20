#include <bits/stdc++.h>
using namespace std;



int main(){
    int n; string s="", res;
    cin>>n;
    for(int i=0; i<n; i++){
        char temp;
        cin>>temp;
        s += temp;
    }
    int zeroes = count(s.begin(), s.end(), '0');
    int fives = count(s.begin(), s.end(), '5');

//    fives = 1000;
//    cout<<"My s: "<<s<<endl;
    if(zeroes == 0){
        res = "-1";
    }
    else if(fives<9){
        res = "0";
    }else{
        int mult = 5*fives;
        fives = (mult/45)*9;

        if(fives==0){
            res = "0";
        }
        else{
            for(int i=0; i<fives; i++){
                res += '5';
            }for(int i=0; i<zeroes; i++){
                res += '0';
            }
        }
    }

    cout<<res<<endl;
}
