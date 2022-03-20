1. The setter is missing. [ void set (double position, double velocity); ]

2. First: the "this" statements should be used with arrows or (*) format. Second: There's no no-arg constructor. Third: There's no deconstructor.

Projectile::Projectile ()
{
}

Projectile (int position, int velocity) 
{	this -> position = position;	this -> velocity = velocity;
}

Projectile::~Projectile()
{
}

3. A) method with pointer argument and returns an int pointer. B) method with pointer argument and returns an int pointer that's constant. C) constant method (not change data) with pointer argument and returns an int pointer that's constant D) constant method with constant pointer argument and returns an int pointer that's constant E) constant method with constant pointer argument and returns an int pointer that's constant with left hand argument/data that's also constant

5. Pointers need to be dereferenced while references do not as they're done automatically. References can't be changed what they point to after initialization, but pointers can. References must be initialized after declaration, unlike pointers.

10. Const is to be used when we're passing a pointer or reference. In the given example, neither is passed so const shouldn't be used.
