#include "utils.hpp"
#include <fmt/base.h>

namespace utils {
    void myName(std::string name){
        fmt::print("My name is {}",name);
    }
}