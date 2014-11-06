//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2014-09-28.
//
//

#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz");
        }
        else if (i % 3 == 0) {
            printf("fizz");
        }
        else if (i % 5 == 0) {
            printf("buzz");
        }
        else {
            printf("%i", i);
        }}}