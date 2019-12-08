#include "including.hpp"
long chisla(long a,long b,long x,long y,long m,int chislo,int num){
    for(;x!=0||y!=1;){
        a=fib(a,b);
        b=a-b;
        x=fib_del(a,m);
        y=fib_del(b,m);
        chislo=schet_chisla(x,chislo,num);
    }
    return chislo;
}
