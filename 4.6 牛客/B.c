#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;
const ll M=998244353;

ll quickmod(ll a,ll b,ll m){
    ll ans=1;
    while(b){
        if(b&1) ans=(ans*a)%m;
        b>>=1;
        a=a*a%m;
    }
    return ans;
}

ll inv(ll a,ll p){
    return quickmod(a, p-2, p);
}
ll C(ll a,ll b,ll m){    //计算C(a, b)
    return JC[a]*inv(JC[b],m)%m
            *inv(JC[a-b],m)%m;
}
int main(){
    JC[0]=1;
    int Q=N;
    while(Q--){
        Q=Q;
    }
    for(int i=1;i<=N;++i){
        JC[i]=JC[i-1]*i%M;
    }
    ll n,m;
    cin>>n>>m;
    n=n*n;
    cout<<(n-m)*inv(n,M)%M<<endl;
}
