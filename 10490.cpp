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
#define cf 46350
ll a[cf+5];
vector<ll>pr, ans;
ll b[cf+5];

bool is_prime(ll x){
    if(x==2 || x==3 ||x==5|| x==7|| x==11)return true;
    ll sq = sqrt(x);
    for(ll i=2; i<=sq+1; i++){
        if(x%i==0)return false;
    }
    return true;
}

int main()
{
    ll n, i, x, y, j, N, z, n1, n2;

    for(i=2; i<=cf; i++){
        if(a[i]==0){
            pr.pb(i);
            for(j=i*2; j<=cf; j+=i){
                a[j]=1;
            }
        }
    }

    while(scanf("%lld", &n)==1){
        if(n==0)break;
            z=n;
        n1 = pow(2, n-1);
        n2 = (pow(2, n)-1);
        N=n1*n2;
        mem(b, 0);
        for(i=0; pr[i]*pr[i]<=n1; i++){
            if(n1%pr[i]==0){
                ans.pb(pr[i]);
                while(n1/pr[i]==0 && n1>0){
                    b[pr[i]]++;
                    n1/=pr[i];
                }
            }
            if(n1==1)break;
        }
        if(n1>1){
            ans.pb(n1);
            b[n1]++;
        }

        y = 1;

        for(i=0; i<ans.size(); i++){
            j = pow(ans[i], b[ans[i]]+1)-1;
            j/=(ans[i]-1);
            y*=j;
        }
        ans.clear();
        mem(b, 0);

        for(i=0; pr[i]*pr[i]<=n2; i++){
            if(n2%pr[i]==0){
                ans.pb(pr[i]);
                while(n2/pr[i]==0 && n2>0){
                    b[pr[i]]++;
                    n2/=pr[i];
                }
            }
            if(n2==1)break;
        }
        if(n2>1){
            ans.pb(n2);
            b[n2]++;
        }

        for(i=0; i<ans.size(); i++){
            j = pow(ans[i], b[ans[i]]+1)-1;
            j/=(ans[i]-1);
            y*=j;
        }


        printf("%lld\n", y);

        if(y==N*2){
            printf("Perfect: %lld!\n", N);
        }

        else if(is_prime(z)==true){
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else{
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
        ans.clear();
    }
    return 0;
}
