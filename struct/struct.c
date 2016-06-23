#include <stdio.h>
#include <stdlib.h>

/* structs */
struct database {
	int id_number;
	int age;
	float salary;
};

int main() {
	struct database employee;
	struct database *db_ptr;
	
	employee.id_number = 182;
	employee.age = 23;
	employee.salary = 1024.21;

	db_ptr = &employee;
	printf("Your ID number is: %d\n", db_ptr->id_number);
	printf("Your age is: %d\n", db_ptr->age);
	printf("Your salary is: %f\n", db_ptr->salary);

	return 0;
}


/* notes
 * to return structures from functions, you define their
 * return type as a structure type. For ex:
 *		struct database fn();
 *
 * unions
 * unions are like structures except that all the vars.
 * share the same mem. When a union is declared, the
 * compiler allocates enough mem. for the largest data-
 * type in the union. It's like a giant stoarge chest
 * where you can store one large item, or small, but
 * never both at the same time. The '.' operator is
 * also used to access the diff. vars. inside a union.
 *
 * ln13: *db_ptr is currently a pointer to some db. struct.
 * 
 * ln19: specifying db_ptr to point at the employee db.
 *
 * ln20: the '->' acts kind of like a * when it is used
 *			 pointers. It means, get whatever is at that
 *			 mem.addr. and not "get what the mem.addr. is".
 */
