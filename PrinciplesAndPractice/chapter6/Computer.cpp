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
    switch(token.kind) {
    case '+':
        lval + expression();
        break;
    case '-':
        lval - expression();
    }
    return 0.0d;
}

double term() {
    return 0.0d;
}
