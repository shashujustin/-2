#include <iostream>  
#include <stdio.h>
  
int fibonacci(int n) {  
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}  
  
int main() {  
    int T; // ������������  
    std::cin >> T;  
      
    while (T--) {  
        int alpha; // ��������  
        std::cin >> alpha;  
          
        std::cout << fibonacci(alpha) << std::endl; // ����ڦ���쳲�������  
    }  
      
    return 0;  
}
