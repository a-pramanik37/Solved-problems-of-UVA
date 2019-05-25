//-_-
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009

struct dt
{
    int tym, team;

}prob[15];

struct tt
{
    int pro[15];
}te[104];
string pr, vr;
int main()
{
    int n, t, m, i, time, tim;

    while(scanf("%d%d%d", &n, &t, &m)==3){

        for(i=1; i<=m; i++){
            cin>>time>>tim>>pr>>vr;
            if(vr=="Yes" && te[tim].pro[pr[0]-64]==0){
                prob[pr[0]-64].tym=time;
                prob[pr[0]-64].team=tim;
                te[tim].pro[pr[0]-64]++;
            }
        }

        for(i=1; i<=n; i++){
                if(prob[i].tym==0 && prob[i].team==0)printf("%c - -\n",i+64);
            else printf("%c %d %d\n", i+64, prob[i].tym, prob[i].team);

        }

        for(i=1; i<=t; i++){
            for(int j=1; j<=n; j++){
                prob[j].tym=0;
            prob[j].team=0;
            te[i].pro[j]=0;
            }
        }
    }
    return 0;
}
