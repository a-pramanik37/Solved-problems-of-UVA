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
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, low, r, t, high, mid;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, , r, t;
dec2;

ll a[50009];
int main()

{
        while(scanf("%lld", &n)==1){

            for(i=1; i<=n; i++){
                scanf("%lld", &a[i]);
            }

            scanf("%lld", &m);

            for(i=1; i<=m; i++){
                scanf("%lld", &x);

                int flg1=0, flg2=0;

                low = 1;
                high = n;

                while(low<=high){

                        if(a[1]>=x){
                            break;
                        }
                        else if(a[n]<x){
                            flg1=1;
                            j = a[n];
                            break;
                        }

                    mid = (low+high)/2;

                    if(a[mid]>=x){
                        if(a[mid-1]<x){
                            flg1= 1;
                            j = a[mid-1];
                            break;
                        }
                        else high = mid-1;
                    }

                    else if(a[mid]<x){
                        if(a[mid+1]>=x){
                            flg1 = 1;
                            j = a[mid];
                            break;
                        }
                        else low = mid+1;

                    }

                }


                low = 1;
                high = n;

                while(low<=high){

                        if(a[1]>x){
                            flg2=1;
                            k = a[1];
                            break;
                        }

                        else if(a[n]<=x){
                            break;
                        }

                    mid = (low+high)/2;

                    if(a[mid]<=x){
                        if(a[mid+1]>x){
                            k = a[mid+1];
                            flg2=1;
                            break;
                        }
                        else low = mid+1;
                    }

                    else if(a[mid]>x){

                        if(a[mid-1]<=x){
                            k = a[mid];
                            flg2=1;
                            break;
                        }
                        else high = mid-1;

                    }

                }


                if(flg1==0)printf("X ");
                else printf("%lld ", j);

                if(flg2==0)printf("X\n");
                else printf("%lld\n", k);
            }

        }
        return 0;
}
