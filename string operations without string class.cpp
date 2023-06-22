#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";

    // Length of the string
    std::cout << "Length of the string: " << str.length() << std::endl;

    // Accessing individual characters
    std::cout << "First character: " << str[0] << std::endl;
    std::cout << "Last character: " << str.back() << std::endl;

    // Substring
    std::string substring = str.substr(7, 5);
    std::cout << "Substring: " << substring << std::endl;

    // Concatenation
    std::string anotherStr = " Welcome!";
    std::string concatenatedStr = str + anotherStr;
    std::cout << "Concatenated string: " << concatenatedStr << std::endl;

    return 0;
}

