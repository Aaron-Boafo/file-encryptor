#pragma once
#include <string>

namespace utils {
    class Encrypto {
        public:
            virtual void error( const std::string & errorMessage );
            virtual std::string toLowerCase(const std::string &text);
            virtual std::string toUpperCase(const std::string &text);
    };
}