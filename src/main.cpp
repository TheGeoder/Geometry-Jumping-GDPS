#include <iostream>
#include <string>
#include "utils.hpp"

int main() {
    Utils::printBanner();

    std::cout << "[GDPS] Geometry Jumping GDPS\n";
    std::cout << "[GDPS] Initializing...\n";

    if (!Utils::initialize()) {
        std::cerr << "[ERROR] Initialization failed!\n";
        return 1;
    }

    std::cout << "[GDPS] Initialization successful!\n";
    std::cout << "[GDPS] Ready for server configuration.\n";

    return 0;
}
