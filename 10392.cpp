#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 1000005

vector<ll>pr;
ll a[cf];
int main()

{
        ll n, i, j, k;
        for(i=2; i<=cf; i++){
            if(a[i]==0){
                pr.pb(i);
                for(j=i*2; j<=cf; j+=i){
                    a[j]=1;
                }
            }
        }

        while(scanf("%lld", &n)==1){

            if(n<0)break;

            for(i=0; i<pr.size(); i++){
                while(n%pr[i]==0 && n>0){
                    n/=pr[i];
                    printf("    %lld\n", pr[i]);
                }
                if(n==1)break;
            }
            if(n>1)printf("    %lld\n", n);
            printf("\n");

        }
        return 0;
}
