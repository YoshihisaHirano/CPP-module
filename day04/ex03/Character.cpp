#include "Character.hpp"
#include <iostream>

int	Character::droppedItemsCount = 0;
AMateria*	Character::droppedItems[100] = {NULL};

Character::Character()
{
	name = "some dude";
	Character::initArr(4, inventory);
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string name) : name(name)
{
	Character::initArr(4, inventory);
	std::cout << "Character parameterized constructor called" << std::endl;
}

Character::Character(Character const& other)
{
	name = other.name;
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character()
{
	Character::clearArr(4, inventory);
	std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(Character const& other)
{
	name = other.name;
	copyArr(other);
	std::cout << "Character assignment operator called" << std::endl;
	return *this;
}

std::string const& Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
	{
		Character::dropItem(inventory[idx]);
		inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
	{
		std::cout << name << " ";
		inventory[idx]->use(target);
		delete inventory[idx];
		inventory[idx] = nullptr;
	}
}


void Character::initArr(int qty, AMateria *arr[])
{
	for (int i = 0; i < qty; i++)
	{
		arr[i] = nullptr;
	}
}

void Character::clearArr(int qty, AMateria *arr[])
{
	for (int i = 0; i < qty; i++)
	{
		delete arr[i];
	}
}

void Character::copyArr(Character const& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i]) 
		{
			if (inventory[i])
				delete inventory[i];
			inventory[i] = other.inventory[i]->clone();
		}
		else
			inventory[i] = nullptr;
	}
}

void Character::dropItem(AMateria *item)
{
	if (Character::droppedItemsCount == 99)
	{
		clearArr(100, Character::droppedItems);
		Character::droppedItemsCount = 0;
		initArr(100, Character::droppedItems);
	}
	Character::droppedItems[Character::droppedItemsCount] = item;
}
