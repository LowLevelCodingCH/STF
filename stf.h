#ifndef STF_H
#define STF_H

#include <iostream>
#include <cstring>

#define coint const int

namespace stf {
    template<int C>
    class string {
    public:
        char dat[C];

        // Default constructor
        string() {
            dat[0] = '\0'; // Ensure null-termination
        }

        string(const char* str) {
            std::strncpy(dat, str, C);
            dat[C - 1] = '\0'; // Ensure null-termination
        }
    };

    template<typename T>
    class sstream {
    public:
        T streamdat;

        void out() {
            std::cout << this->streamdat;
        }
        sstream(T data){
            this->streamdat = data;
        }
    };

    template<int L>
    class sout{
        void operator<<(stf::string<L> str){
            std::cout << str.dat;
        }
    };

    template<typename T>
    void out(T data) {
        stf::sstream<T> ss(data);
        ss.out();
    }
}

#endif /* STF_H */
