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
        :_size(0), _capacity(10){
            _data = new T[_capacity];
        };
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
    };

    
}