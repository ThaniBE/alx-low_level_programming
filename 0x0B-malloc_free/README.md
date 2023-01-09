# Malloc and Free function
---
What does `malloc` do?
* Used to allocate a certain amount of memory during the execution of a program.

What does `free` do?
* Used to free memory allocated by the **malloc** function.

Important tool:
---
- [x] Valgrind
   * Used for memory debugging, memory leak detection and profiling programs

Tasks in OxOB-malloc\_free
---
*Functions*

0. Createarray
* Creates an array of chars, and initializes it with a specific char.
  * Returns *NULL* if size = 0
  * Returns a pointer to the array, or NULL if it fails.

1. Strdup
*  Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
   * The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
   * Returns NULL if str = NULL
   * On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.

2. Strconcat
* Concatenates two strings.
  * The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated.
  * If NULL is passed, treat it as an empty string.
  * The function should return NULL on failure.

3. Allocgrid
* Returns a pointer to a 2 dimensional array of integers.
  * Each element of the grid should be initialized to 0.
  * The function should return NULL on failure.
  * If width or height is 0 or negative, return NULL.

4. Freegrid
* Frees a 2 dimensional grid previously created by your alloc\_grid function.

#### Advanced tasks
---
