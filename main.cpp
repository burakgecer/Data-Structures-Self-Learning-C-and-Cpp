#include <iostream>
#include "Dynamic Array/Vector.h"
int main(){
    BG::Vector<int> vector;
    vector.push_back(5); //0
    vector.push_back(1); //1
    vector.push_back(4); //2
    vector.push_back(2); //3
    vector.push_back(3); //4
    vector.push_back(20); //5


    vector.insert(6, 100);

    for(int i: vector){
        std::cout<<i<<std::endl;
    }


    


    return 0;
}