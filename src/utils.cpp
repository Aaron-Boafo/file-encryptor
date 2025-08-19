#include "utils.hpp"
#include <fmt/printf.h>

namespace utils {
    void Encrypto::error( const std::string & errorMessage ){
        fmt::print("{}\n",errorMessage);
    }

    std::string Encrypto::toLowerCase(const std::string &  text){
        std::string input = text;
        std::transform(input.begin(),input.end(),input.begin(),[](unsigned char c){return std::tolower(c);});

        return input;
    }

    std::string Encrypto::toUpperCase(const std::string &  text){
        std::string input = text;
        std::transform(input.begin(),input.end(),input.begin(),[](unsigned char c){return std::toupper(c);});

        return input;
    }
}