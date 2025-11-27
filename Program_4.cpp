#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers = {1,2,8,9,12,46,76,82,15,20,30};
    map<int, int> result;

    for (int i = 1; i <= 9; i++) {
        int count = 0;
        for (int num : numbers) {
            if (num % i == 0) count++;
        }
        result[i] = count;
    }

    // Output the result
    for (auto &entry : result) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
