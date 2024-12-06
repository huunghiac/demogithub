/*#include <iostream>
using namespace std;

// Hàm đếm số cách đặt 2 con mã không ăn nhau trên bàn cờ k x k
void count_knight_placements(int n) {
    for (int k = 1; k <= n; ++k) {
        // Tổng số cách đặt 2 con mã
        long long total_positions = (k * k) * (k * k - 1) / 2;

        // Số cặp mã có thể ăn nhau (chỉ tính khi k >= 3)
        long long attack_positions = 0;
        if (k > 2) {
            attack_positions = 4 * (k - 1) * (k - 2);
        }

        // Số cách đặt 2 con mã không ăn nhau
        long long safe_positions = total_positions - attack_positions;

        // In kết quả
        cout << safe_positions << endl;
    }
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    count_knight_placements(n);

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
bool can(int r1, int c1, int r2, int c2) {
    int dr = abs(r1 - r2);
    int dc = abs(c1 - c2);
    return (dr == 2 && dc == 1) || (dr == 1 && dc == 2);
}
int count(int k) {
    int d = 0;
    for (int r1 = 0; r1 < k; ++r1) {
        for (int c1 = 0; c1 < k; ++c1) {
            for (int r2 = 0; r2 < k; ++r2) {
                for (int c2 = 0; c2 < k; ++c2) {
                    if ((r1 != r2 || c1 != c2) && !can(r1, c1, r2, c2)) {
                        ++d;
                    }
                }
            }
        }
    }
    return d / 2;
}

int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; ++k) {
        cout << count(k) << endl;
    }
    return 0;
}
