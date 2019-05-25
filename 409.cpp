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

int bp(int a, int b){

        if(a==b)return 1;
        else if((a+32)==b) return 1;
        else if((a-32)==b) return 1;
        else if((a+32)==(b+32)) return 1;
        else if(a==(b+32)) return 1;
        else if(a==(b-32)) return 1;

        else return 0;

}

char a[25][100], b[25][100], ;

int main()

{
    int x, y, i, j, k, p, q, cnt, n, m, c, d, f, g;

    while(scanf("%d%d ", &x,&y)==2){

            for(i = 1; i<=x; i++){
                gets(a[i]);
            }
            for(i = 1; i<=y; i++){
                gets(b[i]);
            }


           for(i = 1; i<=y; i++){

            for(j = 1; j<=x; j++){

            }

           }


    }

}
