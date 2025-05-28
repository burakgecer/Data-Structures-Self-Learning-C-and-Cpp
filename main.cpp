#include <iostream>
#include "Dynamic Array/Vector.h"
int main(){
    BG::Vector<int> vector;
    vector.push_back(31);
    vector.push_back(32);
    vector.push_back(33);
    vector.push_back(34);
    vector.push_back(35);
    vector.push_back(36);
    for(int i: vector){
        std::cout<<i<<std::endl;
    }



    return 0;
}