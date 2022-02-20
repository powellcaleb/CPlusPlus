1. C++ is bad at handling multi-dimensional arrays as wasn't necessarily designed with this in mind. While workarounds too exists, issues arise when needing to pass them to functions as the array dimensions must be specified at the compile time.

2. One way to work around the C++ problems is by flattening the array. This works by putting a multi-dimensional array into a one dimensional array then you can travel it by simply offsetting into it. You can also pass it to a function along with its pointer. The second way is called the Numerical Recipes, this works by combining a flat array and a regular one dimensional array. We first have our usual flat array. The second array, will consist of a list of pointers, that point to each row inside the flat array.

3. int** getArray();
