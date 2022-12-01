#include "lib.h"

bool Nprimi(int div, int n) {
    if(div==1){
        return true;
    }else if(n%div==0){
        return false;
    }else{
        Nprimi(--div, n);
    }

}
