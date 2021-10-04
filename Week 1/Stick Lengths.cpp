#include <bits/stdc++.h>
using namespace std;
#define inputJunk cin.sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define f first
#define s second
#define debug cout<<"HERE"<<endl;
#define ell "\n"
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
 
const int INF = 0x3f3f3f3f;
const ll MM = 2e5+5, mod = 1e9+7;
 
ll n, arr[MM], ans = 0;
 
int main(){
    inputJunk
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
 
    sort(arr, arr+n);
    ll median = 0;
    if(n%2==1){
        median  = arr[n/2];
        for(int i = 0;i<n;i++){
            ans+=abs(arr[i]-median);
        }
    }else{
        median = arr[n/2] ;
        for(int i = 0;i<n;i++){
            ans+=abs(arr[i]-median);
        }
    }
 
    cout<<ans<<ell;
}
 
