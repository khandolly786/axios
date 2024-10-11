#include <iostream>
using namespace std;

bool isHarshad(int num) {
    int sumOfDigits = 0;
    int temp = num;

    // Calculate the sum of digits
    while (temp > 0) {
        sumOfDigits += temp % 10;
        temp /= 10;
    }

    // Check if the number is divisible by the sum of its digits
    return (num % sumOfDigits == 0);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isHarshad(number)) {
        cout << number << " is a Harshad number." << endl;
    } else {
        cout << number << " is not a Harshad number." << endl;
    }

    return 0;
}
