#include<iostream>
#include <string>

std::string READ(std::string str) {
    return str;
}

std::string EVAL(std::string str) {
    return str;
}

std::string PRINT(std::string str) {
    std::cout<<str<<'\n';
    return str;
}

std::string rep(std::string &x) {
    return PRINT(EVAL(READ(x)));
}

int main() {
    char str[100];
    while(true) {
        const std::string prompt = "user> ";
        std::cout<<prompt;
        std::string cmd;
        // if(std::cin.peek()==EOF) {
        //     break;
        // }        
        getline(std::cin, cmd);

        rep(cmd);
    }
    return 0;
}
