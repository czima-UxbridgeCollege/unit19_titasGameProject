#ifndef ENTITY_HEADER
#define ENTITY_HEADER

#include <string>
#include <iostream>

/* NOT USED FOR THE TIME BEING, WAS TESTING STUFF */

//class entityMgr; //forward declaration of an entity manager which will
				   //be used to manage all "entity" objects. This FD allows
				   //entityMgr to be aware of entity.

/* NOT USED FOR THE TIME BEING, WAS TESTING STUFF */

/*******************************************
Basic "Entity" abstract class, used to create
all other objects, such as "rooms" and "items"
In addition to basic const/dest, it contains
a struct "entityIdBox" containing:
id, name, type, description, isalive.
						-Jacek
*******************************************/
class entity
{
public:
	
			 entity();
	virtual ~entity();	//Destructor made virtual to ensure the newest possible
							//version is always used
							//a virtual destructor has to be declared with each iteration
							//otherwise stuff breaks

	void setId(int id);		//unique ID so the map library can be added and utilised, should time permit.
	void setName(std::string name);
	void setType(std::string type);
	void setDescription(std::string description);
	void setAlive(bool isAlive);

	int getId();
	std::string getName();
	std::string getType();
	std::string getDescription();
	bool getAlive();
	
	//void setEntityIdBox(entityIdBox entityBoxTest) 
	//					std::string description, bool isAlive) {};
	//entityIdBox getEntityIdBox(){};
	//testing ^ dont touch
protected:

	int id; 
	std::string name;
	std::string type;
	std::string description;
	bool isAlive;

	/*******************************************
		entityIdBox Struct
		used to store: 
		entity id				(int)
		entity name				(string)
		entity type				(string)
		entity description		(string)
		entity isAlive		    (bool)
	*******************************************
	struct entityIdBox
	{
		int				id;
		std::string		name;
		std::string		type;
		std::string		description;
		bool			isAlive;
	} entityBoxTest;
	*/
private:


}; 
#endif //End of Entity Header