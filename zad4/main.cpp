#include <regex>
#include <string>
#include "check.h"

bool isWindowsPath(const std::string& s) {
    // TODO: użyj std::regex z literałem surowym
    return false;
}

std::string extension(const std::string& path) {
    // TODO
    return "";
}

std::string htmlLink(const std::string& url, const std::string& text) {
    // TODO: użyj R"xyz(...)xyz"
    return "";
}

int main() {
    CHECK(isWindowsPath(R"(C:\Users\ala\plik.txt)"));
    CHECK(isWindowsPath(R"(D:\)"));
    CHECK(!isWindowsPath("/home/ala/plik.txt"));
    CHECK(!isWindowsPath("C:/Users/ala"));
    CHECK(!isWindowsPath("relative\\path"));

    CHECK(extension("archiwum.tar.gz") == ".gz");
    CHECK(extension(R"(C:\dir\plik.txt)") == ".txt");
    CHECK(extension(R"(C:\dir\plik)") == "");
    CHECK(extension("/a.b/c") == "");

    CHECK(htmlLink("https://x.pl", "Strona") == R"(<a href="https://x.pl">Strona</a>)");
    return CHECK_RESULT();
}