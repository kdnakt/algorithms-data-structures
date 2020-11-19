#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

int tribo(int N) {
    cout << "tribo(" << N << ") を呼び出しました" << endl;

    if (N == 0) return 0;
    else if (N == 1) return 0;
    else if (N == 2) return 1;

    if (memo[N] != -1) return memo[N];
    int result = tribo(N - 1) + tribo(N - 2) + tribo(N - 3);
    cout << N << " 項目 = " << result << endl;

    return memo[N] = result;
}

int main() {
    memo.assign(20, -1);

    tribo(19);
}