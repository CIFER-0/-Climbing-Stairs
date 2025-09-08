#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of steps: ";
    cin >> n;

    if (n <= 2) {
        cout << "Number of distinct ways = " << n << endl;
        return 0;
    }

    int first = 1;   // ways(1)
    int second = 2;  // ways(2)
    int result = 0;

    for (int i = 3; i <= n; i++) {
        result = first + second; // ways(i) = ways(i-1) + ways(i-2)
        first = second;          // تحديث
        second = result;         // تحديث
    }

    cout << "Number of distinct ways = " << result << endl;

    return 0;
}

