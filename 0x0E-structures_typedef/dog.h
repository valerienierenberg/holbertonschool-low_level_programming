#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog-structure with name, age, owner elements
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
