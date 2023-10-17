// https://chat.openai.com/share/e2b314a9-9f1a-45a3-bcbe-da51d1ee07cb

#include <iostream>
#include <functional>

void printSum(int a, int b) {
    std::cout << a + b << std::endl;
}

int main(int argc, char **argv) {

    // bind the first argument of printSum to 5
    auto boundFunction = std::bind(printSum, 5, std::placeholders::_1);

    boundFunction(3); // prints 8, because 5 + 3 = 8

    return 0;
}

