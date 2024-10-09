#ifndef HEADER_H
#define HEADER_H
#include <string>
#include <iostream>

template <typename T>
void piš(T t) 
{
    std::cout << t << std::endl ;
}

template<typename T, typename... Args>
void piš(T t, Args... args) // recursive variadic function
{
    std::cout << t <<std::endl ;

    piš(args...) ;
}
std::string prevod(int c, int k);

#endif
