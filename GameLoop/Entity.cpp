#include "Entity.h"
#include <math.h>

// <FEEDBACK> using namespace std in a cpp file is not as bad as using it in a header (see comment for Vector.h),
// but it's better NOT to do it in any case.
using namespace std;

Entity::Entity()
{


}


Entity::~Entity()
{

}

void Entity::draw()
{
	window->draw(sprite);
}

void Entity::move()
{

}