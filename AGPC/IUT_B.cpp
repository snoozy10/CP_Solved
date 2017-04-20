#include<bits/stdc++.h>
using namespace std;

int pylons[100005];

int main(){
    memset(pylons, 0, sizeof(pylons));

    long int n, res=0, energy=0;  cin>>n;
    pylons[0]=0;
    for(int i=1; i<n+1; i++){
        cin>>pylons[i];

        energy += (pylons[i-1]-pylons[i]);
        if(energy<0){
            res += abs(energy);
            energy = 0;
        }
    }
    cout<<res<<endl;
    return 0;
}

