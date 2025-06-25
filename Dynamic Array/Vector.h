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
        size_t size() const {return _size;}
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
        void pop_back(){
            _size--;
        }
        const T& front()const {
            return _data[0];
        }
        const T& back()const {
            return _data[_size-1];
        }
        // Inserts a copy of value before pos.
        void insert(int pos, const T& item){
            if(pos > _size || pos < 0){
                throw std::out_of_range("Index out of range.");
                exit(0);
            }
            if(pos == _size){

            }
            //_size += 1;
            for(int i = _size; i >= pos; i--){
                _data[i] = _data[i - 1];
            }
            _data[pos] = item;
            _size += 1;
        }
        void clear(){
            _size = 0;
        }
        void erase(int pos){
            if(pos >= _size || pos < 0){
                throw std::out_of_range("Index out of range.");
                exit(0);
            }
            for(int i = pos; i<_size; i++){
                _data[i] = std::move(_data[i+1]); // move = transfer resources.
            }
            _size -= 1;    
        }
    };

    
}