#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;

    cin>>T;

    for(int t=0; t<T; t++){
        int N;
        long int C;

        cin>>N>>C;

        for(int i=0; i<N; i++){
            int c;  cin>>c;
            C-=c;
        }
        if(C<0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }


    return 0;
}
