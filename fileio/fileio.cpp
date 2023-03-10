//Tram Le
//Lab Fileio
//CS23001

#include <iostream>
#include <fstream>


//A function that reads all text up to a space character(' ') 
//while outputting everything up to that space

void readToSpace() {
	std::ifstream file("fileio-text.txt");
	if (!file.is_open()) {
		std::cout << "Unable to open file\n";

	}
	char ch;
	file.get(ch);
	while (!file.eof()) {
		if (ch == ' ') {
			break;
		}
		std::cout << ch;
		
		file.get(ch);
	}
	std::cout << "\n";
	file.close();

} 
 

//A function that reads two numbers(int not bigint) ending in a ';' 
//and adds them together and outputs the result.Note: 
//You only have to read the first two numbers.
void ReadAndSum() {

	std::ifstream file("fileio-data-1.txt");
	if (!file.is_open()) {
		std::cout << "Unable to open file\n";
	}

	int num1 =0, num2=0;
	char semi;
	int sum = 0;
	while (file >> num1 >> semi && file >> num2 >> semi) {
		sum = num1 + num2;
		std::cout << num1 << "; " << num2 << "; " << sum << std::endl;
	//	std::cout << num1 + num2 << std::endl;
	}
	
	file.close();
}

int main() {
	std::cout << "Text and Space: " << std::endl;
	readToSpace(); 
	std::cout << "Digits and Sum: " << std::endl;
	ReadAndSum(); 
	return 0;
}


/*   
//input file stream
std::ifstream file1("fileio-data-1.txt");
std::ifstream file2("fileio-text.txt");

//file1.open("fileio-data1-1.txt");



//check if the file open properly, if not, stop execution
if(!file1.is_open()){
   std::cout << "Unable to open file\n";
  // return from func
}

// way to use couple function to read the file
// Way 1: get(). Whitespace NOT skipped

// ch is pass by reference and filled with SINGLE character
char ch;
//using get() to pull a single character
file1.get(ch);
//Loop over get and use file.eof() (eof==end of file) to know when there's no more to read
while(!file1.eof()){
  std::cout << ch;
  file1.get(ch);
}
//close the file
std::cout << '\n';
file1.close();
file2.close();
return 0;
}
*/


//Look at operator >> and behavior of it:
// 1. To skip the whitespace
// 2. Input as approriate for the type. Overriden by class to achieve desire behavior
//Typical whitespace character are space(''), tab('\t'),new line('\'), carriage return('\r')

/*
char ch;
while(file >> ch){
  std::cout << ch;
}
*/




