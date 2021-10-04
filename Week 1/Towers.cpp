#include <bits/stdc++.h>
using namespace std;
#define inputJunk ios_base::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define f first
#define s second
#define debug cout<<"HERE"<<endl;
#define ell "\n"
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
 
const ull INF = 0x3f3f3f3f;
const int MM = 2e5+5, mod = 1e9+7;
 
int n; vector<int> x;
 
int main(){
    inputJunk
    
    cin>>n;
    for(int i = 0;i<n;i++){
        int z; cin>>z;
        int lo = 0, hi = x.size();
        while (lo<hi) {
            int mid = (lo+hi)/2;
            if (x[mid]>z) hi=mid;
            else lo=mid+1;
        }
        if (lo==x.size()) x.pb(z);
        else x[lo] = z;
    }
    cout<<x.size()<<ell;
 
}
 
