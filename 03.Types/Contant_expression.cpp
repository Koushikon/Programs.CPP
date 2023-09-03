#include <iostream>

consteval int fun(int n = 6) {
    int num{ n };
    num++;
    return num;
}

int main() {
    constexpr int n{ 16 };
    constexpr int result = fun(n);
    std::cout << result << "\n";
    return 0;
}