#include <iostream>

int main() {
    using namespace std;

    int n;
    cin >> n;

    bool *sieve = new bool[n] ;
    for (int i = 2; i <= n; i++)
        sieve[i] = true;

    for (int i = 2; i * i <= n; i += 1)
        if (sieve[i]) // a number hasn't been discarded yet
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false; // composite

    for (int i = 2; i <= n; i++)
        if (sieve[i])
            cout << i << '\n';
    cout << '\n';

    return 0;
}
