#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int expr();
int term();
int factor();
void error();

char token;

void next_token() {
    token = getchar();
}

void match(char expected_token) {
    if (token == expected_token) {
        next_token();
    } else {
        error();
    }
}

void error() {
    printf("Syntax error\n");
    exit(1);
}

int expr() {
    int result = term();
    while (token == '+' || token == '-') {
        char op = token;
        next_token();
        if (op == '+') {
            result += term();
        } else {
            result -= term();
        }
    }
    return result;
}

int term() {
    int result = factor();
    while (token == '*' || token == '/') {
        char op = token;
        next_token();
        if (op == '*') {
            result *= factor();
        } else {
            int divisor = factor();
            if (divisor != 0) {
                result /= divisor;
            } else {
                error();
            }
        }
    }
    return result;
}

int factor() {
    int result;
    if (isdigit(token)) {
        ungetc(token, stdin);
        scanf("%d", &result);
        next_token();
    } else if (token == '(') {
        next_token();
        result = expr();
        match(')');
    } else {
        error();
    }
    return result;
}

int main() {
    printf("Enter an arithmetic expression: ");
    next_token();
    int result = expr();
    printf("Result: %d\n", result);
    return 0;
}
