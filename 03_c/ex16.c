#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdlib.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);
	who->name = strdup(name);
	who->age  = age;
	who->height = height;
	who->weight = weight;
}

void Person_destory(struct Person *who)
{
	assert(who != NULL);
	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]) {
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
	struct Person lucy;
	lucy.name = "Lucy";
	lucy.age = 20;
	lucy.height = 173;
	printf("Joe is at memory location %p\n", joe);
	Person_print(frank);
	printf("Frank is at memory location %p\n", frank);
	
	joe->age += 20;
	joe->weight = 40;
	joe->height -= 2;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(joe);
	Person_print(frank);
	Person_print(&lucy);

	Person_destory(joe);
	Person_destory(frank);

	return 0;
}
