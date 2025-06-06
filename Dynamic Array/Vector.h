#pragma once
#include <iostream>
#include "stddef.h"
namespace BG{
    template<typename T>
    class Vector
    {
    private:
        /* data */
        T* _data = nullptr;
        size_t _size = 0;
        size_t _capacity = 0;
    public:
        Vector()
        :_size(0), _capacity(2){
            _data = new T[_capacity];
            std::cout << "Empty constructor called." << std::endl;
        };
        // TO DO:
        // Do dynamic alloc. here ->
        Vector(int size, T item)
        : _size (size), _capacity(10)
        {
            if(size < _capacity){
                _data = new T[_capacity];
                for(int i=0; i<size; i++){
                    _data[i] = item;
                }
            }

        }
        ~Vector(){
            delete _data;
        };

        T* begin() {return _data;}
        T* end() {return _data + _size;}
        const T* begin() const {return _data;}
        const T* end() const {return _data + _size;}
        int size() const {return _size;}
        int capacity() const {return _capacity;}
        bool empty() const {return _size == 0;}
        T& at(int index) const {
            if(index < 0 || static_cast<size_t>(index) >= _size){ // Safer C++ usage of (size_t)index
                throw std::out_of_range("Index out of range.");
            }
            return _data[index];
        }
        void push_back(T item){
            if(_size >= _capacity){
                T *new_data = new T[_capacity * 2]; //Increase capacity times 2 if you don't have free slot.
                for(int i=0; i<_size; i++){
                    new_data[i] = _data[i];
                }
                delete[] _data;
                _data = new_data;
                _capacity *= 2;
                _data[_size] = item;
                _size++;
            }
            else{
                _data[_size] = item;
                _size++;
            }
        }
    };

    
}