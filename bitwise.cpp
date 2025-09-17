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

    int a,b; cin >> a >> b;

    cout << (a|b) << endl;   //why braces? because operator precedence
    cout << (a^b) << endl;   //same same == 0
    cout << (a&b) << endl;


    cout << (~a) << endl; //flips each bit but ans is -6 for a=5 because of 2's complement
                          // 32 bit system, all 0 gets flipped to 1



    //shift operators                   
    cout << (a << 4) << endl; //left shift, multiply by 2^4 ,
    cout << (a >> 4) << endl; //right shift, divide by 2^4 , these only work fot 2's power
    // left and right shift can only mimic multiply and divide by 2's power

    
                              

    return 0;
}