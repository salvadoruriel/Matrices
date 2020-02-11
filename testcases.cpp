#include <iostream>
#include "salvador_matriz.hpp"

int main(){
salvador::Matriz A(3,3), B(A);
std::cout << A+B;

//test 1 by 1 matrix inverse
salvador::Matriz C(1,1);
C.inversa();//ERROR here, check

return 0;}
