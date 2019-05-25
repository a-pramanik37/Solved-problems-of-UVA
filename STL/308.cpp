#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define pi (2.0*acos(0.0))
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t, B;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
dec2;

string  a, b, c;

map<string , ll>M;
map<string, ll>::iterator jt;
set<string>s;
set<string>:: iterator it;
int main()

{
        scanf("%lld", &t);

        while(t--){
            getline(cin, a);

            scanf("%lld%lld%lld", &m, &n, &B);


            for(i=1; i<=m; i++){
                cin>>b>>x;
                M[b] = x;
            }
                //getchar();
            for(i=1; i<=n; i++){
                getline(cin, c);
                cin>>y;
                ll sum = 0;
                ll flg = 0;

                for(j=1; j<=y; j++){
                    cin>>b;
                    cin>>k;

                    if(M.find(b)==M.end()){
                        flg=1;
                        break;
                    }
                    else{
                        for(jt = M.begin(); jt!=M.end();jt++){
                            if((*jt).first==b){
                                p = (*jt).second;
                                break;
                            }
                        }
                    }

                    sum+=(p*k);
                    if(sum>B){
                        flg=1;
                        break;
                    }
                }
                if(flg==0){
                    s.insert(c);
                }

            }

            for(i=0; i<a.size(); i++){
                if(a[i]>=97 && a[i]<=122){
                    printf("%c",a[i]-32);
                }
                else printf("%c", a[i]);
            }
            printf("\n");

            if(s.empty())printf("Too expensive!\n\n");
            else {
            for(it=s.begin(); it!=s.end(); it++){
                cout<<*it<<endl;
            }
            printf("\n");
            }

            M.clear();
            s.clear();

        }
        return 0;
}
