#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <functional>
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()

#define MOD_DEFINE const int MOD = 1e9 + 7;
#define And &&
#define Or ||
#define endl '\n'
#define space " "
#define int long long
#define vi vector<int>
#define pb(n) push_back(n)
#define mii map<int, int>
#define test_cases_loop int t; cin >> t; while(t--)
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(var, initial, final) for(int var=initial; var < final; var++)
using namespace std;
int32_t main(){
    FIO
    test_cases_loop{
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int k;
        cin >> k;
        int req = abs(c-a) + abs(d-b);
        if((req - k)%2==0 And k>=req)cout << "YES" << endl;
        else{cout << "NO" << endl;}
    }
}

