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
string a, b, c, d;
int main()
{
    ll t, n, i, j, k;
    char ch;
    while(cin>>n>>t>>ch){

        getchar();
        getline(cin, b);
        getline(cin, c);
        getline(cin, d);
        //cout<<b<<endl<<c<<endl<<d<<endl;
        for(i=1; i<c.size(); i++){
            if(i%2==1)a+=c[i];
        }
        //cout<<a<<endl;
        ll sft = t%n;

        cout<<b<<endl;

        if(sft==0){
            cout<<"|";
            for(i=0; i<a.size(); i++){
                cout<<a[i]<<"|";
            }
            cout<<endl;
        }
        else{
            if(ch=='R'){
                cout<<"|";
                for(i=a.size()-sft; i<a.size(); i++){
                    cout<<a[i]<<"|";
                }

                for(i=0; i<=a.size()-sft-1; i++){
                    cout<<a[i]<<"|";
                }
                cout<<endl;
            }

            else{
                cout<<"|";
                for(i=sft; i<a.size(); i++){
                    cout<<a[i]<<"|";
                }
                 for(i=0; i<sft; i++){
                    cout<<a[i]<<"|";
                }
                cout<<endl;
            }
        }
        cout<<d<<endl;
        a.clear();
    }
    return 0;
}

