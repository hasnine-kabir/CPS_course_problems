#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define revAll(x) sort((x).rbegin(), (x).rend())
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    fastio;

    int x,y; cin >> x >> y;

    if(x>y){
        if(x-y>3){
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    else {
        if(y-x>2){
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    
}