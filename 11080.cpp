///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define infLL 9000000000000000000
#define infULL 18446744073709551615
#define Aktaruzzaman using
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
#define MOD 1000000007
#define pair<int, int>pii

//int dx[]={0,1,0,-1};
//int dy[]={1,0,-1,0};
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T is_prime(T a){if(a<2|a==4)return false;if(a==2||a==3||a==5)return true; T g=(T)sqrt(a)+1; for(T i=2; i<=g; i++){if(a%i==0)return false;}return false;}
template <class T> inline T bigmod(T n,T p,T m){if(p==0)return 1; if(p%2)return ((n%m)*bigmod(n,p-1,m))%m; else {T c=bigmod(n,p/2,m);return ((c%m)*(c%m))%m;}}

Aktaruzzaman Pramanik

vector<int>a[201];
int vis[202], n, m, zero, one, flg;

void make(int x){

    for(int i=0; i<a[x].size(); i++){
        int y = a[x][i];
        if(vis[y]==vis[x])flg=1;
        else if(vis[y]==-1){
           if(vis[x]==0){
                vis[y]=1;
            one++;
            make(y);
           }
           else{
               vis[y]=0;
            zero++;
            make(y);
           }
        }
    }

}

int main()
{
    //freopen("input.txt","r",stdin)
    //freopen("output.txt","w",stdout)

    int t, i, j, k, x, y;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &m);
        for(i=1; i<=m; i++){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
            a[y].pb(x);
        }

        mem(vis, -1);
        int ans=0;
        flg=0;
        for(i=0; i<n; i++){
            if(vis[i]==-1){
                if(a[i].size()==0)ans++;
                else{
                    zero=0;
                    one=0;
                    vis[i]=0;
                    zero++;
                    make(i);
                    ans+=min(zero, one);
                }
            }
        }

        if(flg==1)printf("-1\n");
        else printf("%d\n", ans);
        for(i=0; i<n; i++)a[i].clear();

    }
    return 0;
}
