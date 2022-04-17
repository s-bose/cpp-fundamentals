#include "scanner.ih"
typedef Tokens::OpAssign_ Assign;
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
         {"=", Assign::EQ},
         {"!", Assign::NEQ},
         {"<", Assign::LEQ},
         {">", Assign::GEQ},
         {"<<", Assign::SHL},
         {">>", Assign::SHR},
         {"||", Logic::L_OR},
         {"&&", Logic::L_AND}
        };