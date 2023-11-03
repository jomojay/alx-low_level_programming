# 0x1A. C - Hash tables

Hash table data strucure concept is a way of storing and retrieving data in almost constant time (i.e O(1)).

## Types 
### Open Hashing:
This is a way of maping a value to its keys hashed value as its index on the hash table. In an event of collision, closed addressing(chaining) is used to extend out a linked list containing the key/value of the new element from the same index/hashed value.

### Closed Hashing:
This works same as open hashing but handles collision diffrently. Here, three methods of collision resolution are employed.
    1.) linear probing
    2.) quadratic probing
    3.) Double hashing

This project majourly deals with Open Hashing.
