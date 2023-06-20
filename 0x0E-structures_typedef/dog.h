/**
* @brief A structure to represent a dog
* 
* This structure contains three elements: name, age and owner of the dog.
* The name and owner are pointers to char arrays, and the age is a float value.
*/
struct dog {
char *name; /**< The name of the dog */
float age; /**< The age of the dog in years */
char *owner; /**< The name of the owner of the dog */
};
