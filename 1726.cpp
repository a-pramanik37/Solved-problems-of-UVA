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
    int d, st;
    char ver;
}a[50005];

int main()
{
    int t, n, i, j, k, lo, hi;
    char ch;
    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);
        int mx = 0, mn=inf;
        lo=inf, hi=inf;
        for(i=1; i<=n; i++){
            scanf("%d%d%c%c", &a[i].d, &a[i].st, &ch, &a[i].ver);
            if(a[i].st==0 && a[i].ver=='i'){
                if(a[i].d<mn){
                    mn = a[i].d;
                    lo=i;
                }
            }
            else if(a[i].st==1 && a[i].ver=='c'){
                if(a[i].d>mx){
                    mx = a[i].d;
                    hi = i;
                }
            }
        }

        /*for(i=1; i<=n; i++){
            printf("%d %d %c\n", a[i].d, a[i].st, a[i].ver);
        }*/

        int cnt = 0;

        if(lo!=inf){
            for(i=1; i<=n; i++){
                if(a[i].st==1 && a[i].d>=a[lo].d && a[i].ver=='c')cnt++;
            }
        }
        if(hi!=inf){
            for(i=1; i<=n; i++){
                if(a[i].st==0 && a[i].d<=a[hi].d && a[i].ver=='i'){
                    if(lo==inf)cnt++;
                    else{
                        if(i!=lo)cnt++;
                    }
                }
            }
        }
        printf("%d\n", cnt);

    }
    return 0;
}
