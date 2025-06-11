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

    std::cout<<"First data is: " << vector.front() << std::endl;
    std::cout<<"Last data is: " << vector.back() << std::endl;




    return 0;
}