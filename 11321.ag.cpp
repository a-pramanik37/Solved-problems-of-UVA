#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back
int a[100004], b[100004];
int main()

{
    int n, m, i, j, k, p, q, x, y;

    while(scanf("%d%d", &n, &m)==2 && n!=0 && m!=0){

        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
            b[i] = a[i]%m;
        }

        for(i=0; i<n-1; i++){
            for(j=i+1; j<n; j++){

               if(b[i]<b[j])swap(a[i],a[j]);

               else if(b[i]==b[j]){

                if(a[i]%2==0 && a[j]%2==1)swap(a[i], a[j]);

                else if(a[i]%2==1 && a[j]%2==1){
                    if(a[j]>a[i])swap(a[i], a[j]);
                }
                else if(a[i]%2==0 && a[j]%2==0){
                    if(a[j]<a[i])swap(a[j], a[i]);
                }

               }

            }
        }
        printf("%d %d\n", n,m);
        for(i=0; i<n; i++)printf("%d\n",a[i]);

        printf("0 0\n");

    }
    return 0;
}
