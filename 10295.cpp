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
map<string, ll>mp;
string s;
int main()

{
        ll m, n, c,sum;
        while(scanf("%lld%lld", &m, &n)==2){

            for(int i=1; i<=m; i++){
                cin>>s>>c;
                mp[s]=c;
            }

            getchar();

            while(n--){
                 sum = 0;
                while(cin>>s){
                    if(s[s.size()-1]=='.')break;
                    if(mp.find(s)!=mp.end()){
                        sum+=mp[s];
                    }
                }
                printf("%lld\n",sum);
            }

            mp.clear();
        }
        return 0;
}
