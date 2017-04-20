#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[2], y[2], r[2];

    for(int i=0; i<2; i++){
        //cin>>x[i]>>y[i]>>r[i];
        scanf("%d%d%d", &x[i], &y[i], &r[i]);
    }
    double dist = sqrt( (x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]) );
    int bigr = max(r[0], r[1]);

    int smallr = r[0]+r[1]-bigr;
    if(dist < bigr){
        dist = bigr - smallr - dist;
    }
    else{
        dist = dist - r[0] - r[1];
    }
    dist/=2.0;

    //cout<<dist<<endl;
    if(dist<0.0)
        dist = 0.0;

    printf("%.15lf", dist );
    return 0;
}
