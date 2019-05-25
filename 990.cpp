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
int t, w, n, cnt;


struct dt
{
    int dpth, gld;
}b[103], c[103];

int mp[103];
vector<int>v;
int a[33][1003];

int f(int pos, int gold, int sum){

    if(sum==t)return gold;
    if(sum>t)return 0;
    if(pos>n){
        if(sum<=t)return gold;
        else return 0;
    }

    if(a[pos][sum]!=-1)return a[pos][sum];

    int xx=0, yy=0;

    xx=f(pos+1, gold+b[pos].gld, sum+(b[pos].dpth*w)+(b[pos].dpth*2*w));
    yy=f(pos+1, gold, sum);

    a[pos][sum]=max(xx, yy);

    return a[pos][sum];

}

void sol(int pos,int sum)
{
    if(sum>=t)return;
    if(pos>n)return;

    int xx = b[pos].dpth*w+(b[pos].dpth*2*w);

    if(a[pos][sum]>=a[pos+1][sum] && sum+xx<=t){
        cnt++;
         mp[cnt]=pos;
        //printf("%d %d\n", b[pos].dpth, b[pos].gld);
        sol(pos+1, sum+xx);
    }
    else{
        sol(pos+1, sum);
    }

}


bool cmp(dt lhs, dt rhs){
    if(lhs.gld>rhs.gld)return true;
    else if(lhs.gld==rhs.gld && lhs.dpth<rhs.dpth)return true;
    else return false;
}


int main()
{
    int i, j, k, mx, x, y;
    int cc=0;
    while(scanf("%d%d", &t, &w)==2){

        scanf("%d", &n);
        for(i=1; i<=n; i++){
            scanf("%d%d", &b[i].dpth, &b[i].gld);
            c[i].dpth=b[i].dpth;
            c[i].gld=b[i].gld;
        }
        sort(b+1, b+1+n, cmp);
        mem(a, -1);
        mx = f(1, 0, 0);
        if(cc!=0)printf("\n");
        cc++;
        printf("%d\n", mx);
        cnt = 0;
        mem(mp, 0);
        sol(1, 0);
        printf("%d\n", cnt);


        for(i=1; i<=cnt; i++){
                x = b[mp[i]].dpth;
                y = b[mp[i]].gld;
            for(j=1; j<=n; j++){
                if(x==c[j].dpth && y==c[j].gld){
                    v.pb(j);
                    break;
                }
            }
        }
        vsort(v);

        for(i=0; i<v.size(); i++){
            printf("%d %d\n", c[v[i]].dpth, c[v[i]].gld);
        }

        v.clear();

    }
    return 0;
}
