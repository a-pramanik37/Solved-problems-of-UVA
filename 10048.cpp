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
int a[105][105];
int main()
{
    int n, m, q, i, j, k, x, y, c;
    int cc=0;
    while(scanf("%d%d%d", &n, &m, &q)==3 && n!=0 && m!=0 && q!=0){

        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(i==j){
                    a[i][j]=0;
                    a[j][i]=0;
                }
                else{
                    a[i][j]=inf;
                }
            }
        }

        while(m--){
            scanf("%d%d%d", &x, &y, &c);
            a[x][y]=c;
            a[y][x]=c;
        }
        for(k=1; k<=n; k++){
            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){

                        x=max(a[i][k], a[k][j]);
                        a[i][j]=min(x, a[i][j]);

                }
            }
        }
        if(cc>0)printf("\n");
        printf("Case #%d\n",++cc);
        while(q--){
            cin>>x>>y;
            if(a[x][y]==inf)printf("no path\n");
            else printf("%d\n", a[x][y]);
        }
    }
    return 0;
}
