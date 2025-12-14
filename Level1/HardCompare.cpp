#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long double check1 = (long double)b * log((long double)a);
    long double check2 = (long double)d * log((long double)c);

    if (check1 > check2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
