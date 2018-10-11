#include <iostream>

int main(int argc, const char* argv[])
{
    std::cout << "Hello, world!" << std::endl;
    if (argc > 1) {
        std::cout << "Yey!" << std::endl;
    }
    else {
        std::cout << "Nay!" << std::endl;
    }
    return 0;
}
