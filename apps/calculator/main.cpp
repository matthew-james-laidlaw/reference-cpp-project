#include <arithmetic.hpp>

#include <format>
#include <iostream>

auto main() -> int
{
    double d = 3.14159;
    int x = d;
    return x;
    // std::cout << std::format("1 + 2 = {}", arithmetic::add(1, 2)) << std::endl;
    // std::cout << std::format("3 - 2 = {}", arithmetic::sub(3, 2)) << std::endl;
    // std::cout << std::format("2 * 3 = {}", arithmetic::mul(2, 3)) << std::endl;
    // std::cout << std::format("6 / 3 = {}", arithmetic::div(6, 3)) << std::endl;
    // return 0;
}
