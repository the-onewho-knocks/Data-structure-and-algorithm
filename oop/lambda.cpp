#include <bits/stdc++.h>
using namespace std;

int main()
{
    double taxRate = 0.08; // 8% tax

    // Your turn! Write the lambda here and capture taxRate
    auto calculateTotal = [taxRate](const auto &price){
        return price + (price * taxRate);

    };

    std::cout << "Total cost of a $100 item: $" << calculateTotal(100.0) << std::endl; // Should print: 108
    std::cout << "Total cost of a $50 item: $" << calculateTotal(50.0) << std::endl;       // Should print: 54

    return 0;
}
// auto isLongEnough = [](const string &password){
//     return password.length() >= 8;
// };

// std::cout << std::boolalpha;
// std::cout << "Is 'pie' long enough? " << isLongEnough("pie") << std::endl;                 // Should print: false
// std::cout << "Is 'supersecret' long enough? " << isLongEnough("supersecret") << std::endl; // Should print: true

// auto isEven = [](const auto &num){
//     return num % 2 == 0;
// };

// std::cout << std::boolalpha;     // Prints true/false instead of 1/0
// std::cout << isEven(4) << std::endl; // Should print: true
// std::cout << isEven(7) << std::endl; // Should print: false

// return 0;
