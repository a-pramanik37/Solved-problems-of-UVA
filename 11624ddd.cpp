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
#define piii pair<pii, char>

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T bigmod(T n,T p,T m){if(p==0)return 1; if(p%2)return ((n%m)*bigmod(n,p-1,m))%m; else {T c=bigmod(n,p/2,m);return ((c%m)*(c%m))%m;}}

Aktaruzzaman Pramanik

int r, c;

char a[1002][1002];

queue<piii>q;
int cost[1002][1002];
int main()
{
    //freopen("input.txt","r",stdin)
    //freopen("output.txt","w",stdout)

    int t, i, j, k, x, y;


    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &r, &c);
        for(i=1; i<=r; i++){
            for(j=1; j<=c; j++){
                    cin>>a[i][j];
                    if(a[i][j]=='J'){
                            //q.push(piii(pii(i, j), 'j'));
                        x = i;
                        y = j;
                    }
                    else if(a[i][j]=='F'){
                        q.push(piii(pii(i, j), 'F'));
                    }
            }
        }
        mem(cost,0);

        q.push(piii(pii(x, y), 'J'));

        int ans= inf;
        if(x==1||x==r||y==1||y==c){
            ans=0;
        }
        int flg=0;
        while(!q.empty()){

            int xx, yy, pp, qq;
            char ch;
            xx = q.front().first.first;
            yy = q.front().first.second;
            ch = q.front().second;
            q.pop();

                for(i=0; i<4; i++){
                    pp = xx+dx[i];
                    qq = yy+dy[i];
                    if(ch=='F'){
                    if(pp>=1 && pp<=r && qq>=1 && qq<=c && (a[pp][qq]=='.'|| a[pp][qq]=='J')){
                            a[pp][qq]=ch;
                            q.push(piii(pii(pp, qq), ch));
                    }
                    }
                    else{
                      if(pp>=1 && pp<=r && qq>=1 && qq<=c && a[pp][qq]=='.'){
                            a[pp][qq]=ch;
                            q.push(piii(pii(pp, qq), ch));
                            cost[pp][qq]=cost[xx][yy]+1;
                            if(pp==1 || pp==r || qq==1 || qq==c){

                                ans =min(ans, cost[pp][qq]);
                            }
                            //cout<<"j ase >> "<<"x="<<pp<<" y="<<qq<<" "<<cost[pp][qq]<<endl;
                    }
                    }
            }

        }

        //while(!q.empty())q.pop();

        /*for(i=1; i<=r; i++){
            for(j=1; j<=c; j++)cout<<a[i][j];
            cout<<endl;
        }*/

        /*for(i=1; i<=c; i++){
            if(a[1][i]=='J')ans = min(ans, cost[1][i]);
        }
        for(i=1; i<=c; i++){
            if(a[r][i]=='J')ans = min(ans, cost[r][i]);
        }
        for(i=1; i<=r; i++){
            if(a[i][1]=='J')ans = min(ans, cost[i][1]);
        }
        for(i=1; i<=r; i++){
            if(a[i][r]=='J')ans = min(ans, cost[i][r]);
        }*/

        if(ans==inf)printf("IMPOSSIBLE\n");
        else printf("%d\n", ans+1);

    }
    return 0;
}

