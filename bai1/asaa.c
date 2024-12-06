#include <iostream>
using namespace std;
bool kt(int x) {
    int sqrt = 1;
    while (sqrt * sqrt <= x) {
        if (sqrt * sqrt == x) {
            return true;
        }
        sqrt++;
    }
    return false;
}

int sum_all_square(int N, int d = 1, int sum = 0) {
    if (d > N) {
        return sum;
    }
    if (N % d == 0 && kt(d)) {
        sum += d;
    }
    return sum_all_square(N, d + 1, sum);
}

int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}
