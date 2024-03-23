#include <iostream>
#include <iterator>
#include <regex>
#include <string>

int main() {
    std::string const text = "Quick brown fox";
    std::string output;
    std::regex const space(R"(\s)");
    std::regex_replace(std::back_inserter(output), text.begin(), text.end(), space, "\t");
    std::cout << '\n' << output << '\n';
}
