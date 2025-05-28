#include <iostream>
#include "Dynamic Array/Vector.h"
int main(){
    BG::Vector<int> vector;
    vector.push_back(31); //0
    vector.push_back(32); //1
    vector.push_back(33); //2
    vector.push_back(34); //3
    vector.push_back(35); //4
    vector.push_back(36); //5
    // for(int i: vector){
    //     std::cout<<i<<std::endl;
    // }
    std::cout << vector.at(5) << std::endl;




    return 0;
}