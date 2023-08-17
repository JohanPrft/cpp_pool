#ifndef CPP_POOL_MATERIASOURCE_HPP
# define CPP_POOL_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{

private:
	static int const	_tabSize = 4;
	AMateria			*_materia[_tabSize];
	int					_count;
	void				_deleteMateriaTab();

public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	MateriaSource &operator=(const MateriaSource &cpy);
	~MateriaSource();

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};


#endif
