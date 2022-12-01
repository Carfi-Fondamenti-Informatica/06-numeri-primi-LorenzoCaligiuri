#include "lib.h"

bool Nprimi(int n, int div){
    for(int i=n-1; i>=1; i--){
        if((n%div==0) and (div!=n)){
            return false;
        }else if((div=1) and (n%div==0)){
            return true;
        }else{
            Nprimi(n,--div);
        }
    }
}
