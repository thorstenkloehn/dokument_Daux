#include <iostream>

int main() {

int variable_name = 100;
int * zeiger = &variable_name;
std::cout << *zeiger << std::endl;


    return 0;
}