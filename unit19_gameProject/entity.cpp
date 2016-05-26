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

void entity::setId(int identifier) { id = identifier; } //unique ID so the map library can be added and utilised, should time permit.
void entity::setName(std::string entityName) { name = entityName; }
void entity::setType(std::string entityType) { type = entityType; }
void entity::setDescription(std::string entityDescription) { description = entityDescription; }
void entity::setAlive(bool alive) { isAlive = alive; }

int entity::getId() { return id; }
std::string entity::getName() { return name; }
std::string entity::getType() { return type; }
std::string entity::getDescription() { return description; }
bool entity::getAlive() { return isAlive; }