#include <cstddef>
#include <string_view>
#include "check.h"

std::size_t countBytes(std::u8string_view text) {
    return text.size();
}

std::size_t countCodePoints(std::u8string_view text) {
    // TODO
    return 0;
}

int main() {
    CHECK(countCodePoints(u8"") == 0);
    CHECK(countCodePoints(u8"abc") == 3);
    CHECK(countCodePoints(u8"Zażółć") == 6);
    CHECK(countCodePoints(u8"gęślą jaźń") == 10);
    CHECK(countCodePoints(u8"∭") == 1);
    CHECK(countBytes(u8"∭") == 3);
    
    return CHECK_RESULT();
}