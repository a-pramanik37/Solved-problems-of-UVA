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

char in1[25][100], in2[25][100], main1[25][100], main2[25][100];

int a[100];
int main()

{
    int x, y, i, j, k, p, q, cnt, ans, n, m, max, cc=1, flg;
    char ch;

    while(scanf("%d%d ", &x,&y)==2){

        for(i = 1; i<=x; i++){
            gets(main1[i]);
            strcpy(in1[i], main1[i]);
        }
        for(i = 1; i<=y; i++){
            gets(main2[i]);
            strcpy(in2[i], main2[i]);
        }
        for(i = 1; i<=x; i++){
            for(j = 0; j<strlen(in1[i]); j++){
                if(in1[i][j]>=65 && in1[i][j]<=90){
                    in1[i][j]+=32;
                }
            }
        }

        for(i = 1; i<=y; i++){
            for(j = 0; j<strlen(in2[i]); j++){
                if(in2[i][j]>=65 && in2[i][j]<=90){
                    in2[i][j]+=32;
                }
            }
        }

        max = 0;
        mem(a,0);
        for(i = 1; i<=y; i++){
                cnt = 0;
                for(j = 1; j<=x; j++){
                        ch = in1[j][0];
                    for(k = 0; k<strlen(in2[i]); k++){
                        if(ch==in2[i][k] /*&& (k==0 || (in2[i][k-1] <97 && in2[i][k-1]>122))*/){
                                if(k!=0 && (in2[i][k-1] >=97 && in2[i][k-1]<=122)) continue;
                                flg = 0;
                            for(n = 1, m=k+1; n<=strlen(in1[j]); n++, m++){
                                if(n<strlen(in1[j]) && in1[j][n]!=in2[i][m]){
                                    flg = 1;
                                    break;
                                }
                                if(strlen(in1[j])==n){
                                    if(in2[i][m]>=97 && in2[i][m]<=122)flg = 1;
                                }
                            }
                            if(flg==0){

                                        /*k=m;*/
                                    cnt++;

                            }
                        }
                    }
                }
                if(cnt>=max)max = cnt;
                a[i]+=cnt;
        }

        pn("Excuse Set #%d\n", cc++);

        for(i = 1; i<=y; i++){
            if(a[i]==max)printf("%s\n",main2[i]);
        }
        printf("\n");

    }
    return 0;
}
