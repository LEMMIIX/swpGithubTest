#include "SWPMitglied.h"

SWPMitglied::SWPMitglied(const std::string& name, const std::int16_t alter, const std::string& position)
	: name(name), alter(alter), position(position)
{
}

std::string SWPMitglied::gibName() const {
	return name;
}

std::int16_t SWPMitglied::gibAlter() const {
	return alter;
}

std::string SWPMitglied::gibPosition() const {
	return position;
}

void SWPMitglied::setName(const std::string& name) {
	this->name = name;
}

void SWPMitglied::setAlter(const std::int16_t alter) {
	this->alter = alter;
}

void SWPMitglied::setPosition(const std::string& position) {
	this->position = position;
}