//-_-
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 20000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
int a[104][104];

void rf(int a[104][104], int n)
{
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    a[i][j]=0;
                    a[j][i]=0;
                }
                else{
                    a[i][j]=inf;
                }
            }
        }
}

int main()
{
    int t, n, m, x, y, i, j, src, des, k;
    scanf("%d", &t);
    int cc=0;
    while(t--){
        scanf("%d%d", &n, &m);
        rf(a, n);
        while(m--){
            scanf("%d%d", &x, &y);
            a[x][y]=1;
            a[y][x]=1;
        }
        scanf("%d%d", &src, &des);

        /*for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }*/

        for(k=0; k<n; k++){
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    a[i][j]=min(a[i][j], a[i][k]+a[k][j]);
                }
            }
        }
        int mx1=0,node;

        for(i=0; i<n; i++){
            mx1=max(mx1, a[src][i]+a[des][i]);
        }


        printf("Case %d: %d\n", ++cc, mx1);
    }
    return 0;
}
