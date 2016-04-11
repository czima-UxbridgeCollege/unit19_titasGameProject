/*******************************************
			EVERYTHING HERE IS A WORK
			IN PROGRESS/IN THE
			MIDDLE OF BEING TESTED.
			DON'T FUCKING TOUCH
			ANYTHING IF YOU HAVE
			NO IDEA WHAT YOU'RE DOING

			I know they require fucking 
			setters and getters, leave it be 
			for now!

			These are all basically containers
			hard to fuck it up, but I have 
			faith one of you will manage.
*******************************************/
#ifndef ENTITY_HEADER
#define ENTITY_HEADER

#include <string>

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
*******************************************/
class entity
{
public:
	
			 entity(){};
	virtual ~entity(){};	//Destructor made virtual to ensure the newest possible
							//iteration is always used

protected:

	/*******************************************
		entityIdBox Struct
		used to store: 
		entity id				(int)
		entity name				(string)
		entity type				(string)
		entity description		(string)
		entity isAlive		    (bool)
	*******************************************/
	struct entityIdBox
	{
		int				id;
		std::string		name;
		std::string		type;
		std::string		description;
		bool			isAlive;
	};

private:


}; 
#endif //End of Entity Header