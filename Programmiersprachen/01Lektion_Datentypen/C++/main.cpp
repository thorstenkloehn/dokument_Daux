#include <iostream>


int main() {

// Ganzezahl
//CPU32
char int8 = 10;
short int16_1;
int int16;
long int32;

std::cout << int8 << std::endl;
unsigned char uint8;
unsigned short uint16;
unsigned int uint16_1;
unsigned long uint32;

//CPU64

char int8_CPU64;
short int16_CPU64;
int int32_CPU64;
long int64_CPU64;

unsigned char uint8_CPU64;
unsigned short uint16_CPU64;
unsigned int uint32_CPU64;
unsigned long uint64_CPU64;

//Kommazahlen

float f32 = 2.40f;
std::cout << f32 << std::endl;
double f64 = 2.40;
std::cout << f64 << std::endl;

//Wahr oder Falsch

bool Antwort = true;
std::cout << Antwort;


return 0;
}