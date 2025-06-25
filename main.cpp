#include <iostream>
#include "Dynamic Array/Vector.h"
int main(){
    BG::Vector<int> vector;
    vector.push_back(5); //0
    vector.push_back(10); //1
    vector.push_back(15); //2
    vector.push_back(20); //3
    vector.push_back(30); //4
    vector.push_back(40); //5

    vector.erase(5);
    for(int i: vector){
        std::cout<<i<<std::endl;
    }



    


    return 0;
}