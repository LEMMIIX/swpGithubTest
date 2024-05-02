#pragma once

#include "SWPMitglied.h"

class Professor : public SWPMitglied {

public:
	Professor(const std::string& name);

	std::string gibLehrstelle() const;

	void setLehrstelle(const std::string& lehrstelle);

private:
	std::string lehrstelle;
};