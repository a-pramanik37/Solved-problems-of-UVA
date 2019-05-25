#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define pn printf

int main()

{
    int n, i, j, k, a[10005], q, x, y, low, high, mid, cc=1, flg;

    while(scanf("%d%d", &n, &q)==2 && n!=0 && q!=0){

        for(i = 1; i<=n; i++){
            scanf("%d", &a[i]);
        }
        sort(a+1, a+n+1);

        for(i=1; i<=q; i++){
            scanf("%d", &x);
            if(i==1)printf("CASE# %d:\n",cc++);
            low = 1;
            high = n;

            flg=  0;

            while(low<=high){
                mid = (low+high)/2;
                if(a[mid]==x){
                    k = mid;
                    flg = 1;
                    high = mid-1;
                    if(a[mid-1]!=x)break;
                }
                else if(x>a[mid]){
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }
            }
            if(flg==1)printf("%d found at %d\n",x,k);
            else printf("%d not found\n",x);
        }

    }


}
