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


int tot, n, koto;
int tk[103];

int a[102][10004];

int fcst(int pos, int sum)
{
    if(sum>=tot)return sum;
    if(pos>n){
        if(sum>=tot)return sum;
        else return inf;
    }

    if(a[pos][sum]!=-1)return a[pos][sum];

    int xx=0, yy=0;
    xx = fcst(pos+1, sum+tk[pos]);
    yy = fcst(pos+1, sum);

    a[pos][sum]=min(xx, yy);
    return a[pos][sum];

}

int fcnt(int pos, int cnt, int sum)
{
    if(sum==0){
            //printf("%d\n", cnt);
            return cnt;
    }
    if(sum<0)return inf;
    if(pos>n){
        if(sum==0){
            //printf("%d\n", cnt);
                return cnt;
        }
        else return inf;
    }

    if(a[pos][sum]!=-1)return a[pos][sum];

    int xx=0, yy=0;

    xx = fcnt(pos+1, cnt+1, sum-tk[pos]);
    yy = fcnt(pos+1, cnt, sum);

    a[pos][sum]=min(xx, yy);

    return a[pos][sum];

}


int main()
{
    int t, i, j, koyta;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &tot);
        scanf("%d", &n);
        for(i=1; i<=n; i++)scanf("%d", &tk[i]);

        mem(a, -1);

        koto = fcst(1, 0);

        mem(a, -1);
        sort(tk+1, tk+1+n, greater<int>());
        koyta = fcnt(1, 0, koto);

        printf("%d %d\n", koto, koyta);

    }
    return 0;
}
