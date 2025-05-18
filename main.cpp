#include <iostream>
#include "Dynamic Array/Vector.h"
int main(){
    BG::Vector<int> vector(5,9);
    for(int i: vector){
        std::cout<<i<<std::endl;
    }
    vector.size();



    return 0;
}