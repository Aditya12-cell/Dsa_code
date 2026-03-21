// Majority Element using Moore's Voting Algorithm
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 1, 2,2,3,5};
    int n = 6;

    int ans = arr[0];
    int freq = 1;

    // Step 1: Find candidate
    for (int i = 1; i < n; i++) {
        if (arr[i] == ans) {
            freq++;
        } else {
            freq--;
            if (freq == 0) {
                ans = arr[i];
                freq = 1;
            };
        }
    }

    // Step 2: Verify candidate (optional)
    freq = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == ans) {
            freq++;
        }
    }

    if (freq > n / 2) {
        cout << "Majority Element: " << ans << endl;
    } else {
        cout << "No Majority Element" << endl;
    }

    return 0;
}
