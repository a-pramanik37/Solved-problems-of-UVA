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
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)

map<string, string>mp;
map<string, int>msi;
map<int, string>mis;

string a, b;

int main()

{
        int t, n, i, j, k, cnt[10006];
        scanf("%d", &t);

        for(k=1; k<=t; k++){

            scanf("%d\n", &n);

            for(i=1; i<=n; i++){
                getline(cin, a);
                getline(cin, b);
                mp[a]=b;
                msi[a]=i;
                mis[i]=a;
            }

            mem(cnt, 0);
            int p;
            scanf("%d\n", &p);

            while(p--){

                getline(cin, a);

                if(mp.find(a)!=mp.end()){
                    cnt[msi[a]]++;
                }

            }

            int mx = 0;
            int cand;
            for(i=1; i<=n ;i++){
                if(cnt[i]>=mx){
                    mx = cnt[i];
                    cand = i;
                }
            }
            int flg = 0;
            for(i=1; i<=n; i++){
                if(cand!=i && cnt[i]==mx){
                    flg=1;
                    break;
                }
            }

            if(k!=1)printf("\n");


            if(flg==0)cout<<mp[mis[cand]]<<endl;

            else printf("tie\n");

            mp.clear();
            mis.clear();
            msi.clear();

        }
        return 0;
}
