#include <iostream>
#include "Vector.h"

int main() {
    BG::Vector<int> vector = {1, 2, 3};
    std::cout << "Start.." << std::endl;
    // for(int i: vector){
    //     std::cout << "For.." << std::endl;
    //     std::cout<<i<<std::endl;
    // }
    vector.push_back(4);
    vector.push_back(5);
    vector.push_back(6);
    for (int i: vector) {
        // std::cout << "For.." << std::endl;
        // std::cout<<i<<std::endl;
    }
    std::cout << vector[2] << std::endl;


    return 0;
}
