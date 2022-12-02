#include "lib.h"

bool Nprimi(int div, int n) {
    int ris=n%div;
    if(ris==0 and div!=1){
        return false;
    }else if(ris==0 and div==1){
        return true;
    }else if(ris!=0 and div!=1){
        Nprimi(--div, n);
    }

}
