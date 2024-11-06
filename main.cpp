// tiny_lisp.cpp
#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include "main.h"
int main() {
    std::string input;
    std::getline(std::cin, input);
    Tokens tokens = tokenize(input);
    std::cout << evaluate(tokens) << std::endl;
    return 0;
}
