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

    int first = 1;   //اول رقم في المعادله 
    int second = 2;  // تاني رقم في المعادله
    int result = 0;

    for (int i = 3; i <= n; i++) {
        result = first + second; //دي المعادله الي هنسخدمها عشان نجيب عدد الطرق بعد كده 
        first = second;          
        second = result;         
    }

    cout << "Number of distinct ways = " << result << endl;

    return 0;
}


