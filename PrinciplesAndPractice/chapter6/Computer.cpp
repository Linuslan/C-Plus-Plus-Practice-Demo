#include <iostream>
/*
    Expression:
        Term
        Expression "+" Term
        Expression "-" Term
    Term:
        Primary
        Term "*" Primary
        Term "/" Primary
        Term "%" Primary
    Primary:
        Number
        "(" Expression ")"
    Number:
        floating-point-literal
 */
class Token {
public:
    char kind;
    double value;
};
double expression();
double term();
double primary();
Token getToken() {
    Token token;
    return token;
}
int main() {

    return 0;
}



double expression() {
    double lval = term();
    Token token = getToken();
    while(true) {
        switch(token.kind) {
        case '+':
            lval += term();
            break;
        case '-':
            lval -= term();
            break;
        default:
            return lval;
        }
    }
    return lval;
}

double term() {
    double lval = primary();
    Token token = getToken();
    while(true) {
        switch(token.kind) {
        case '*':
            lval *= primary();
        case '/':
            lval /= primary();
        default:
            return lval;
        }
    }
    return lval;
}

double primary() {
    double lval = 0.0d;
    Token token = getToken();
    switch(token.kind) {
    case '(':
        lval = expression();
        break;
    case '8':
        lval = token.value;
        break;
    }
    return lval;
}
