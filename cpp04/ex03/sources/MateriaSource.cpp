#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < _tabSize; ++i)
	{
		_materia[i] = NULL;
	}
	_count = 0;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	for (int i = 0; i < _tabSize; ++i)
	{
		_materia[i] = src._materia[i];
	}
	_count = src._count;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &cpy) {
	if (this != &cpy)
	{
		_count = cpy._count;
		_deleteMateriaTab();
		for (int i = 0; i < _tabSize; ++i)
		{
			_materia[i] = cpy._materia[i];
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	_deleteMateriaTab();
}

void	MateriaSource::_deleteMateriaTab() {
	for (int i = 0; i < _tabSize; ++i)
	{
		if(_materia[i] != NULL)
			delete _materia[i];
	}
}

void		MateriaSource::learnMateria(AMateria* m) {
	if (!m)
	{
		std::cout << ": Can't learn something that doesn't exist!" << std::endl;
		return ;
	}
	if (_count < _tabSize)
	{
		_materia[_count] = m;
		_count++;
		std::cout << "Learned " << m->getType() << " materia!" << std::endl;
	}
	else
		std::cout << "Materia source is full!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _tabSize; ++i)
	{
		if (_materia[i] != NULL && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (NULL);
}