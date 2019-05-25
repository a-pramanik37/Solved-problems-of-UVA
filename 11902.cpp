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
vector<int>a[105];
int vis[105];

void f(int u){

    vis[u]=1;

    for(int i=0; i<a[u].size(); i++){
        int y = a[u][i];
        if(vis[y]==0){
            f(y);
        }
    }

}

void bal(int n)
{
    for(int k=1; k<=(2*n+1); k++){
            if(k==1 || k==(2*n)+1)printf("+");
            else printf("-");
        }
        printf("\n");
}

int main()
{
    int t, n, i, j, k, x;
    scanf("%d", &t);
    int cc=0;
    while(t--){

        scanf("%d", &n);

        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                scanf("%d", &x);
                if(x==1){
                    a[i].pb(j);
                }
            }
        }
        printf("Case %d:\n", ++cc);
        bal(n);
        cout<<"|";
        for(i=1; i<=n; i++)printf("Y|");
        printf("\n");
        bal(n);
        for(i=2; i<=n; i++){
            for(j=1; j<=n; j++){
                    if(i==j)printf("|Y");
                    else{
                mem(vis,0);
                vis[i]=1;
                f(1);
                if(vis[j]==1)printf("|N");
                else printf("|Y");
                    }
            }
            cout<<"|"<<endl;
            bal(n);
        }

        for(i=1; i<=n; i++)a[i].clear();
    }
    return 0;
}
