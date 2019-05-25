#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back

//baler testcase -_- >>> 11 13 5472213148

int main()
{
    ll i, j, k, frm, to, x, y, p;
    char b[2000],a[2000];
    while(cin>>frm>>to>>a){
        int flg=0;

        for(i=0; i<strlen(a); i++){
            if(a[i]>=48 && a[i]<=57){
                if(a[i]-48>=frm){
                    flg=1;
                    break;
                }
            }
            else if(a[i]>=65 && a[i]<=90){
                if(a[i]-55>=frm){
                    flg=1;
                    break;
                }
            }
        }
        if(flg==1)printf("%s is an illegal base %lld number\n",a, frm);
        else{
                //printf("%d\n",des);
                ll des = 0;
                for(i=0; i<strlen(a); i++){
                    if(a[i]>=48 && a[i]<=57){
                        des = des*frm+a[i]-48;
                    }
                    else if(a[i]>=65 && a[i]<=90){
                        des = des*frm+a[i]-55;
                    }
                }

              if(des==0){
                printf("%s base %lld = 0 base %lld\n",a,frm,to);
                continue;
              }


               i=-1;
            while(des>0){

                p=des%to;
                if(p<10)b[++i]=p+48;

                else b[++i]=p+55;

                des/=to;

            }

            b[++i]='\0';

            printf("%s base %lld = ",a,frm);
            for(i=strlen(b)-1; i>=0; i--)printf("%c",b[i]);
            printf(" base %lld\n",to);

        }

    }
    return 0;
}
