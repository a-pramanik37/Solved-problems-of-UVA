#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

long n;



long int fact(long n)
{
    if(n==0) return 1;
    else if(n==1) return 1;

    else{
        return (n*fact(n-1));
    }
}

int main()

{

    long int t, i, j, ans, g;
    char ar[25];
    int a[30];
    scanf("%ld", &t);

    for(i = 1; i<=t; i++){
        scanf("%s", &ar);
        memset(a, 0, sizeof a);

        for(j = 0; j<strlen(ar); j++){
            if(ar[j]>=65 && ar[j]<=90){
                a[(ar[j]-65)]++;
            }
        }
        g= 1;
        for(j = 0 ; j<26; j++){
            if(a[j]>1){
                g = g*fact(a[j]);
            }
        }

        ans = fact(strlen(ar))/g;

        printf("Data set %ld: %ld\n", i, ans);

    }
    return 0;
}
