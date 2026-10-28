#include <string>
#include "check.h"
#include <iostream>

std::string caesar(const std::string& text, int shift) {
    // TODO
    return "";
}

int main() {
    CHECK(caesar("Hello, World!", 3) == "Khoor, Zruog!");
    CHECK(caesar("xyz", 3) == "abc");
    CHECK(caesar("XYZ", 3) == "ABC");
    CHECK(caesar("abc", -1) == "zab");
    CHECK(caesar("Khoor, Zruog!", -3) == "Hello, World!");
    CHECK(caesar("ABC 123 !?", 0) == "ABC 123 !?");
    CHECK(caesar("Ala ma kota 42.", 100) == caesar("Ala ma kota 42.", 100 % 26));
    CHECK(caesar(caesar("Test 1", 7), -7) == "Test 1");
    return CHECK_RESULT();
}