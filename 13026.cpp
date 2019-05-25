#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
char a[1005][20];
char mom[100];
int main()

{
    int t, i, j, k, x, cnt, flg, n;

    scanf("%d", &t);

    for(x = 1; x<=t; x++){

        scanf("%d", &n);

        for(j = 1; j<=n; j++){
            scanf("%s", a[j]);
        }
        scanf("%s", mom);
        printf("Case %d:\n", x);
        k = strlen(mom)-1;
        for(i = 1; i<=n; i++){
                cnt = 0;
            for(j = 0; j<strlen(a[i]); j++){
                if(mom[j]==a[i][j])cnt++;
            }
        if(cnt>=k) printf("%s\n", a[i]);
        }

    }
    return 0;
}
