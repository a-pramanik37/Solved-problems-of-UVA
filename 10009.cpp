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
#define pii pair<int, int>

//int dx[]={0,1,0,-1};
//int dy[]={1,0,-1,0};
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T is_prime(T a){if(a<2|a==4)return false;if(a==2||a==3||a==5)return true; T g=(T)sqrt(a)+1; for(T i=2; i<=g; i++){if(a%i==0)return false;}return false;}
template <class T> inline T bigmod(T n,T p,T m){if(p==0)return 1; if(p%2)return ((n%m)*bigmod(n,p-1,m))%m; else {T c=bigmod(n,p/2,m);return ((c%m)*(c%m))%m;}}

Aktaruzzaman Pramanik


map<string, int>msi;
map<int, string>mis;
int vis[100], dir[100];
vector<pii>a[100];
vector<int>ans;
priority_queue<pii, vector<pii>, greater<pii> >q;
int main()
{
    //freopen("input.txt","r",stdin)
    //freopen("output.txt","w",stdout)

    int t, n, m, i, j, x, y, src, des;
    string s1, s2;
    scanf("%d\n", &t);
    int cc=0;
    while(t--){

        scanf("%d%d", &m, &n);
        int ind=0;
        for(i=1; i<=m; i++){
            cin>>s1>>s2;
            if(msi[s1]==0){
                msi[s1]=++ind;
                mis[msi[s1]]=s1;
            }
            if(msi[s2]==0){
                msi[s2]=++ind;
                mis[msi[s2]]=s2;
            }
            a[msi[s1]].pb(pii(msi[s2],1));
            a[msi[s2]].pb(pii(msi[s1],1));
        }

         if(cc>0)printf("\n");
        cc++;

        while(n--){

        cin>>s1>>s2;
        src = msi[s1];
        des = msi[s2];
        //cout<<mis[msi[s1]]<<" "<<mis[msi[s2]]<<endl;
        for(i=1; i<=ind; i++){
                dir[i]=i;
                vis[i]=inf;
        }
        q.push(pii(src, 0));

        vis[src]=0;

        while(!q.empty()){

            x = q.top().first;
            int c = q.top().second;
            q.pop();

            if(vis[x]<c)continue;

            for(i=0; i<a[x].size(); i++){
                y = a[x][i].first;
                int cc = a[x][i].second;
                if(vis[y]>vis[x]+cc){
                    vis[y]=vis[x]+cc;
                    dir[y]=x;
                    q.push(pii(y, vis[y]));
                }
            }

        }
        i = des;
        while(1){
            ans.pb(i);
            if(dir[i]==i)break;
            i = dir[i];

        }

        reverse(ans.begin(), ans.end());
        for(i=0; i<ans.size(); i++){
            cout<<mis[ans[i]][0];
        }
        printf("\n");
        ans.clear();
        }
         msi.clear();
        mis.clear();
        ans.clear();
        for(i=0; i<=ind; i++)a[i].clear();


    }
    return 0;
}
