/**
* struct dog - a structure to represent a dog
* @name: the name of the dog
* @age: the age of the dog in years
* @owner: the name of the owner of the dog
*
* This structure contains three elements: name, age and owner of the dog.
* The name and owner are pointers to char arrays, and the age is a float value.
*/
struct dog {
char *name;
float age;
char *owner;
};
