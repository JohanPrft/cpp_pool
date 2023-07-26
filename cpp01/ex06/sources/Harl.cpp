#include "../includes/Harl.hpp"


Harl::Harl() {
}

Harl::~Harl() {

}

void Harl::complain(std::string level){
	std::string	levelList = "DEBUG,INFO,WARNING,ERROR";
	void (Harl::*ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	switch (levelList.find(level))
	{
		case (0):
			(this->*ptr[0])();
			(this->*ptr[1])();
			(this->*ptr[2])();
			(this->*ptr[3])();
			break;
		case (6):
			(this->*ptr[1])();
			(this->*ptr[2])();
			(this->*ptr[3])();
			break;
		case (11):
			(this->*ptr[2])();
			(this->*ptr[3])();
			break;
		case (19):
			(this->*ptr[3])();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			break;
	}
}

void Harl::_debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}
void Harl::_info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void Harl::_warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::_error(void){
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
