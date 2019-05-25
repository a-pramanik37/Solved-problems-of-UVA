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
int val[1000], a[1000];
int n;
int vis[1000];
int f(int x, int y){

        if(y==n && a[x]==val[y])return 1;
        else if(y==n)return 0;

        int flg=0, p=0;

        for(int i=y; i<=n; i++){
            if(a[x]==val[i]){
                flg=1;
                p = f(x+1, y+1);
            }
        }
        if(flg==0)p = f(x+1, y);

        vis[x]=flg+p;
        return vis[x];

}

int main()
{
    int i, j, k,mx, N;

    while(scanf("%d", &n)==1){

        for(i=1; i<=n; i++)scanf("%d", &val[i]);
        N=n;
        while(N--){
            for(i=1; i<=n; i++)scanf("%d", &a[i]);

            int mx=0;

            for(i=1; i<=n; i++){
                k = f(i, 1);
                //mx = max(mx, k);
                printf("%d\n", k);
            }

        }

    }
    return 0;
}
