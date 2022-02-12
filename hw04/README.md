1. In Java, arrays are objects. So it tracks its size and make sure called indexes exists. C++ however is just chunk of allocated memory. It doesn't track size nor validate indexes for you.

3. No it wouldn't. In the function arguments, const and int need to be flipped so it reads (int* const b). N was initially a float so you can't reference it as a constant in the arguments. Need to declare it as a constant beforehand/inside the function.

5. f( a + 2, 4); 

6. I would changed the marks around \0. Since it's a char only '' are needed. When I changed them to the correct marks, the code ran fine.

8. Need to put a * in the second line to read double* array]