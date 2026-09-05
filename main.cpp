#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> dp(N + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= N; ++i) {
        for (int heads = 1; heads <= min(7, i); ++heads) {
            dp[i] = max(dp[i], dp[i - heads] * heads);
        }
    }

    cout << dp[N] << '\n';
    return 0;
}
