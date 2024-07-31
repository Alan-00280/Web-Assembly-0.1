#include <iostream>
#include <emscripten.h>

extern "C"{

EMSCRIPTEN_KEEPALIVE
int circle_area(int r){
    return 3.14*r*r;
}

EMSCRIPTEN_KEEPALIVE
int circle_circum(int r){
    return 3.14*2*r;
}

EMSCRIPTEN_KEEPALIVE
int square_area(int a){
    return a*a;
}

EMSCRIPTEN_KEEPALIVE
int square_circum(int b){
    return 4*b;
}
EMSCRIPTEN_KEEPALIVE
int main(){
    std::cout << "Welcome to the console\n";
    return 0;
}
}
