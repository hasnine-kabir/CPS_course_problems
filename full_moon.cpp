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

    int N,M,P,count=0; cin >> N >> M >> P;

    for(int i=M; i<=N; i+=P) count++;

    cout << count << endl;

    return 0;
}