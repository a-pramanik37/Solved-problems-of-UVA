#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char a[1000];

    int t, n, k, i, j, p, x[26], y[26], q, coun, z;

    scanf("%d", &t);

    for(q = 1; q<=t; q++){

       scanf("%d%d ", &n, &k);
       scanf("%s", a);
       coun = 0;

       memset(x, 0 ,sizeof x);
       memset(y, 0, sizeof y);

       for(i = 0; i<strlen(a); i++){
        z = a[i]-'A';


        if(y[z]!=1 && x[z]>0) coun++;

        x[z] = k;
        y[z] = 1;

        for(j = 0; j<26; j++){
           if(y[j]!=1 && x[j]>0) x[j]--;
           if(y[j]==1) y[j] = 0;
        }

       }
       printf("Case %d: %d\n", q, coun);
    }
    return 0;
}
