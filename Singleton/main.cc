#include "singleton.h"

int main() {
 Singleton::GetInstance().LOG();
 Singleton::GetInstance().LOG();
 // output: 
 // This pointer: 0x560f49002139
 // This pointer: 0x560f49002139
}
