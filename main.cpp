#include <iostream>
#include <string>


std::string char_to_string(char ch) {
	switch (ch) {
		case  '0':
			return "ZERO";
		case  '1':
			return "ONE";
		case  '2':
			return "TWO";
		case  '3':
			return "THREE";
		case  '4':
			return "FOUR";
		case  '5':
			return "FIVE";
		case  '6':
			return "SIX";
		case  '7':
			return "SEVEN";
		case  '8':
			return "EIGHT";
		case  '9':
			return "NINE";
		default:
			return "UNKNOWN";
	}
}

int main(int argc, char** argv) {
	char ch0, ch1, ch2, ch3;
	
	std::cout << "Enter a four digit number.\n";
	
	std::cin.get(ch0);
	std::cin.get(ch1);
	std::cin.get(ch2);
	std::cin.get(ch3);
	
	std::cout << char_to_string(ch0) << " ";
	std::cout << char_to_string(ch1) << " ";
	std::cout << char_to_string(ch2) << " ";
	std::cout << char_to_string(ch3) << "\n";
	
	return 0;
}
