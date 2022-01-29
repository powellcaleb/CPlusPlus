What is the difference between a function declaration and a function definition?
2. A function declaration is telling the system a function exists. It's pretty much the entire function but omitting what's inside and end it with a semicolon. The function definition is code that the function will execute. So it's pretty much a function declaration, except the body contains executable code and doesn't end in a semicolon (besides the code inside the body).

Why does C/C++ need to have function declarations? Why doesn’t Java have them?
3. This is because C++ relies on the ordering of functions. If a function is defined below the main  body, the code inside the main calls on the function, then C++ won't compile because it reads the code in the main body first before getting to the defined function on the bottom. So in C++ eyes, the function doesn't exist. Java however knows the function exists when you call it so it will compile. This is due to the 1 pass 2 pass rule. C++ only runs through the program once while Java makes 2, making sure that all functions that have been called, actually exists.

What is the C preprocessor, and what does it do?
4. A separate program that does text manipulations based on directives beginning with ' # ". For example the #include, will insert the contents of a specified file into the current file.

What do you use header files for?
5. Header files are used for storing functions. It's easier this way as if you want to use the same function elsewhere, you can call the header file instead of specifying the function in each program.

Suppose you have the following:#define MAX_VALUE 32767Is MAX VALUE a variable? If not, what is it?
8. No, more so a macro. This is because #define is a preprocessor, so before the program can compile and even read MAX_VALUE in the code, it will have already replaced it with the number.