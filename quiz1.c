#include <stdio.h>

int main(){
	char nameList[10][10] = {"Harsh", "Patrik", "Bob"};
	printf("%s\n", nameList[1][-1]);
	printf("%c\n", nameList[1][4]); // Accessing the last character of "Patrik"
}


