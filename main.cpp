#include <utils.hpp>
#include <fmt/format.h>
#include <fstream>


int main(int argc, char* argv[]) {
    utils::Encrypto encrypto;
    
    if (argc <= 1){
        encrypto.error(fmt::format("encrypto <init> <default | password>"));
        return 1;
    }

    std::string init = argv[1];
    std::string key = "key.txt";

    if(encrypto.toLowerCase(init) == "init"){
        std::ofstream file(key);
        
        if (file.is_open()){
           file<<"long int key for the codes"; 
        }
        file.close();
    }
    

    return 0;
}