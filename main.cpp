#include "Finder.h"
#include <iostream>

int main(){
    Finder a;

    std::vector<int> result = a.findSubstrings("4634554567", "45689");

    for(int i = 0; i < 5; i++){
        std::cout << result[i] << " ";
    };
    std::cout << "\n";

    return 0;
}