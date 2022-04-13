#include "singleton.h"
#include "iostream"

Singleton& Singleton::GetInstance() {
  static Singleton instance_;
  return instance_;
}

void Singleton::LOG() {
  std::cout << "This pointer: " << this << std::endl;
}
