#ifndef VECTOR_HPP_INCLUDED
#define VECTOR_HPP_INCLUDED
#include <initializer_list>

namespace DDB
{
    inline namespace V1
    {
        class Vector
        {
        public:
            Vector(int sz);
            double& operator[](int i) const;
            [[nodiscard]] int size() const;
            static int validateSize(int);
        private:
            double* elem {};
            int sz {};
        };
    }

    namespace V2
    {
        class Vector
        {
        public:
            Vector(int s) : elem {new double[s]}, sz {s}
            {
                for (int i {}; i != s; ++i)
                {
                    elem[i] = 0;
                }
            }
            Vector(std::initializer_list<double> list);

            // plain *delete* removes an individual object from memory
            // *delete[]* removes an entire array
            ~Vector() { delete[] elem; } // release resources

            double operator[] (int i) const;
            int size() const;
        private:
            double* elem;
            int sz;
        };
    }
}
#endif
