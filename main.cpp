#include <iostream>
#include "including.hpp"
using namespace std;


int main(){
    cout<<"<h2><table border=\"1\">";
        for(int m=2;m<=9;m++)
        {
            int a=1,b=0,x=1,y=0,i=2;
            a=fib(a,b);
            b=a-b;
            x=fib_del(a,m);
            y=fib_del(b,m);
            cout<<"<tr><td>"<<m<<"</td><td>"<<length(a,b,x,y,i,m)<<"</td></tr>";
        }
    cout<<"</table></h2>";



   return 0;
}
