int fib_del(int a,int m);
long fib(long a,long b);
long length(long a,long b,long x,long y,long i,long m){
    for(;x!=0||y!=1;i++){
        a=fib(a,b);
        b=a-b;
        x=fib_del(a,m);
        y=fib_del(b,m);
    }
    return i;
}
