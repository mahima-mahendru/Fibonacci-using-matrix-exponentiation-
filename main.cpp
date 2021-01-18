#include<bits/stdc++.h>
# define ll  long long int
# define endl "\n"
using namespace std;
//MATRIX EXPONENTION TO FIND FIBONACCI VALUES IN LOGN
ll f(ll n)
{
    int b[2][2];
    b[0][0]=b[0][1]=b[1][0]=1;
    b[1][1]=0;
    int a[2][2];
    a[1][1]=a[0][0]=1;
    a[0][1]=a[1][0]=0;
    while(n)
    {
        ll t[2][2];
       
        if(n%2)
        {
            t[0][0]=b[0][0]*a[0][0]+b[0][1]*a[1][0];
            t[0][1]=b[0][0]*a[0][1]+b[0][1]*a[1][1];
            t[1][0]=b[1][0]*a[0][0]+b[1][1]*a[1][0];
            t[1][1]=b[1][0]*a[0][1]+b[1][1]*a[1][1];
            a[0][0]=t[0][0];
            a[0][1]=t[0][1];
            a[1][0]=t[1][0];
            a[1][1]=t[1][1];
            n--;
        }
        else{
             t[0][0]=b[0][0]*b[0][0]+b[0][1]*b[1][0];
            t[0][1]=b[0][0]*b[0][1]+b[0][1]*b[1][1];
            t[1][0]=b[1][0]*b[0][0]+b[1][1]*b[1][0];
            t[1][1]=b[1][0]*b[0][1]+b[1][1]*b[1][1];
            b[0][0]=t[0][0];
            b[0][1]=t[0][1];
            b[1][0]=t[1][0];
            b[1][1]=t[1][1];
          n/=2;
        }
    }
    return a[0][0];
}
int main(){
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        
        ll n;
        cin>>n;
        if(n<=1)
        {
            if(n==0)
                cout<<0;
                else
                    cout<<1;
                    cout<<endl;
                    continue;
        }
        ll r=f(n-1);
        cout<<r<<endl;
        
    
    }
   
}
