#include <bits/stdc++.h>
using namespace std;

int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t,c;

char a[30][30];


void dfs(int x, int y){

        c = strlen(a[x]);
        if(x<0 ||x >=r || y<0||y>=c|| a[x][y]!='1')return;

        cnt++;
        a[x][y]='0';

        dfs(x,y-1);
        dfs(x, y+1);
        dfs(x-1,y);
        dfs(x+1, y);
        dfs(x-1,y-1);
        dfs(x-1,y+1);
        dfs(x+1, y-1);
        dfs(x+1,y+1);
}


int main()

{
        scanf("%d ", &t);
        //getchar();
        for(k=1; k<=t; k++){

            r=0;
            while(gets(a[r])){
                if(a[r][0]=='\0')break;
                r++;
            }

//            for(i=0; i<r; i++){
//                    c = strlen(a[i]);
//             for(j=0; j<c; j++){
//                printf("%c", a[i][j]);
//             }
//             printf("\n");
//            }

            int mx = 0;
            for(i=0; i<r; i++){
                    c = strlen(a[i]);
                for(j = 0; j<c; j++){

                    if(a[i][j]=='1'){
                            cnt = 0;
                        dfs(i, j);
                    mx = max(mx,cnt);
                    }

                }

            }

            if(k!=1)printf("\n");
            printf("%d\n",mx);


        }
        return 0;
}
