#include "Student.h"

Student::Student(const std::string& name)
	: SWPMitglied(name, 0, "Student")
{
}

std::string Student::gibStudiengang() const {
	return studiengang;
}

void Student::setStudiengang(const std::string& studiengang) {
	this->studiengang = studiengang;
}

