#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back

struct dt
{
    int x, y, c, d;
}a[55];

int main()

{
    int p, q, l, r, i, j, k, n, m;

    while(scanf("%d%d%d%d", &p, &q, &l, &r)==4){

        for(i=1; i<=p; i++){
            scanf("%d%d", &a[i].x, &a[i].y);
        }
        for(i = 1; i<=q; i++){
            scanf("%d%d", &a[i].c, &a[i].d);
        }
        int cnt = 0;
        int ff1, ff2;
        for(i=l; i<=r; i++){
                ff1 = 0;
                ff2 = 0;
            for(j=1; j<=p;j++){
                if(i>=a[j].x && i<=a[j].y){
                    ff1++;
                    break;
                }
            }
            for(j=1; j<=q; j++){
                if(i>=a[j].c && i<=a[i].d){
                    ff2++;
                    break;
                }
            }
            if(ff1!=0 && ff2!=0)cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
