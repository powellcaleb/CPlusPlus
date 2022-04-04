Describe “ownership” as it pertains to C++ memory management.
2.Ownership isn't an actual coding method, but rather a convention that's followed. Pretty much an object will take ownership of a piece of data. This helps to keep track of everything. With this route, the object's destructor is responsible for deletion also (if it's given ownership)

What is the “rule of five”?
6. When a class owns heap data, need to incorporate a custom implementation of the "=" operator, copy constructor, destructor, move constructor, move operator

What is copy elision?
7. When the compiler skips over a copy when returning a variable is out of scope. 

What is the difference between “copying” and “moving” an object
8. Copying works by copying data to another object so that you can modify the copied version without modifying the original. Moving works specifically on temporary variables (rvalues) since their modifiable. This is quicker than the copy method.

When would you need to use a forward declaration?
12. When needing to include to classes that reference each other