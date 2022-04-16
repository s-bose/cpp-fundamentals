#include "scanner.ih"
// typedef Tokens::OpAssign_ Assign;

std::unordered_map<char, int> Scanner::s_symbols;
//  = 
//         {{'+', Assign::PLUS},
//          {'-', Assign::MINUS},
//          {'*', Assign::MUL},
//          {'/', Assign::DIV},
//          {'%', Assign::MOD},
//          {'&', Assign::AND},
//          {'|', Assign::OR},
//          {'^', Assign::XOR},
//          {'=', Assign::EQ},
//          {'!', Assign::NEQ},
//          {'<', Assign::LEQ},
//          {'>', Assign::GEQ}
//         };