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

    int n, k, i, j, x, p, a[20][50], b[50], arr[30], col, temp, flg, minn, flg1, coun, ans;

    while(scanf("%d%d", &n, &col)==2){

        for(i = 1; i<=col; i++){
            for(j = 1; j<=col; k++){
                scanf("%d", &a[i][j]);
            }
        }

        for(k = 1; k<=n; k++){
            for(i = 1; i<=col; i++){
                for(j = i+1; j<=col; j++){
                    if(a[k][i]>a[k][j]){
                        temp = a[k][i];
                        a[k][i] = a[k][j];
                        a[k][j] = temp;
                    }
                }
            }
        }

        memset(b, 987654321, sizeof b);

        for(k = 1, coun = 1; k<=n; k++){

        flg = 0;
            for(i = 1; i<=n; i++){
                    flg1 = 0;
                    minn = 987654321;
                for(j = 1; j<=col; j++){
                        x = b[j]-a[i][j];

                    if(b[j]>a[i][j] && x>0 && x<minn){
                        minn = x;
                        b[j] = a[i][j];
                    }
                    else {
                        flg1 = 1;
                        break;
                    }
                }
                if(flg1==0){
                    ans = i;
                }

            }
            if(flg1==0){

                arr[coun] = ans;
                coun++;
            }
        }
        printf("%d\n", coun);

    }
    return 0;
}
