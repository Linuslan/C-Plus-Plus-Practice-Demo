#include <iostream>
using namespace std;
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
Token getToken();
int main() {
    cout << "=" << expression();
    return 0;
}

double expression() {
    double lval = term();
    Token token = getToken();
    while(true) {
        switch(token.kind) {
        case '+':
            lval += term();
            token = getToken();
            break;
        case '-':
            lval -= term();
            token = getToken();
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
            token = getToken();
        case '/':
            lval /= primary();
            token = getToken();
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
        token = getToken();
        if(token.value!=')') {
            cout << "')' expected\n";
            return lval;
        }
        break;
    case '8':
        lval = token.value;
        break;
    }
    return lval;
}

Token getToken() {
    char ch = '0';
    double val = 0.0d;
    if(cin >> ch) {
        if((ch >= '0' && ch << '9') || ch == '.') {
            cin.putback(ch);
            cin >> val;
            ch = '8';
        }
        Token token{ch, val};
        return token;
    } else {
        return NULL;
    }
}
