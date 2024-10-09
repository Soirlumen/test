#include "header.h"

std::string prevod(int c, int k){
    std::string výsledek;
    std::string h;
    while(c>0){
        h= std::to_string(c%k);
        výsledek.append(h);
        c/=k;
    }
    piš(výsledek,1);
    std::string d;
    for(int i=výsledek.size();i>0;i--){

        char &pom = výsledek.back();
        d.append(1,pom);
        výsledek.pop_back();
    } 
    
    return d;
}