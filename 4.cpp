#include <iostream>  
#include <stdio.h>
  
int fibonacci(int n) {  
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}  
  
int main() {  
    int T; // 测试数据组数  
    std::cin >> T;  
      
    while (T--) {  
        int alpha; // 正整数α  
        std::cin >> alpha;  
          
        std::cout << fibonacci(alpha) << std::endl; // 输出第α个斐波那契数  
    }  
      
    return 0;  
}
