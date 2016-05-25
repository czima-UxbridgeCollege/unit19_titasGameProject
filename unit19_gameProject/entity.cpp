#include "entity.h"

/*******************************************
Basic "Entity" abstract class, used to create
all other objects, such as "rooms" and "items"
In addition to basic const/dest, it contains
a struct "entityIdBox" containing:
id, name, type, description, isalive.
-Jacek
*******************************************/

/*******************************************
		Constructor/Destructor
*******************************************/
entity::entity()
{

}

entity::~entity()
{

}

/*******************************************
			Setters/Getters
*******************************************/

void entity::setId(int identifier) {  };