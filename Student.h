#pragma once

#include "SWPMitglied.h"

class Student : public SWPMitglied {

public:
	Student(const std::string& name);

	std::string gibStudiengang() const;

	void setStudiengang(const std::string& studiengang);

private:
	std::string studiengang;
};