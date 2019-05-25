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
int b[]={1, 5, 10, 25, 50};
int a[6][7490];
int vis[5][7490];

int dp(int u, int x){

    if(u>4){
        if(x==0)return 1;
        else return 0;
    }

        if(vis[u][x]!=0)return a[u][x];

        int xx=0, yy=0;

        if(b[u]<=x)xx = dp(u, x-b[u]);
        yy = dp(u+1, x);
        a[u][x]=xx+yy;
        vis[u][x]++;

        return a[u][x];

}

int main()

{
        int n, i, j, k;
        while(scanf("%d", &n)==1){
                //memset(vis, -1, sizeof vis);

                int sum=dp(0, n);

            printf("%d\n", sum);
        }
        return 0;
}

