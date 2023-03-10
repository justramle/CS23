#include <iostream>

int fib(int n);
int main(){
	
	int n = 0;
	int f = 0;

	std::cout << "Enter a number: \n";
	std::cin >> n;
	std::cout << "Result: ";

	for(int i = 0; i < n; ++i){
		if (i < (n-1)){
		std::cout << fib(i) << ",";
		} else {
		std::cout << ".";	
		}
	}
		
		return 0;
}


//recursive
int fib(int n){
	if(n == 0) return n;
	if(n == 1) return 1;

	return fib(n-1) + fib(n-2);
}
