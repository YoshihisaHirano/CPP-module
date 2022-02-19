#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria	*inventory[4];
	static int		droppedItemsCount;

	void		copyArr(Character const& other);
	void		dropItem(AMateria *item);

public:
	Character();
	Character(const std::string name);
	Character(Character const& other);
	virtual ~Character();

	Character& operator=(Character const& other);

	virtual std::string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	static void		clearArr(int qty, AMateria *arr[]);
	static void		initArr(int qty, AMateria *arr[]);
	static AMateria	*droppedItems[100];
};

#endif // __CHARACTER_H__