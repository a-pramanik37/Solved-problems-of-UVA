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
    int x, y;
}a[cf];


bool cmp(dt lhs, dt rhs){
    int p = lhs.y-lhs.x;
    int q = rhs.y-rhs.x;
    if(p<q)return true;
    else return false;
}

int main()
{
    int n, g, i, j, k, q, r;

    while(scanf("%d%d", &n, &g)==2){
        int sum = 0;
        int c = 0;
        for(i=1; i<=n; i++){
            scanf("%d%d", &j, &k);
            if(j>k){
                sum+=3;
            }
            else{
                a[++c].x=j;
                a[c].y=k;
            }
        }

        sort(a+1, a+1+c, cmp);

        for(i=1; i<=c; i++){
            q = a[i].y-a[i].x;
            if(g>=(q+1)){
                g-=(q+1);
                sum+=3;
            }
            else if(g>=q){
                g-=q;
                sum+=1;
            }
            else break;
        }

        printf("%d\n", sum);
    }
    return 0;
}
