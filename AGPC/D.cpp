#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    unsigned long long Y;
    //cin>>T;
    scanf("%d", &T);

    //cout<<setprecision(0)<<fixed;

    for(int t=0; t<T; t++){
        //cin>>Y;
        scanf("%lld", &Y);
        double n = ( sqrt( 8*Y + 1) - 1 ) / 2;
        double nint, nfrac;

        nfrac = modf(n, &nint);

        if(nfrac>0.0){
            //cout<<"NAI"<<endl;
            printf("NAI\n");
            continue;
        }
        printf("%.0llf\n", n);
        //cout<<n<<endl;
    }
}
/*

5

11

15

21

1

7626

*/
