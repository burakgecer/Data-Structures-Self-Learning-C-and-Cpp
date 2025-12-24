#include <iostream>
#include "Vector.h"
int main(){
    BG::Vector<int> vector = {11,22,33};
    std::cout << "Start.." << std::endl;
    for(int i: vector){
        std::cout << "For.." << std::endl;
        std::cout<<i<<std::endl;
    }






    return 0;
}