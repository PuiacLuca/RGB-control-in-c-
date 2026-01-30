#include <iostream>
#include<thread>
#include<chrono>
#include<conio.h>

using namespace std;

void setRGB(int r, int g,int b){
cout<<"\033[38;2;"<<r<<";"<<g<<";"<<b<<"m";
}

int main()
{
    char key=' ';
    int r, g, b, c, m;
    c=0;
    r=125;
    g=125;
    b=125;
    m=5;
    while(true){
        this_thread::sleep_for(chrono::milliseconds(25));
        c=c+1;
          setRGB(r, g, b);
          cout<<c<<" Rainbow"<<" r="<<r<<" g="<<g<<" b="<<b<<" mod="<<m<<"     "<<"\r";


        if(_kbhit()){
            key=_getch();
            if(key=='r'){
                r=r+m;
            }
            if(key=='b'){
                b=b+m;
            }
            if(key=='g'){
                g=g+m;
            }
            if (key=='R'){
                r=r-m;
            }
            if (key=='G'){
                g=g-m;
            }
            if (key=='B'){
                b=b-m;
            }
            if(key=='s'||key=='S'){
                cout<<"\033[0m";
                break;
            }
            if (key=='M'){
                m=m-1;
            }else{
            if (key=='m'){
                m=m+1;
            }
            }
        }



         if(r>255){
            r=255;
          }
          if(g>255){
            g=255;
          }
          if(b>255){
            b=255;
          }
          if(r<0){
            r=0;
          }
          if(g<0){
            g=0;
          }
          if(b<0){
            b=0;
          }
          if(m>255){
            m=255;
          }
          if(m<0){
            m=0;
          }




    }
    cout<<"\033[0m";
    return 0;
}
