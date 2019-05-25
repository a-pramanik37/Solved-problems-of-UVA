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
int vis[102][10002];
int prc[102], val[102], n, m, c, jog;

int fooh(int pos, int fv, int sum){

     if(sum>n)return 0;
    if(sum==n)return fv;

    if(pos>m){
        if(sum<=n)return fv;
        else return 0;
    }


    if(vis[pos][sum]!=-1)return vis[pos][sum];

    int xx=0, yy=0;

    xx = fooh(pos+1, fv+val[pos], sum+prc[pos]);

    yy = fooh(pos+1, fv, sum);

    vis[pos][sum]=max(xx, yy);
    return vis[pos][sum];

}

int main()
{
    int i, j, k, x, y;

    while(scanf("%d%d", &n, &m)==2){

        for(i=1; i<=m; i++){
            scanf("%d%d", &prc[i], &val[i]);
        }


        mem(vis, -1);
        printf("%d\n", fooh(1, 0, 0));

    }
    return 0;
}
