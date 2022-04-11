2. When you want the subclass to overwrite the identified method. Don't mark a method as virtual if you don't want it to be overwritten.

4. When casting objects using dynamic casting, it checks if the casting is legal. Static cast kinda like force casts objects, in that it only checks at the runtime, so if the cast is forced and not compatible then the outcome can be unpredictable.

6. The first one creates a copy of the Fruit class object. Any changes made in the function won't be reflected in the object. The second one doesn't create a copy, but rather a reference. Again it's not modifiable due to the 'const' but it's methods inside the object can though

9. There's no need for the 'new', can remove it. Need to be on the stack.

throw Exception ("Help me, Spock");

10. Need to use reference in the catch clause

try 
{
	//some code
}
catch (Exception& e) 
{
	std::cerr << "Error occurred: " << e.what() << std:endl;
}