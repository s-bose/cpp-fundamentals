// Generated by Bisonc++ V6.04.01 on Sun, 17 Apr 2022 17:22:53 +0530

// base/comment

// $insert class.ih
#include "parser.ih"

// The FIRST element of SR arrays shown below uses `d_type', defining the
// state's type, and `d_lastIdx' containing the last element's index. If
// d_lastIdx contains the REQ_TOKEN bitflag (see below) then the state needs
// a token: if in this state d_token is Reserved_::UNDETERMINED_, nextToken() will be
// called

// The LAST element of SR arrays uses `d_token' containing the last retrieved
// token to speed up the (linear) seach.  Except for the first element of SR
// arrays, the field `d_action' is used to determine what to do next. If
// positive, it represents the next state (used with SHIFT); if zero, it
// indicates `ACCEPT', if negative, -d_action represents the number of the
// rule to reduce to.

// `lookup()' tries to find d_token in the current SR array. If it fails, and
// there is no default reduction UNEXPECTED_TOKEN_ is thrown, which is then
// caught by the error-recovery function.

// The error-recovery function will pop elements off the stack until a state
// having bit flag ERR_ITEM is found. This state has a transition on errTok_
// which is applied. In this errTok_ state, while the current token is not a
// proper continuation, new tokens are obtained by nextToken(). If such a
// token is found, error recovery is successful and the token is
// handled according to the error state's SR table and parsing continues.
// During error recovery semantic actions are ignored.

// A state flagged with the DEF_RED flag will perform a default
// reduction if no other continuations are available for the current token.

// The ACCEPT STATE never shows a default reduction: when it is reached the
// parser returns ACCEPT(). During the grammar
// analysis phase a default reduction may have been defined, but it is
// removed during the state-definition phase.

// So:
//      s_x[] = 
//      {
//                  [_field_1_]         [_field_2_]
//
// First element:   {state-type,        idx of last element},
// Other elements:  {required token,    action to perform},
//                                      ( < 0: reduce, 
//                                          0: ACCEPT,
//                                        > 0: next state)
//      }

// base/declarations

namespace // anonymous
{
    char const author[] = "Frank B. Brokken (f.b.brokken@rug.nl)";

    enum Reserved_
    {
        UNDETERMINED_   = -2,
        EOF_            = -1,
        errTok_         = 256
    };
    enum StateType       // modify statetype/data.cc when this enum changes
    {
        NORMAL,
        ERR_ITEM,
        REQ_TOKEN,
        ERR_REQ,    // ERR_ITEM | REQ_TOKEN
        DEF_RED,    // state having default reduction
        ERR_DEF,    // ERR_ITEM | DEF_RED
        REQ_DEF,    // REQ_TOKEN | DEF_RED
        ERR_REQ_DEF // ERR_ITEM | REQ_TOKEN | DEF_RED
    };    
    inline bool operator&(StateType lhs, StateType rhs)
    {
        return (static_cast<int>(lhs) & rhs) != 0;
    }
    enum StateTransition
    {
        ACCEPT_   = 0,     // `ACCEPT' TRANSITION
    };

    struct PI_     // Production Info
    {
        size_t d_nonTerm; // identification number of this production's
                            // non-terminal 
        size_t d_size;    // number of elements in this production 
    };

    struct SR_     // Shift Reduce info, see its description above
    {
        union
        {
            int _field_1_;      // initializer, allowing initializations 
                                // of the SR s_[] arrays
            StateType d_type;
            int       d_token;
        };
        union
        {
            int _field_2_;

            int d_lastIdx;          // if negative, the state uses SHIFT
            int d_action;           // may be negative (reduce), 
                                    // postive (shift), or 0 (accept)
        };
    };

    // $insert staticdata
    
    enum                        // size to expand the state-stack with when
    {                           // full
        STACK_EXPANSION_ = 10
    };

// Productions Info Records:
PI_ const s_productionInfo[] = 
{
     {0, 0}, // not used: reduction values are negative
     {265, 2}, // 1: lines ->  lines line
     {265, 1}, // 2: lines ->  line
     {266, 2}, // 3: line ('\x0a') ->  expr '\x0a'
     {266, 2}, // 4: line (errTok_) ->  errTok_ '\x0a'
     {266, 1}, // 5: line ('\x0a') ->  '\x0a'
     {266, 2}, // 6: line (LIST) ->  LIST '\x0a'
     {267, 1}, // 7: expr (NUMBER) ->  NUMBER
     {267, 1}, // 8: expr (IDENT) ->  IDENT
     {267, 2}, // 9: expr (uMinus) ->  '-' expr
     {267, 3}, // 10: expr ('^') ->  expr '^' expr
     {267, 3}, // 11: expr ('|') ->  expr '|' expr
     {267, 3}, // 12: expr ('&') ->  expr '&' expr
     {267, 3}, // 13: expr ('<') ->  expr '<' expr
     {267, 3}, // 14: expr ('>') ->  expr '>' expr
     {267, 3}, // 15: expr ('+') ->  expr '+' expr
     {267, 3}, // 16: expr ('-') ->  expr '-' expr
     {267, 3}, // 17: expr ('*') ->  expr '*' expr
     {267, 3}, // 18: expr ('/') ->  expr '/' expr
     {267, 3}, // 19: expr ('%') ->  expr '%' expr
     {267, 3}, // 20: expr ('(') ->  '(' expr ')'
     {267, 3}, // 21: expr ('=') ->  expr '=' expr
     {267, 3}, // 22: expr (OP_ASSIGN) ->  expr OP_ASSIGN expr
     {267, 3}, // 23: expr (OP_COMP) ->  expr OP_COMP expr
     {267, 3}, // 24: expr (OP_LOGIC) ->  expr OP_LOGIC expr
     {267, 3}, // 25: expr (OP_SHIFT) ->  expr OP_SHIFT expr
     {268, 1}, // 26: lines_$ ->  lines
};

// State info and SR_ transitions for each state.


SR_ s_0[] =
{
    { { ERR_REQ}, { 11} },           
    { {     265}, {  1} }, // lines  
    { {     266}, {  2} }, // line   
    { {     267}, {  3} }, // expr   
    { { errTok_}, {  4} }, // errTok_
    { {      10}, {  5} }, // '\x0a' 
    { {     259}, {  6} }, // LIST   
    { {     257}, {  7} }, // NUMBER 
    { {     258}, {  8} }, // IDENT  
    { {      45}, {  9} }, // '-'    
    { {      40}, { 10} }, // '('    
    { {       0}, {  0} },           
};

SR_ s_1[] =
{
    { { ERR_REQ}, {      11} },           
    { {     266}, {      11} }, // line   
    { {     267}, {       3} }, // expr   
    { { errTok_}, {       4} }, // errTok_
    { {      10}, {       5} }, // '\x0a' 
    { {     259}, {       6} }, // LIST   
    { {     257}, {       7} }, // NUMBER 
    { {     258}, {       8} }, // IDENT  
    { {      45}, {       9} }, // '-'    
    { {      40}, {      10} }, // '('    
    { {    EOF_}, { ACCEPT_} },           
    { {       0}, {       0} },           
};

SR_ s_2[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -2} }, 
};

SR_ s_3[] =
{
    { { REQ_TOKEN}, { 17} },             
    { {        10}, { 12} }, // '\x0a'   
    { {        94}, { 13} }, // '^'      
    { {       124}, { 14} }, // '|'      
    { {        38}, { 15} }, // '&'      
    { {        60}, { 16} }, // '<'      
    { {        62}, { 17} }, // '>'      
    { {        43}, { 18} }, // '+'      
    { {        45}, { 19} }, // '-'      
    { {        42}, { 20} }, // '*'      
    { {        47}, { 21} }, // '/'      
    { {        37}, { 22} }, // '%'      
    { {        61}, { 23} }, // '='      
    { {       260}, { 24} }, // OP_ASSIGN
    { {       262}, { 25} }, // OP_COMP  
    { {       261}, { 26} }, // OP_LOGIC 
    { {       263}, { 27} }, // OP_SHIFT 
    { {         0}, {  0} },             
};

SR_ s_4[] =
{
    { { REQ_TOKEN}, {  2} },          
    { {        10}, { 28} }, // '\x0a'
    { {         0}, {  0} },          
};

SR_ s_5[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -5} }, 
};

SR_ s_6[] =
{
    { { REQ_TOKEN}, {  2} },          
    { {        10}, { 29} }, // '\x0a'
    { {         0}, {  0} },          
};

SR_ s_7[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -7} }, 
};

SR_ s_8[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -8} }, 
};

SR_ s_9[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 30} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_10[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 31} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_11[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -1} }, 
};

SR_ s_12[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -3} }, 
};

SR_ s_13[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 32} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_14[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 33} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_15[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 34} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_16[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 35} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_17[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 36} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_18[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 37} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_19[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 38} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_20[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 39} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_21[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 40} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_22[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 41} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_23[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 42} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_24[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 43} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_25[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 44} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_26[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 45} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_27[] =
{
    { { REQ_TOKEN}, {  6} },          
    { {       267}, { 46} }, // expr  
    { {       257}, {  7} }, // NUMBER
    { {       258}, {  8} }, // IDENT 
    { {        45}, {  9} }, // '-'   
    { {        40}, { 10} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_28[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -4} }, 
};

SR_ s_29[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -6} }, 
};

SR_ s_30[] =
{
    { { REQ_DEF}, {  1} }, 
    { {       0}, { -9} }, 
};

SR_ s_31[] =
{
    { { REQ_TOKEN}, { 17} },             
    { {        41}, { 47} }, // ')'      
    { {        94}, { 13} }, // '^'      
    { {       124}, { 14} }, // '|'      
    { {        38}, { 15} }, // '&'      
    { {        60}, { 16} }, // '<'      
    { {        62}, { 17} }, // '>'      
    { {        43}, { 18} }, // '+'      
    { {        45}, { 19} }, // '-'      
    { {        42}, { 20} }, // '*'      
    { {        47}, { 21} }, // '/'      
    { {        37}, { 22} }, // '%'      
    { {        61}, { 23} }, // '='      
    { {       260}, { 24} }, // OP_ASSIGN
    { {       262}, { 25} }, // OP_COMP  
    { {       261}, { 26} }, // OP_LOGIC 
    { {       263}, { 27} }, // OP_SHIFT 
    { {         0}, {  0} },             
};

SR_ s_32[] =
{
    { { REQ_DEF}, {  10} },            
    { {      60}, {  16} }, // '<'     
    { {      62}, {  17} }, // '>'     
    { {      43}, {  18} }, // '+'     
    { {      45}, {  19} }, // '-'     
    { {      42}, {  20} }, // '*'     
    { {      47}, {  21} }, // '/'     
    { {      37}, {  22} }, // '%'     
    { {     262}, {  25} }, // OP_COMP 
    { {     263}, {  27} }, // OP_SHIFT
    { {       0}, { -10} },            
};

SR_ s_33[] =
{
    { { REQ_DEF}, {  10} },            
    { {      60}, {  16} }, // '<'     
    { {      62}, {  17} }, // '>'     
    { {      43}, {  18} }, // '+'     
    { {      45}, {  19} }, // '-'     
    { {      42}, {  20} }, // '*'     
    { {      47}, {  21} }, // '/'     
    { {      37}, {  22} }, // '%'     
    { {     262}, {  25} }, // OP_COMP 
    { {     263}, {  27} }, // OP_SHIFT
    { {       0}, { -11} },            
};

SR_ s_34[] =
{
    { { REQ_DEF}, {  10} },            
    { {      60}, {  16} }, // '<'     
    { {      62}, {  17} }, // '>'     
    { {      43}, {  18} }, // '+'     
    { {      45}, {  19} }, // '-'     
    { {      42}, {  20} }, // '*'     
    { {      47}, {  21} }, // '/'     
    { {      37}, {  22} }, // '%'     
    { {     262}, {  25} }, // OP_COMP 
    { {     263}, {  27} }, // OP_SHIFT
    { {       0}, { -12} },            
};

SR_ s_35[] =
{
    { { REQ_DEF}, {   7} },            
    { {      43}, {  18} }, // '+'     
    { {      45}, {  19} }, // '-'     
    { {      42}, {  20} }, // '*'     
    { {      47}, {  21} }, // '/'     
    { {      37}, {  22} }, // '%'     
    { {     263}, {  27} }, // OP_SHIFT
    { {       0}, { -13} },            
};

SR_ s_36[] =
{
    { { REQ_DEF}, {   7} },            
    { {      43}, {  18} }, // '+'     
    { {      45}, {  19} }, // '-'     
    { {      42}, {  20} }, // '*'     
    { {      47}, {  21} }, // '/'     
    { {      37}, {  22} }, // '%'     
    { {     263}, {  27} }, // OP_SHIFT
    { {       0}, { -14} },            
};

SR_ s_37[] =
{
    { { REQ_DEF}, {   4} },       
    { {      42}, {  20} }, // '*'
    { {      47}, {  21} }, // '/'
    { {      37}, {  22} }, // '%'
    { {       0}, { -15} },       
};

SR_ s_38[] =
{
    { { REQ_DEF}, {   4} },       
    { {      42}, {  20} }, // '*'
    { {      47}, {  21} }, // '/'
    { {      37}, {  22} }, // '%'
    { {       0}, { -16} },       
};

SR_ s_39[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -17} }, 
};

SR_ s_40[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -18} }, 
};

SR_ s_41[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -19} }, 
};

SR_ s_42[] =
{
    { { REQ_DEF}, {  16} },             
    { {      94}, {  13} }, // '^'      
    { {     124}, {  14} }, // '|'      
    { {      38}, {  15} }, // '&'      
    { {      60}, {  16} }, // '<'      
    { {      62}, {  17} }, // '>'      
    { {      43}, {  18} }, // '+'      
    { {      45}, {  19} }, // '-'      
    { {      42}, {  20} }, // '*'      
    { {      47}, {  21} }, // '/'      
    { {      37}, {  22} }, // '%'      
    { {      61}, {  23} }, // '='      
    { {     260}, {  24} }, // OP_ASSIGN
    { {     262}, {  25} }, // OP_COMP  
    { {     261}, {  26} }, // OP_LOGIC 
    { {     263}, {  27} }, // OP_SHIFT 
    { {       0}, { -21} },             
};

SR_ s_43[] =
{
    { { REQ_DEF}, {  16} },             
    { {      94}, {  13} }, // '^'      
    { {     124}, {  14} }, // '|'      
    { {      38}, {  15} }, // '&'      
    { {      60}, {  16} }, // '<'      
    { {      62}, {  17} }, // '>'      
    { {      43}, {  18} }, // '+'      
    { {      45}, {  19} }, // '-'      
    { {      42}, {  20} }, // '*'      
    { {      47}, {  21} }, // '/'      
    { {      37}, {  22} }, // '%'      
    { {      61}, {  23} }, // '='      
    { {     260}, {  24} }, // OP_ASSIGN
    { {     262}, {  25} }, // OP_COMP  
    { {     261}, {  26} }, // OP_LOGIC 
    { {     263}, {  27} }, // OP_SHIFT 
    { {       0}, { -22} },             
};

SR_ s_44[] =
{
    { { REQ_DEF}, {   7} },            
    { {      43}, {  18} }, // '+'     
    { {      45}, {  19} }, // '-'     
    { {      42}, {  20} }, // '*'     
    { {      47}, {  21} }, // '/'     
    { {      37}, {  22} }, // '%'     
    { {     263}, {  27} }, // OP_SHIFT
    { {       0}, { -23} },            
};

SR_ s_45[] =
{
    { { REQ_DEF}, {  13} },            
    { {      94}, {  13} }, // '^'     
    { {     124}, {  14} }, // '|'     
    { {      38}, {  15} }, // '&'     
    { {      60}, {  16} }, // '<'     
    { {      62}, {  17} }, // '>'     
    { {      43}, {  18} }, // '+'     
    { {      45}, {  19} }, // '-'     
    { {      42}, {  20} }, // '*'     
    { {      47}, {  21} }, // '/'     
    { {      37}, {  22} }, // '%'     
    { {     262}, {  25} }, // OP_COMP 
    { {     263}, {  27} }, // OP_SHIFT
    { {       0}, { -24} },            
};

SR_ s_46[] =
{
    { { REQ_DEF}, {   6} },       
    { {      43}, {  18} }, // '+'
    { {      45}, {  19} }, // '-'
    { {      42}, {  20} }, // '*'
    { {      47}, {  21} }, // '/'
    { {      37}, {  22} }, // '%'
    { {       0}, { -25} },       
};

SR_ s_47[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -20} }, 
};


// State array:
SR_ *s_state[] =
{
  s_0,  s_1,  s_2,  s_3,  s_4,  s_5,  s_6,  s_7,  s_8,  s_9,
  s_10,  s_11,  s_12,  s_13,  s_14,  s_15,  s_16,  s_17,  s_18,  s_19,
  s_20,  s_21,  s_22,  s_23,  s_24,  s_25,  s_26,  s_27,  s_28,  s_29,
  s_30,  s_31,  s_32,  s_33,  s_34,  s_35,  s_36,  s_37,  s_38,  s_39,
  s_40,  s_41,  s_42,  s_43,  s_44,  s_45,  s_46,  s_47,
};

} // anonymous namespace ends




// If the parsing function call (i.e., parse()' needs arguments, then provide
// an overloaded function.  The code below doesn't rely on parameters, so no
// arguments are required.  Furthermore, parse uses a function try block to
// allow us to do ACCEPT and ABORT from anywhere, even from within members
// called by actions, simply throwing the appropriate exceptions.


// base/base1
ParserBase::ParserBase()
:
    d_token(Reserved_::UNDETERMINED_),
    // $insert baseclasscode
    d_requiredTokens_(0)
{
}

// base/clearin
void ParserBase::clearin_()
{
    d_nErrors_ = 0;
    d_stackIdx = -1;
    d_stateStack.clear();
    d_token = Reserved_::UNDETERMINED_;
    d_next = TokenPair{ Reserved_::UNDETERMINED_, STYPE_{} };
    d_recovery = false;
    d_acceptedTokens_ = d_requiredTokens_;
    d_val_ = STYPE_{};

    push_(0);
}

// base/debugfunctions

void ParserBase::setDebug(bool mode)
{
    d_actionCases_ = false;
    d_debug_ = mode;
}

void ParserBase::setDebug(DebugMode_ mode)
{
    d_actionCases_ = mode & ACTIONCASES;
    d_debug_ =       mode & ON;
}

// base/lex
void ParserBase::lex_(int token)
{
    d_token = token;

    if (d_token <= 0)
        d_token = Reserved_::EOF_;

    d_terminalToken = true;
}

// base/lookup
int ParserBase::lookup_() const
{
    // if the final transition is negative, then we should reduce by the rule
    // given by its positive value.

    SR_ const *sr = s_state[d_state];
    SR_ const *last = sr + sr->d_lastIdx;

    for ( ; ++sr != last; )           // visit all but the last SR entries
    {
        if (sr->d_token == d_token)
            return sr->d_action;
    }

    if (sr == last)   // reached the last element
    {
        if (sr->d_action < 0)   // default reduction
        {
            return sr->d_action;                
        }

        // No default reduction, so token not found, so error.
        throw UNEXPECTED_TOKEN_;
    }

    // not at the last element: inspect the nature of the action
    // (< 0: reduce, 0: ACCEPT, > 0: shift)

    int action = sr->d_action;


    return action;
}

// base/pop
void ParserBase::pop_(size_t count)
{
    if (d_stackIdx < static_cast<int>(count))
    {
        ABORT();
    }

    d_stackIdx -= count;
    d_state = d_stateStack[d_stackIdx].first;
    d_vsp = &d_stateStack[d_stackIdx];

}

// base/poptoken
void ParserBase::popToken_()
{
    d_token = d_next.first;
    d_val_ = std::move(d_next.second);

    d_next.first = Reserved_::UNDETERMINED_;
}

// base/push
void ParserBase::push_(size_t state)
{
    size_t currentSize = d_stateStack.size();
    if (stackSize_() == currentSize)
    {
        size_t newSize = currentSize + STACK_EXPANSION_;
        d_stateStack.resize(newSize);
    }

    ++d_stackIdx;
    d_stateStack[d_stackIdx] = 
                    StatePair{ d_state = state, std::move(d_val_) };

    d_vsp = &d_stateStack[d_stackIdx];

    if (d_stackIdx == 0)
    {
    }
    else
    {
    }
}

// base/pushtoken
void ParserBase::pushToken_(int token)
{
    d_next = TokenPair{ d_token, std::move(d_val_) };
    d_token = token;
}

// base/redotoken
void ParserBase::redoToken_()
{
    if (d_token != Reserved_::UNDETERMINED_)
        pushToken_(d_token);
}

// base/reduce
void ParserBase::reduce_(int rule)
{
    PI_ const &pi = s_productionInfo[rule];

    d_token = pi.d_nonTerm;
    pop_(pi.d_size);

    d_terminalToken = false;
}

// base/shift
void ParserBase::shift_(int action)
{
    push_(action);
    popToken_();               // token processed

    if (d_recovery and d_terminalToken)
    {
        d_recovery = false;
        d_acceptedTokens_ = 0;
    }
}

// base/startrecovery
void ParserBase::startRecovery_()
{
    int lastToken = d_token;                // give the unexpected token a
                                            // chance to be processed
                                            // again.

    pushToken_(Reserved_::errTok_);      // specify errTok_ as next token
    push_(lookup_());                     // push the error state

    d_token = lastToken;                    // reactivate the unexpected
                                            // token (we're now in an
                                            // ERROR state).

    d_recovery = true;
}

// base/top
inline size_t ParserBase::top_() const
{
    return d_stateStack[d_stackIdx].first;
}

// derived/errorrecovery
void Parser::errorRecovery_()
{
    // When an error has occurred, pop elements off the stack until the top
    // state has an error-item. If none is found, the default recovery
    // mode (which is to abort) is activated. 
    //
    // If EOF is encountered without being appropriate for the current state,
    // then the error recovery will fall back to the default recovery mode.
    // (i.e., parsing terminates)



    if (d_acceptedTokens_ >= d_requiredTokens_)// only generate an error-
    {                                           // message if enough tokens 
        ++d_nErrors_;                          // were accepted. Otherwise
        error();                                // simply skip input
    }

    // get the error state
    while (not (s_state[top_()][0].d_type & ERR_ITEM))
    {
        pop_();
    }

    // In the error state, looking up a token allows us to proceed.
    // Continuation may be require multiple reductions, but eventually a
    // terminal-token shift is used. See nextCycle_ for details.

    startRecovery_();
}

// derived/executeaction
void Parser::executeAction_(int production)
try
{
    if (token_() != Reserved_::UNDETERMINED_)
        pushToken_(token_());     // save an already available token
    switch (production)
    {
        // $insert actioncases
        
        case 1:
#line 33 "parser/grammar"
        {
            d_val_ = vs_(-1);
        }
        break;

        case 2:
#line 35 "parser/grammar"
        {
            d_val_ = vs_(0);
        }
        break;

        case 3:
#line 40 "parser/grammar"
        {
         display(vs_(-1));
         }
        break;

        case 4:
#line 45 "parser/grammar"
        {
         prompt();
         }
        break;

        case 5:
#line 50 "parser/grammar"
        {
         prompt();
         }
        break;

        case 6:
#line 55 "parser/grammar"
        {
         showList();
         prompt();
         }
        break;

        case 7:
#line 64 "parser/grammar"
        {
         d_val_ = value();
         }
        break;

        case 8:
#line 69 "parser/grammar"
        {
         d_val_ = variable();
         }
        break;

        case 9:
#line 74 "parser/grammar"
        {
         d_val_ = negate(vs_(0));
         }
        break;

        case 10:
#line 79 "parser/grammar"
        {
         d_val_ = opXor(vs_(-2), vs_(0));
         }
        break;

        case 11:
#line 84 "parser/grammar"
        {
         d_val_ = opOr(vs_(-2), vs_(0));
         }
        break;

        case 12:
#line 89 "parser/grammar"
        {
         d_val_ = opAnd(vs_(-2), vs_(0));
         }
        break;

        case 13:
#line 94 "parser/grammar"
        {
         d_val_ = opLesser(vs_(-2), vs_(0));
         }
        break;

        case 14:
#line 99 "parser/grammar"
        {
         d_val_ = opGreater(vs_(-2), vs_(0));
         }
        break;

        case 15:
#line 104 "parser/grammar"
        {
         d_val_ = opAdd(vs_(-2), vs_(0));
         }
        break;

        case 16:
#line 109 "parser/grammar"
        {
         d_val_ = opSub(vs_(-2), vs_(0));
         }
        break;

        case 17:
#line 115 "parser/grammar"
        {
         d_val_ = opMul(vs_(-2), vs_(0));
         }
        break;

        case 18:
#line 120 "parser/grammar"
        {
         d_val_ = opDiv(vs_(-2), vs_(0));
         }
        break;

        case 19:
#line 125 "parser/grammar"
        {
         d_val_ = opMod(vs_(-2), vs_(0));
         }
        break;

        case 20:
#line 130 "parser/grammar"
        {
         d_val_ = vs_(-1);
         }
        break;

        case 21:
#line 135 "parser/grammar"
        {
         d_val_ = opAssign(vs_(-2), vs_(0));
         }
        break;

        case 22:
#line 140 "parser/grammar"
        {
         d_val_ = opAssignOthr(vs_(-2), vs_(0));
         }
        break;

        case 23:
#line 145 "parser/grammar"
        {
         d_val_ = opComp(vs_(-2), vs_(0));
         }
        break;

        case 24:
#line 150 "parser/grammar"
        {
         d_val_ = opLogic(vs_(-2), vs_(0));
         }
        break;

        case 25:
#line 155 "parser/grammar"
        {
         d_val_ = opShift(vs_(-2), vs_(0));
         }
        break;

    }
}
catch (std::exception const &exc)
{
    exceptionHandler(exc);
}

// derived/nextcycle
void Parser::nextCycle_()
try
{
    if (s_state[state_()]->d_type & REQ_TOKEN)
        nextToken_();              // obtain next token


    int action = lookup_();        // lookup d_token in d_state

    if (action > 0)                 // SHIFT: push a new state
    {
        shift_(action);
        return;
    }

    if (action < 0)            // REDUCE: execute and pop.
    {

        if (recovery_())
            redoToken_();
        else
            executeAction_(-action);
                                            // next token is the rule's LHS
        reduce_(-action); 
        return;
    }

    if (recovery_())
        ABORT();
    else 
        ACCEPT();
}
catch (ErrorRecovery_)
{
    if (not recovery_())
        errorRecovery_();
    else
    {
        if (token_() == Reserved_::EOF_)
            ABORT();
        popToken_();               // skip the failing token
    }
}


// derived/nexttoken
void Parser::nextToken_()
{ 
    // If d_token is Reserved_::UNDETERMINED_ then if savedToken_() is
    // Reserved_::UNDETERMINED_ another token is obtained from lex(). Then
    // savedToken_() is assigned to d_token.

                                    // no need for a token: got one already
    if (token_() != Reserved_::UNDETERMINED_) 
    {
        return;                             
    }

    if (savedToken_() != Reserved_::UNDETERMINED_)
    {
        popToken_();               // consume pending token
    }
    else
    {
        ++d_acceptedTokens_;       // accept another token (see
                                    // errorRecover())
        lex_(lex());
        print_();
    }
    print();
}

// derived/print
void Parser::print_()
{
// $insert print
}

// derived/parse
int Parser::parse()
try 
{
    // The parsing algorithm:
    // Initially, state 0 is pushed on the stack, and all relevant variables
    // are initialized by Base::clearin_.
    //
    // Then, in an eternal loop:
    //
    //  1. If a state is a REQ_TOKEN type, then the next token is obtained
    //     from nextToken().  This may very well be the currently available
    //     token. When retrieving a terminal token d_terminal is set to true.
    //
    //  2. lookup() is called, d_token is looked up in the current state's
    //     SR_ array.
    //
    //  4. Depending on the result of the lookup() function the next state is
    //     shifted on the parser's stack, a reduction by some rule is applied,
    //     or the parsing function returns ACCEPT(). When a reduction is
    //     called for, any action that may have been defined for that
    //     reduction is executed.
    //
    //  5. An error occurs if d_token is not found, and the state has no
    //     default reduction.

    clearin_();                            // initialize, push(0)

    while (true)
    {
// $insert prompt
        nextCycle_();
    }
}
catch (Return_ retValue)
{
    return retValue or d_nErrors_;
}


// derived/tail


