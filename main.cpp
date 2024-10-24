#include <iostream>
#include "FuncA.h"

int main(){
	FuncA function;
	double x;
  

    std::cout << "Введіть значення x: ";
    std::cin >> x;


    std::cout<<"Result: " << function.count(x) <<"\n";

    return 0;

}
