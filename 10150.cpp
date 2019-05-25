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

string s1, s2, s;
map<string, int>msi;
map<int, string>mis;
vector<pii>a[25147];
vector<int>ans;
vector<string>b[100];

int vis[25147], dir[25147];
priority_queue<pii, vector<pii>, greater<pii> >q;

bool check(string x, string y){
    int cnt = 0;
        for(int i=0; i<x.size(); i++){
            if(x[i]!=y[i])cnt++;
            if(cnt>1)return false;
        }
        return true;
}

int main()
{
    //freopen("input.txt","r",stdin)
    //freopen("output.txt","w",stdout)


    int i, j, k, x, y, len, n, src, des, gg;


        n=0;

    while(getline(cin, s) && s.length()>0){

            //if(s[0]=='\0')break;
            msi[s]= (++n);
            mis[n]=s;
            len = s.size();

             gg = b[len].size();
             //cout<<"LEN >>"<<len<<endl;
             //cout<<"GG >> "<<gg<<endl;
            //cout<<gg<<endl;
            for(i=0; i<gg; i++){
                    //cout<<">>> "<<b[len][i]<<endl;
                if(check(b[len][i], s)==true){
                    x = msi[s];
                    y = msi[b[len][i]];
                    a[x].pb(pii(y, 1));
                    a[y].pb(pii(x, 1));
                }
            }
            b[len].pb(s);
            s="";
    }

    int cc=0;
    while(cin>>s1>>s2){

        src = msi[s1];
        des = msi[s2];
     //cout<<src<<" "<<des<<endl;
        for(i=1; i<=n; i++){
            dir[i]=i;
            vis[i]=inf;
        }

        vis[src]=0;
        q.push(pii(src, 0));

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
                    q.push(pii(y, cc));
                }

            }

        }

         if(cc>0)printf("\n");
        cc++;

         if(vis[des]==inf){
            printf("No solution.\n");
            continue;
        }

        int i = des;
        ans.clear();
        while(1){
            ans.pb(i);
            if(dir[i]==i)break;
            i=dir[i];
        }

        reverse(ans.begin(), ans.end());


        for(i=0; i<ans.size(); i++){
            cout<<mis[ans[i]]<<endl;
        }



    }
    return 0;

}
