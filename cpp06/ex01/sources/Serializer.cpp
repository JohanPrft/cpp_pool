	#include "../includes/Serializer.hpp"


Serializer::Serializer() {

}

Serializer::Serializer(const Serializer &src) {
	(void)src;
}

Serializer &Serializer::operator=(const Serializer &cpy) {
	(void)cpy;
	return (*this);
}

Serializer::~Serializer() {

}


uintptr_t Serializer::serialize(Data* ptr){
	std::cout << "serialize..." << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
	std::cout << "deserialize..." << std::endl;
	return (reinterpret_cast<Data *>(raw));
}
