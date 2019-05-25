#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define pi (2.0*acos(0.0))
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;

char a[505][505];
dec2;

int main()

{

        while(gets(a[0])){
            r=1;
            while(gets(a[r])){
                if(a[r][0]=='\0'){
                    break;
                }
                r++;
            }
            cnt = 0;
          ll  sum;

           ll q;
            char ch;
            for(i=0; i<r; i++){
                    sum = 0;
                    p=0;
                    q=0;
                if(a[i][strlen(a[i])-1]!='?'){


                    for(j=0; j<strlen(a[i]); j++){
                        if(a[i][j]=='+'||a[i][j]=='-'){
                            ch = a[i][j];
                            u = j;
                            break;
                        }
                        else{
                            p = p*10+(a[i][j]-48);
                        }
                    }

                    for(j=u+1; j<strlen(a[i]); j++){
                        if(a[i][j]=='='){
                            u = j;
                            break;
                        }
                        else{
                            q = q*10+(a[i][j]-48);
                        }
                    }
                    for(j=u+1; j<strlen(a[i]); j++){
                        sum = sum*10+(a[i][j]-48);
                    }
//                    printf("%lld %lld %lld\n",p, q,sum);
                    if(ch=='+' && p+q==sum)cnt++;
                    else if(ch=='-' && p-q==sum)cnt++;

                }


            }
            printf("%lld\n",cnt);

//            for(i=0; i<r; i++){
//                printf("%s\n",a[i]);
//            }
        }
        return 0;
}
