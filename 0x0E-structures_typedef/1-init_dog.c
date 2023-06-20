/**
* init_dog - initialize a variable of type struct dog
* @d: the variable to initialize
* @name: the name of the dog
* @age: the age of the dog in years
* @owner: the name of the owner of the dog
*
* This function assigns the values of name, age and owner to the elements
* of the struct dog variable d.
*/
void init_dog(struct dog d, char *name, float age, char *owner)
{
d.name = name;
d.age = age;
d.owner = owner;
}
