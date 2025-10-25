/*5.4. Declare a static local variable inside a function. Observe how its value 
persists across function calls.*/ 
#include <stdio.h>

void counter() {
    static int count = 0;  // static variable, initialized once
    count++;
    printf("Count = %d\n", count);
}

int main() {
	printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
	printf("\n----------------------\n");
    counter();
    counter();
    counter();
    return 0;
}

