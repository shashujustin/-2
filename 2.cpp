#include <iostream>  
#include <vector>  
#include <algorithm> // °üº¬std::sortº¯Êı  
  
int main() {  
    int N;  
    std::cin >> N; 
    std::vector<int> numbers(N);  
  
    for (int i = 0; i < N; ++i) {  
        std::cin >> numbers[i]; 
    }  
  
    std::sort(numbers.begin(), numbers.end()); 
  
    for (int i = 0; i < N; ++i) {  
        if (i > 0) std::cout << " "; 
        std::cout << numbers[i]; 
    }  
    std::cout << std::endl; 
  
    return 0;  
}
