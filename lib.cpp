#include "lib.h"

bool Nprimi(int i, int n) {
    if(i==1){
        return true;
    }else if(n%i==0){
        return false;
    }else{
        Nprimi(--i, n);
    }

}
