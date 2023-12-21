this project is a HASH-Table meaning HASH-function with array
for storing and retriving data with constant time complexity
a hash function is going to take an input then map it to a loction
in an array
criteria for ideal hashtable
1) calling a hash function on the same input should always produce the same output
2) hash function needs to be fast
3) hash function should be random
steps to create a hash table
first step:- to know the size of the table, the structures of the table(array) and structure for probable collusion
second step:- create a hash function
third step:- create base table based on the size given and set them to NULL for many reasons
fourth step:- create a function that can insert a value to hash table
fivth step:- create a function that retrieve a value by its key
sixth step(optional):- to print the whole table 