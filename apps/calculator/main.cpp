#include <arithmetic.hpp>

#include <print>

auto main() -> int
{
    std::println("1 + 2 = {}", arithmetic::add(1, 2));
    std::println("3 - 2 = {}", arithmetic::sub(3, 2));
    std::println("2 * 3 = {}", arithmetic::mul(2, 3));
    std::println("6 / 3 = {}", arithmetic::div(6, 3));
    return 0;
}
