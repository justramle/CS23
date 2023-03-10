#include "object_Constructor.hpp";
void copyTest(Object test){}

int main(){
	Object one(); // test default constructor
	Object two();
	
	one = two; //test assignment
	two = one;
	
	copyTest(one);
	copyTest(one);
	
	return 0;
}
