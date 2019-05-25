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
int baal(int a, int b){
    if(b>a)swab(a,b);
    int t;
    while(b!=0){
        t = a%b;
        a = b;
        b = t;
    }
    return a;

}
int main()

{
    int t, i, j, k, p, q, x, y, a[1000];

    scanf("%d", &t);
    while(t--){

    }

}
