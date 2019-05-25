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

vector<int>a[1005], ans;
string s;
int main()

{
        int t, n, i, j, x, y;
        scanf("%d", &t);

        while(t--){
            scanf("%d ", &n);

            for(i=1; i<=n; i++){

                getline(cin, s);
                stringstream ss(s);
                while(ss>>x){
                        a[i].pb(x);

                }
            }

            int mn=inf;
            for(i=1; i<=n; i++){
                y = a[i].size();
                mn=min(mn, y);
            }

            for(i=1; i<=n; i++){
                if(a[i].size()==mn)ans.pb(i);
                a[i].clear();
            }

            for(i=0; i<ans.size(); i++){
                if(i==0)printf("%d",ans[i]);
                else printf(" %d",ans[i]);
            }
            printf("\n");
            ans.clear();
        }
        return 0;
}
