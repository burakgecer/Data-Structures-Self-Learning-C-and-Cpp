#pragma once
namespace BG{
    template<typename T>
    class Vector
    {
    private:
        /* data */
        T* data;
        size_t size = 0;
        size_t capacity = 0;
    public:
        Vector(/* args */);
        ~Vector();
    };

    
}