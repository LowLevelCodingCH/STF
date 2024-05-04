#ifndef STF_H
#define STF_H

#include <iostream>
#include <cstring>
#include <vector>

#define coint const int

namespace stf {
    int convint(char c){
        if(c == '0'){
            return 0;
        }
        else if(c == '1'){
            return 1;
        }
        else if(c == '2'){
            return 2;
        }
        else if(c == '3'){
            return 3;
        }
        else if(c == '4'){
            return 4;
        }
        else if(c == '5'){
            return 5;
        }
        else if(c == '6'){
            return 6;
        }
        else if(c == '7'){
            return 7;
        }
        else if(c == '8'){
            return 8;
        }
        else if(c == '9'){
            return 9;
        }
        else{
            return 9999;
        }
    }
    bool checkd(char c){
        if((int)c >= 48 && (int)c <= 57){
            return true;
        } else{
            return false;
        }
    }

    std::vector<std::string> split(std::string string, char delimiter){
        std::string buffer;
        std::vector<std::string> result;
        for(char c : string){
            if(c == delimiter){
                result.push_back(buffer);
                buffer = "";
            }
            else{
                buffer.push_back(c);
            }
        }
        result.push_back(buffer);
        return result;
    }

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
