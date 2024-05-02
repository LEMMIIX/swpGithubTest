#include <iostream>
#include "Student.h"
#include "Professor.h"

int main() {
	Student lennart("Lennart Moeller");
	lennart.setAlter(23);
	lennart.setStudiengang("Medieninformatik");




	Professor ahlf("Henning Ahlf");
	ahlf.setLehrstelle("Wirtschaftsinformatik, insb. Digitales Marketing");








	std::cout << lennart.gibName() << ": " << lennart.gibPosition() << ", " << lennart.gibStudiengang() << std::endl;
	std::cout << ahlf.gibName() << ": " << ahlf.gibPosition() << ", " << ahlf.gibLehrstelle() << std::endl;




	return 0;
}