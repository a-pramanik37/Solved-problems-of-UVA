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
int n, s;
int vis[42][305], rs[42][305];
struct dt
{
    int x, y;
}a[42];

bool cmp(dt lhs, dt rhs)
{
    if(lhs.x==rhs.x)return lhs.y>rhs.y;
    else return lhs.x>rhs.x;
}

int fooh(int pos, int cnt, int sum){
    //printf("%d %d %d\n", pos, cnt, sum);
    if(pos>n){
        if(sum==s)return cnt;
        else return 0;
    }
    if(sum>s)return 0;

    if(vis[pos][sum]!=-1)return rs[pos][sum];

    int p=0, q=0;
    int z = sqrt((a[pos].x*a[pos].x)+(a[pos].y*a[pos].y));
    p = fooh(pos, cnt+1, sum+z);
    q = fooh(pos+1, cnt, sum);

    if(p>0 && q>0)rs[pos][sum]=min(p, q);
    else if(p>0 && q==0)rs[pos][sum]=p;
    else if(q>0 && p==0)rs[pos][sum]=q;
    else rs[pos][sum]=0;
        //rs[pos][sum]=max(p, q);

    vis[pos][sum]++;
    return rs[pos][sum];


}

int main()
{
    int t, i, j, k, p, q;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &s);

        for(i=1; i<=n; i++){
            scanf("%d%d", &p, &q);
            if(p<q)swap(p, q);
            if(p==q){
                a[i].x=p;
                a[i].y=0;
            }
            else{
            a[i].x=p;
            a[i].y=q;
            }
        }

        //sort(a+1, a+1+n, cmp);

        mem(vis, -1);
        mem(rs, 0);

        k=fooh(1, 0, 0);
        printf("%d\n", k);

    }
    return 0;
}
