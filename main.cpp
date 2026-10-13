#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Raymundo Lugardo
// CIS 5 Week 07 · Odd and Even

using namespace std; 

int main() {
  const int N = 20;
  int values[N];

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
      values[i] = rand() % 100;
  }
   
    int evens[N];
    int odds[N];
    int even_count = 0;
    int odd_count = 0;

    
    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << values[i] << "\n";
    }
    
    
    
    for (int i = 0; i < N; ++i) {
        if (values[i] % 2 == 0) {
            evens[even_count] = values[i];
            even_count++;
        } else {
            odds[odd_count] = values[i];
            odd_count++;
        }
    }
    
    cout << "Even:";
    for (int i = 0; i < even_count; ++i) {
        cout << " " << evens[i];
    }
    cout << "\n";

    
    cout << "Odd:";
    for (int i = 0; i < odd_count; ++i) {
        cout << " " << odds[i];
    }
    cout << "\n";
  

  return 0;
}
