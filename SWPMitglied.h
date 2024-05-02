#pragma once

#include <string>

class SWPMitglied {
public:
	SWPMitglied(const std::string& name, const std::int16_t alter = 0, const std::string& position = "");

	std::string gibName() const;
	std::int16_t gibAlter() const;
	std::string gibPosition() const;

	void setName(const std::string& name);
	void setAlter(const std::int16_t alter);
	void setPosition(const std::string& position);

private:
	std::string name;
	std::int16_t alter;
	std::string position;


};