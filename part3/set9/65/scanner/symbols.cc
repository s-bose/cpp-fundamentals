#include "scanner.ih"
typedef Tokens::OpAssign_ Assign;
typedef Tokens::OpComp_ Comp;

typedef Tokens::OpLogic_ Logic;

std::unordered_map<std::string, int> Scanner::s_symbols =
    {{"+", Assign::PLUS},
     {"-", Assign::MINUS},
     {"*", Assign::MUL},
     {"/", Assign::DIV},
     {"%", Assign::MOD},
     {"&", Assign::AND},
     {"|", Assign::OR},
     {"^", Assign::XOR},
     {"<<", Assign::SHL},
     {">>", Assign::SHR},
     {"=", Comp::EQ},
     {"!", Comp::NEQ},
     {"<", Comp::LEQ},
     {">", Comp::GEQ},
     {"||", Logic::L_OR},
     {"&&", Logic::L_AND}};