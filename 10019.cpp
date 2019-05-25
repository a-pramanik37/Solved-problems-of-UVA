#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int t, i, j, c1, c2, sum, coun, b, n, x, temp, N, val;

int ones(int n)
{
    coun = 0;
    while(n>0){

        if(n%2==1) coun++;
        n = n/2;
    }
    return coun;
}

int main()
{
    char a[1000];

    scanf("%d", &t);

    for(i = 1; i<=t; i++){

        scanf("%s", a);

        val = atoi(a);
        c1 = ones(val);

        sum = 0;

        for(j=0; j<strlen(a); j++){
            sum = sum*16+(a[j]-48);
        }
        c2 =ones(sum);

        printf("%d %d\n", c1, c2);

    }
    return 0;
}
