#include <iostream>

int main() {

   unsigned char antwort = 3;
   switch (antwort) {
       case 1: std::cout << "1";
       break;
       case 2: std::cout <<"2";
       break;
       default: std::cout <<"3";
   }

}