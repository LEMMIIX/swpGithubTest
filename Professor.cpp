#include "Professor.h"

Professor::Professor(const std::string& name)
	: SWPMitglied(name, 0 , "Professor")
{
}

std::string Professor::gibLehrstelle() const {
	return lehrstelle;
}

void Professor::setLehrstelle(const std::string& lehrstelle) {
	this->lehrstelle = lehrstelle;
}