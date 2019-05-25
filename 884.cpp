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

int a[1005];
vector<int>pr;

int main()

{
            for(int i=2; i<=1000; i++){
                if(a[i]==0){
                    pr.pb(i);
                    for(int j=i*2; j<=1000; j+=i){
                        a[j]=1;
                    }
                }
            }

            int n, i, j,x ,y;
            while(scanf("%d", &n)==1){
                int cnt = 0;
                if(n==1000000)printf("3626619\n");
                else{
                    for(int k=2; k<=n; k++){
                    x = k;
                for(i=0; pr[i]*pr[i]<=x; i++){
                    if(x%pr[i]==0){

                        while(x%pr[i]==0 && x>0){
                            x/=pr[i];
                            cnt++;
                        }

                    }
                }
                if(x>1)cnt++;
            }
                printf("%d\n", cnt);
            }
            }
            return 0;
}
