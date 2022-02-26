#ifndef __KAREN_H__
#define __KAREN_H__
#include <string>

class Karen
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	Karen();
	~Karen();
	void	complain( std::string level );
};

typedef void(Karen::*karenFunc)(void);

#endif