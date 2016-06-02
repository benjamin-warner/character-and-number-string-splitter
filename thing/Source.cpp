#include <fstream>
#include <string>

int main(){

	std::ifstream origin;
	origin.open("origin.txt");

	std::ofstream suffixes;
	suffixes.open("suffixes.txt");

	std::ofstream numbers;
	numbers.open("numbers.txt");

	std::string line;
	std::string suffix;

	while (origin.peek() != EOF){
		std::getline(origin, line);

		for (int i = 0; i < line.length(); i++){
			if (line[i] > '9'){
				suffix = line.substr(i, line.length());
				suffixes << suffix;

				line.erase(i, line.length());
				break;
			}
		}
		numbers << line << '\n';
		suffixes << '\n';
	}
}
