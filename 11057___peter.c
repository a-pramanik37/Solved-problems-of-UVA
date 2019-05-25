#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a[100000];
int main()

{
     int n, i, j, m, x ,y, low , high, minn;

     while(scanf("%d", &n)==1){
        for(i = 1; i<=n; i++)scanf("%d", &a[i]);

        scanf("%d", &m);
        low = 1;
        high = n;
        minn=10000000;
        while(low!=high){
            if(a[low]+a[high]>m){
                high-=1;
            }
            else if(a[low]+a[high]==m){
                if((a[high]-a[low])<=minn){
                        x = a[low];
                        y = a[high];
                }
                low+=1;
                high-=1;
            }
            else{
                low+=1;
                high-=1;
            }

        }
        printf("Peter should buy books whose prices are %d and %d.\n", x, y);
     }
    return 0;
}
