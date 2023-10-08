include <stdio.h>
include <stdlib.h>

int is_dg_str(cont char *str);
int multiply(int num1, int num2);

/**
 * main - homme function
 * @argc: int arg
 * @argv: the char arg
 *
 * Return: 0 if alls good.
 */
int main(int argc, char *argv[]) {

	if (argc != 3){
		print("Error\n");
		exit(98);
	}
  // Check if the arguments are composed only of digits.
	if (!is_dg_str(argv[1]) || !is_dg_str(argv[2]))	{
		printf("Error\n");
		exit(98);
	}
	
	// Convert the arguments to integers.
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	//multiply and print the numbers
	int mul = multiply(num1, num2);
	print("%d\n", mul);
	
	return (0);
}

/**
 * is_dg_str: check for str
 * @str: the char for check
 * Return: retuen value.
 */
int is_dg_str(cont char *str){
	while (*str != '\0'){
		if(*str < '0' || *str > '9'){
			return (0);
		}
		str++;
	}
	return (1);
}

/**
* multiply: its a multuply function
 * @num2: first number
 * @num2: second number
 * Return: num1 multiply by num2.
 */
int multiply(int num1, int num2){
	return (num1 * num2);
}
