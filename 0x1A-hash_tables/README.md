# C - Hash tables
![image](https://cdn-media-2.freecodecamp.org/w1280/5f9c9924740569d1a4ca1e14.jpg)

A hash table is a data structure that is used to store keys/values in a way that allows for efficient insertion, deletion, and lookup operations. It does this by using a hash function to map the keys to indices in an array, and then stores the values in the corresponding array locations.

The main advantage of hash tables is that they have constant-time complexity for the basic operations of insertion, deletion, and lookup, on average. This is in contrast to other data structures, such as linked lists and binary search trees, which have a linear time complexity for these operations.

There are several different methods that can be used to implement a hash table, and the choice of method will depend on the specific requirements of the application. Some common methods include chaining, open addressing, and cuckoo hashing.

In C, you can use the struct and typedef constructs to create a hash table data type. Here is an example of how you might do this:

```
#define TABLE_SIZE 10

typedef struct {
    char *key;
    int value;
} hash_table_entry;

typedef struct {
    hash_table_entry *entries;
} hash_table;

```
To create new hash table use:
```
hash_table *table = malloc(sizeof(hash_table));
table->entries = calloc(TABLE_SIZE, sizeof(hash_table_entry));
```
To insert a key/value pair into the hash table, you would need to write a hash function to map the key to an index in the array, and then store the value at that index. Here is an example of a simple hash function that uses the ASCII values of the characters in the key string:
```
int hash(char *key) {
    int sum = 0;
    for (int i = 0; i < strlen(key); i++) {
        sum += key[i];
    }
    return sum % TABLE_SIZE;
}
```
With this hash function, you can then insert a key/value pair into the hash table as follows:

```
int index = hash(key);
table->entries[index].key = key;
table->entries[index].value = value;
```

To look up the value for a given key, you can use the same hash function to find the index, and then return the value at that index:

```
int index = hash(key);
int value = table->entries[index].value;
```
Deleting a key/value pair from the hash table can be done by setting the value to 0 or some other sentinel value, and setting the key to NULL.

```
int index = hash(key);
table->entries[index].key = NULL;
table->entries[index].value = 0;
```
## TECHNOLOGIES
- Scripts written in Bash 5.1.16(1)
- C files are compiled using gcc 11.3.0
- C files are written according to the C90 standard
- Tested on Ubuntu 20.04 LTS 

