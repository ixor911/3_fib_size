#include <iostream>
#include "including.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    cout<<"<table border=\"1\" cellpadding=\"15\">";
    cout<<"<tr><td>M</td><td>L</td></tr>";
    srand(time(NULL));
        for(int m=2;m<=9;m++)
        {
            int a=1,b=0,x=1,y=0,i=2;
            int _0=0,_1=2,_2=0,_3=0,_4=0,_5=0,_6=0,_7=0,_8=0,_9=0;
            a=fib(a,b);
            b=a-b;
            x=fib_del(a,m);
            y=fib_del(b,m);
            cout<<"<tr><td>"<<m<<"</td><td>"<<length(a,b,x,y,i,m)<<"</td>";
            cout<<"<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_0,0)<<"</td><td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_1,1)<<"</td>";
            cout<<"<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_2,2)<<"</td><<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_3,3)<<"</td>";
            cout<<"<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_4,4)<<"</td><<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_5,5)<<"</td>";
            cout<<"<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_6,6)<<"</td><<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_7,7)<<"</td>";
            cout<<"<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_8,8)<<"</td><<td bgcolor=\"rgb("<<rand()%254+1<<","<<rand()%254+1<<","<<rand()%254+1<<")\">"<<chisla(a,b,x,y,m,_9,9)<<"</td>";
        }
    cout<<"</table>";



   return 0;
}
