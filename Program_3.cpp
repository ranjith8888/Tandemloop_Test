#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int count = (a % 2 == 0) ? a - 1 : a;

    int num = 1;
    for (int i = 0; i < count; i++) {
        cout << num;
        if (i < count - 1) cout << ", ";
        num += 2;
    }

    return 0;
}
