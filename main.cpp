#include <iostream>
#define FMT_HEADER_ONLY
#include <fmt/core.h>

int main() {
    std::string s = fmt::format("The answer is {}.", 42);
    std::cout << "Hello, World!" << std::endl;
    std::cout << s;
    return 0;
}
