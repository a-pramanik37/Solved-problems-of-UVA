//-_-
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
string m, d;
int main()
{
    int t, i, j , k, days, st, cnt;
    scanf("%d", &t);
    while(t--){
        cin>>m>>d;
        cnt=0;
        if(m=="JAN"||m=="MAR"||m=="MAY"||m=="JUL"||m=="AUG"||m=="OCT"||m=="DEC")days=31;
        else if(m=="FEB")days=28;
        else days = 30;

        if(d=="FRI")st=1;
        else if(d=="SAT"){
            st=7;
            cnt=1;
        }
        else if(d=="SUN")st=6;
        else if(d=="MON")st=5;
        else if(d=="TUE")st=4;
        else if(d=="WED")st=3;
        else if(d=="THU")st=2;

        for(i=st; i<=days; i+=7){
            if(i+1<=days)cnt+=2;
            else cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
