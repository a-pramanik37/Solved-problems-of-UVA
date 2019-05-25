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
int a[cf][10];
int b[cf];
int main()
{
    int i, j, x, y, q, n;
    while(scanf("%d", &n)==1){
            mem(a, 0);

        for(i=1; i<=n; i++){
            scanf("%d", &x);
            b[i]=x;
            if(i!=1){
                    for(j=0; j<=9; j++){
                a[i][j]=a[i-1][j];
            }
            }
            a[i][x]++;
        }

        /*for(i=1; i<=7; i++){
            for(j=0; j<=9; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }*/

        scanf("%d", &q);
        while(q--){
            scanf("%d%d", &x, &y);
            int sum = 0;
            if(x==y){
                sum=1;
            }
            else{
            for(i=0; i<=9; i++){
                if(a[x][i]<a[y][i]){
                    sum++;
                }
                else if(a[x][i]==a[y][i] && a[x][i]!=0){
                    if(b[x]==i||b[y]==i)sum++;
                }
            }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}

