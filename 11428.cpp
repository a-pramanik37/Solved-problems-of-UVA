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
int a[1000];
int main()

{
    int i, j, k, p, q, x, y, flg, n;
    for(i = 1; i<=100; i++){
        a[i] = pow(i, 3);
    }

    while(scanf("%d", &n)==1 && n!=0){
        flg = 0;
        for(i = 1; i<=100; i++){
            for(j = i; j<=100; j++){
                if(a[j]-a[i]==n){
                    x = j;
                    y = i;
                    flg = 1;
                    break;
                }
                else if(a[j]-a[i]>n){
                    break;
                }
            }
            if(flg==1)break;
        }
        if(flg==1)printf("%d %d\n", x, y);
        else printf("No solution\n");
    }
    return 0;
}
