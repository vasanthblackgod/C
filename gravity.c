#include <stdio.h>

#define MAX_SIZE 1000

int main() {

    int program[MAX_SIZE];
    int n = 0;
    while (scanf("%d,", &program[n]) == 1) {
        n++;
    }

    program[1] = 12;
    program[2] = 2;

    int pc = 0;
    while (program[pc] != 99) {
        int op = program[pc];
        int a = program[program[pc+1]];
        int b = program[program[pc+2]];
        int c = program[pc+3];
        if (op == 1) {
            program[c] = a + b;
        } else if (op == 2) {
            program[c] = a * b;
        } else {
            printf("Error: unknown opcode %d at position %d\n", op, pc);
            return 1;
        }
        pc += 4;
    }

    printf("Program result: %d\n", program[0]);

    return 0;
}
