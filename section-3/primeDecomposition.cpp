//自然数Nを素因数分解するプログラムを作成せよ。なお、計算量はO(√N)が望ましい。
# include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    //素数を判定
    for (long long i = 0; i*i <= N; i++) {
        while (N % i == 0) {
            N /= i;
            cout << i << endl;
        }
        if (N < 2) cout << i << endl;
    }
}