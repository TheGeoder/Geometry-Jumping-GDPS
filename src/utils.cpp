#include "utils.hpp"

#include <algorithm>
#include <cctype>
#include <string>

namespace Utils {

    std::string trim(const std::string& text) {
        auto start = std::find_if_not(
            text.begin(),
            text.end(),
            [](unsigned char c) {
                return std::isspace(c);
            }
        );

        auto end = std::find_if_not(
            text.rbegin(),
            text.rend(),
            [](unsigned char c) {
                return std::isspace(c);
            }
        ).base();

        if (start >= end) {
            return "";
        }

        return std::string(start, end);
    }

}
