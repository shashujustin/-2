#include <iostream>  
#include <cmath> 
  

bool isPrime(int num) {  
    if (num <= 1) { 
        return false;  
    }  
    for (int i = 2; i <= std::sqrt(num); ++i) { 
        if (num % i == 0) { 
            return false;  
        }  
    }  
    return true; 
}  
  

void goldbachConjecture(int evenNumber) {  
    if (evenNumber % 2 != 0 || evenNumber <= 2) {  
        std::cerr << evenNumber << " 小于等于2的数." << std::endl;  
        return;  
    }  
  
    int minPrime1 = evenNumber;
    int minPrime2 = 0;
  
    for (int i = 2; i <= evenNumber / 2; ++i) {  
        if (isPrime(i) && isPrime(evenNumber - i)) {   
            if (i < minPrime1) {   
                minPrime1 = i;  
                minPrime2 = evenNumber - i;
            }  
           
        }  
    }  
  

    std::cout << evenNumber << " = " << minPrime1 << " + " << minPrime2 << " (minimum partition)" << std::endl;  
}  
  
int main() {  
    int evenNumber;  
  
     
    std::cout << "请输入一个大于等于2的数: ";  
    std::cin >> evenNumber;  
  

    goldbachConjecture(evenNumber);  
  
    return 0;  
}
