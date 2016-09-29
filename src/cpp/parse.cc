// Generated by Bisonc++ V4.05.00 on Wed, 28 Sep 2016 16:13:25 -0400

// $insert class.ih
#include "Parser.ih"

// The FIRST element of SR arrays shown below uses `d_type', defining the
// state's type, and `d_lastIdx' containing the last element's index. If
// d_lastIdx contains the REQ_TOKEN bitflag (see below) then the state needs
// a token: if in this state d_token__ is _UNDETERMINED_, nextToken() will be
// called

// The LAST element of SR arrays uses `d_token' containing the last retrieved
// token to speed up the (linear) seach.  Except for the first element of SR
// arrays, the field `d_action' is used to determine what to do next. If
// positive, it represents the next state (used with SHIFT); if zero, it
// indicates `ACCEPT', if negative, -d_action represents the number of the
// rule to reduce to.

// `lookup()' tries to find d_token__ in the current SR array. If it fails, and
// there is no default reduction UNEXPECTED_TOKEN__ is thrown, which is then
// caught by the error-recovery function.

// The error-recovery function will pop elements off the stack until a state
// having bit flag ERR_ITEM is found. This state has a transition on _error_
// which is applied. In this _error_ state, while the current token is not a
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
// Last element:    {set to d_token__,    action to perform}
//      }

// When the --thread-safe option is specified, all static data are defined as
// const. If --thread-safe is not provided, the state-tables are not defined
// as const, since the lookup() function below will modify them


namespace // anonymous
{
    char const author[] = "Frank B. Brokken (f.b.brokken@rug.nl)";

    enum 
    {
        STACK_EXPANSION = 5     // size to expand the state-stack with when
                                // full
    };

    enum ReservedTokens
    {
        PARSE_ACCEPT     = 0,   // `ACCEPT' TRANSITION
        _UNDETERMINED_   = -2,
        _EOF_            = -1,
        _error_          = 256
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
    struct PI__     // Production Info
    {
        size_t d_nonTerm; // identification number of this production's
                            // non-terminal 
        size_t d_size;    // number of elements in this production 
    };

    struct SR__     // Shift Reduce info, see its description above
    {
        union
        {
            int _field_1_;      // initializer, allowing initializations 
                                // of the SR s_[] arrays
            int d_type;
            int d_token;
        };
        union
        {
            int _field_2_;

            int d_lastIdx;          // if negative, the state uses SHIFT
            int d_action;           // may be negative (reduce), 
                                    // postive (shift), or 0 (accept)
            size_t d_errorState;    // used with Error states
        };
    };

    // $insert staticdata
    
// Productions Info Records:
PI__ const s_productionInfo[] = 
{
     {0, 0}, // not used: reduction values are negative
     {272, 0}, // 1: lines ->  <empty>
     {272, 2}, // 2: lines ->  line lines
     {273, 1}, // 3: line ->  sphereDef
     {273, 1}, // 4: line ->  atomDef
     {273, 1}, // 5: line ->  parameter
     {274, 5}, // 6: sphereDef (SPHERE) ->  SPHERE real real real real
     {275, 11}, // 7: atomDef (ATOM) ->  ATOM INT STRING STRING STRING INT real real real real real
     {275, 10}, // 8: atomDef (ATOM) ->  ATOM INT STRING STRING INT real real real real real
     {276, 2}, // 9: parameter (ST) ->  ST real
     {276, 2}, // 10: parameter (RLAUNCH) ->  RLAUNCH real
     {276, 3}, // 11: parameter (HUNITS) ->  HUNITS real string
     {276, 2}, // 12: parameter (UNITS) ->  UNITS string
     {276, 3}, // 13: parameter (TEMP) ->  TEMP real string
     {276, 3}, // 14: parameter (MASS) ->  MASS real string
     {276, 3}, // 15: parameter (VISCOSITY) ->  VISCOSITY real string
     {276, 2}, // 16: parameter (BF) ->  BF real
     {277, 1}, // 17: real (FLOAT) ->  FLOAT
     {277, 1}, // 18: real (INT) ->  INT
     {278, 1}, // 19: string (STRING) ->  STRING
     {279, 1}, // 20: lines_$ ->  lines
};

// State info and SR__ transitions for each state.


SR__ s_0[] =
{
    { { REQ_DEF}, { 16} },             
    { {     272}, {  1} }, // lines    
    { {     273}, {  2} }, // line     
    { {     274}, {  3} }, // sphereDef
    { {     275}, {  4} }, // atomDef  
    { {     276}, {  5} }, // parameter
    { {     259}, {  6} }, // SPHERE   
    { {     260}, {  7} }, // ATOM     
    { {     261}, {  8} }, // ST       
    { {     262}, {  9} }, // RLAUNCH  
    { {     263}, { 10} }, // HUNITS   
    { {     264}, { 11} }, // UNITS    
    { {     265}, { 12} }, // TEMP     
    { {     266}, { 13} }, // MASS     
    { {     267}, { 14} }, // VISCOSITY
    { {     268}, { 15} }, // BF       
    { {       0}, { -1} },             
};

SR__ s_1[] =
{
    { { REQ_TOKEN}, {            2} }, 
    { {     _EOF_}, { PARSE_ACCEPT} }, 
    { {         0}, {            0} }, 
};

SR__ s_2[] =
{
    { { REQ_DEF}, { 16} },             
    { {     272}, { 16} }, // lines    
    { {     273}, {  2} }, // line     
    { {     274}, {  3} }, // sphereDef
    { {     275}, {  4} }, // atomDef  
    { {     276}, {  5} }, // parameter
    { {     259}, {  6} }, // SPHERE   
    { {     260}, {  7} }, // ATOM     
    { {     261}, {  8} }, // ST       
    { {     262}, {  9} }, // RLAUNCH  
    { {     263}, { 10} }, // HUNITS   
    { {     264}, { 11} }, // UNITS    
    { {     265}, { 12} }, // TEMP     
    { {     266}, { 13} }, // MASS     
    { {     267}, { 14} }, // VISCOSITY
    { {     268}, { 15} }, // BF       
    { {       0}, { -1} },             
};

SR__ s_3[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -3} }, 
};

SR__ s_4[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -4} }, 
};

SR__ s_5[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -5} }, 
};

SR__ s_6[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 17} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_7[] =
{
    { { REQ_TOKEN}, {  2} },       
    { {       257}, { 20} }, // INT
    { {         0}, {  0} },       
};

SR__ s_8[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 21} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_9[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 22} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_10[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 23} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_11[] =
{
    { { REQ_TOKEN}, {  3} },          
    { {       278}, { 24} }, // string
    { {       269}, { 25} }, // STRING
    { {         0}, {  0} },          
};

SR__ s_12[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 26} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_13[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 27} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_14[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 28} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_15[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 29} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_16[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -2} }, 
};

SR__ s_17[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 30} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_18[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -17} }, 
};

SR__ s_19[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -18} }, 
};

SR__ s_20[] =
{
    { { REQ_TOKEN}, {  2} },          
    { {       269}, { 31} }, // STRING
    { {         0}, {  0} },          
};

SR__ s_21[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -9} }, 
};

SR__ s_22[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -10} }, 
};

SR__ s_23[] =
{
    { { REQ_TOKEN}, {  3} },          
    { {       278}, { 32} }, // string
    { {       269}, { 25} }, // STRING
    { {         0}, {  0} },          
};

SR__ s_24[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -12} }, 
};

SR__ s_25[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -19} }, 
};

SR__ s_26[] =
{
    { { REQ_TOKEN}, {  3} },          
    { {       278}, { 33} }, // string
    { {       269}, { 25} }, // STRING
    { {         0}, {  0} },          
};

SR__ s_27[] =
{
    { { REQ_TOKEN}, {  3} },          
    { {       278}, { 34} }, // string
    { {       269}, { 25} }, // STRING
    { {         0}, {  0} },          
};

SR__ s_28[] =
{
    { { REQ_TOKEN}, {  3} },          
    { {       278}, { 35} }, // string
    { {       269}, { 25} }, // STRING
    { {         0}, {  0} },          
};

SR__ s_29[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -16} }, 
};

SR__ s_30[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 36} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_31[] =
{
    { { REQ_TOKEN}, {  2} },          
    { {       269}, { 37} }, // STRING
    { {         0}, {  0} },          
};

SR__ s_32[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -11} }, 
};

SR__ s_33[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -13} }, 
};

SR__ s_34[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -14} }, 
};

SR__ s_35[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -15} }, 
};

SR__ s_36[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 38} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_37[] =
{
    { { REQ_TOKEN}, {  3} },          
    { {       269}, { 39} }, // STRING
    { {       257}, { 40} }, // INT   
    { {         0}, {  0} },          
};

SR__ s_38[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -6} }, 
};

SR__ s_39[] =
{
    { { REQ_TOKEN}, {  2} },       
    { {       257}, { 41} }, // INT
    { {         0}, {  0} },       
};

SR__ s_40[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 42} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_41[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 43} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_42[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 44} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_43[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 45} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_44[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 46} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_45[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 47} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_46[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 48} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_47[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 49} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_48[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 50} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_49[] =
{
    { { REQ_TOKEN}, {  4} },         
    { {       277}, { 51} }, // real 
    { {       258}, { 18} }, // FLOAT
    { {       257}, { 19} }, // INT  
    { {         0}, {  0} },         
};

SR__ s_50[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -8} }, 
};

SR__ s_51[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -7} }, 
};


// State array:
SR__ *s_state[] =
{
  s_0,  s_1,  s_2,  s_3,  s_4,  s_5,  s_6,  s_7,  s_8,  s_9,
  s_10,  s_11,  s_12,  s_13,  s_14,  s_15,  s_16,  s_17,  s_18,  s_19,
  s_20,  s_21,  s_22,  s_23,  s_24,  s_25,  s_26,  s_27,  s_28,  s_29,
  s_30,  s_31,  s_32,  s_33,  s_34,  s_35,  s_36,  s_37,  s_38,  s_39,
  s_40,  s_41,  s_42,  s_43,  s_44,  s_45,  s_46,  s_47,  s_48,  s_49,
  s_50,  s_51,
};

} // anonymous namespace ends



// If the parsing function call uses arguments, then provide an overloaded
// function.  The code below doesn't rely on parameters, so no arguments are
// required.  Furthermore, parse uses a function try block to allow us to do
// ACCEPT and ABORT from anywhere, even from within members called by actions,
// simply throwing the appropriate exceptions.

ParserBase::ParserBase()
:
    d_stackIdx__(-1),
    // $insert debuginit
    d_debug__(false),
    d_nErrors__(0),
    // $insert requiredtokens
    d_requiredTokens__(0),
    d_acceptedTokens__(d_requiredTokens__),
    d_token__(_UNDETERMINED_),
    d_nextToken__(_UNDETERMINED_)
{}


void Parser::print__()
{
// $insert print
}

void ParserBase::clearin()
{
    d_token__ = d_nextToken__ = _UNDETERMINED_;
}

void ParserBase::push__(size_t state)
{
    if (static_cast<size_t>(d_stackIdx__ + 1) == d_stateStack__.size())
    {
        size_t newSize = d_stackIdx__ + STACK_EXPANSION;
        d_stateStack__.resize(newSize);
        d_valueStack__.resize(newSize);
    }
    ++d_stackIdx__;
    d_stateStack__[d_stackIdx__] = d_state__ = state;
    *(d_vsp__ = &d_valueStack__[d_stackIdx__]) = d_val__;
}

void ParserBase::popToken__()
{
    d_token__ = d_nextToken__;

    d_val__ = d_nextVal__;
    d_nextVal__ = STYPE__();

    d_nextToken__ = _UNDETERMINED_;
}
     
void ParserBase::pushToken__(int token)
{
    d_nextToken__ = d_token__;
    d_nextVal__ = d_val__;
    d_token__ = token;
}
     
void ParserBase::pop__(size_t count)
{
    if (d_stackIdx__ < static_cast<int>(count))
    {
        ABORT();
    }

    d_stackIdx__ -= count;
    d_state__ = d_stateStack__[d_stackIdx__];
    d_vsp__ = &d_valueStack__[d_stackIdx__];
}

inline size_t ParserBase::top__() const
{
    return d_stateStack__[d_stackIdx__];
}

void Parser::executeAction(int production)
try
{
    if (d_token__ != _UNDETERMINED_)
        pushToken__(d_token__);     // save an already available token

                                    // save default non-nested block $$
    if (int size = s_productionInfo[production].d_size)
        d_val__ = d_vsp__[1 - size];

    switch (production)
    {
        // $insert actioncases
        
        case 6:
#line 29 "grammar"
        {
         addSphere(d_vsp__[-3].data<Tag__::FLOAT_TYPE>(), d_vsp__[-2].data<Tag__::FLOAT_TYPE>(), d_vsp__[-1].data<Tag__::FLOAT_TYPE>(), d_vsp__[0].data<Tag__::FLOAT_TYPE>());
         }
        break;

        case 7:
#line 37 "grammar"
        {
         addSphere(d_vsp__[-4].data<Tag__::FLOAT_TYPE>(), d_vsp__[-3].data<Tag__::FLOAT_TYPE>(), d_vsp__[-2].data<Tag__::FLOAT_TYPE>(), d_vsp__[0].data<Tag__::FLOAT_TYPE>());
         }
        break;

        case 8:
#line 43 "grammar"
        {
         addSphere(d_vsp__[-4].data<Tag__::FLOAT_TYPE>(), d_vsp__[-3].data<Tag__::FLOAT_TYPE>(), d_vsp__[-2].data<Tag__::FLOAT_TYPE>(), d_vsp__[0].data<Tag__::FLOAT_TYPE>());
         }
        break;

        case 9:
#line 50 "grammar"
        {
         setST(d_vsp__[0].data<Tag__::FLOAT_TYPE>());
         }
        break;

        case 10:
#line 55 "grammar"
        {
         setRLAUNCH(d_vsp__[0].data<Tag__::FLOAT_TYPE>());
         }
        break;

        case 11:
#line 60 "grammar"
        {
         setHUNITS(d_vsp__[-1].data<Tag__::FLOAT_TYPE>(), d_vsp__[0].data<Tag__::STRING_TYPE>());
         }
        break;

        case 12:
#line 65 "grammar"
        {
         setUNITS(d_vsp__[0].data<Tag__::STRING_TYPE>());
         }
        break;

        case 13:
#line 70 "grammar"
        {
         setTEMP(d_vsp__[-1].data<Tag__::FLOAT_TYPE>(), d_vsp__[0].data<Tag__::STRING_TYPE>());
         }
        break;

        case 14:
#line 75 "grammar"
        {
         setMASS(d_vsp__[-1].data<Tag__::FLOAT_TYPE>(), d_vsp__[0].data<Tag__::STRING_TYPE>());
         }
        break;

        case 15:
#line 80 "grammar"
        {
         setVISCOSITY(d_vsp__[-1].data<Tag__::FLOAT_TYPE>(), d_vsp__[0].data<Tag__::STRING_TYPE>());
         }
        break;

        case 16:
#line 85 "grammar"
        {
         setBF(d_vsp__[0].data<Tag__::FLOAT_TYPE>());
         }
        break;

        case 17:
#line 92 "grammar"
        {
         d_val__.get<Tag__::FLOAT_TYPE>() = stod(d_scanner.matched());
         }
        break;

        case 18:
#line 97 "grammar"
        {
         d_val__.get<Tag__::FLOAT_TYPE>() = stod(d_scanner.matched());
         }
        break;

        case 19:
#line 104 "grammar"
        {
         d_val__.get<Tag__::STRING_TYPE>() = d_scanner.matched();
         }
        break;

    }
}
catch (std::exception const &exc)
{
    exceptionHandler__(exc);
}

inline void ParserBase::reduce__(PI__ const &pi)
{
    d_token__ = pi.d_nonTerm;
    pop__(pi.d_size);

}

// If d_token__ is _UNDETERMINED_ then if d_nextToken__ is _UNDETERMINED_ another
// token is obtained from lex(). Then d_nextToken__ is assigned to d_token__.
void Parser::nextToken()
{
    if (d_token__ != _UNDETERMINED_)        // no need for a token: got one
        return;                             // already

    if (d_nextToken__ != _UNDETERMINED_)
    {
        popToken__();                       // consume pending token
    }
    else
    {
        ++d_acceptedTokens__;               // accept another token (see
                                            // errorRecover())
        d_token__ = lex();
        if (d_token__ <= 0)
            d_token__ = _EOF_;
    }
    print();
}

// if the final transition is negative, then we should reduce by the rule
// given by its positive value. Note that the `recovery' parameter is only
// used with the --debug option
int Parser::lookup(bool recovery)
{
    // $insert threading
    SR__ *sr = s_state[d_state__];        // get the appropriate state-table
    int lastIdx = sr->d_lastIdx;        // sentinel-index in the SR__ array

    SR__ *lastElementPtr = sr + lastIdx;
    SR__ *elementPtr = sr + 1;            // start the search at s_xx[1]

    lastElementPtr->d_token = d_token__;// set search-token

    while (elementPtr->d_token != d_token__)
        ++elementPtr;

    if (elementPtr == lastElementPtr)   // reached the last element
    {
        if (elementPtr->d_action < 0)   // default reduction
        {
            return elementPtr->d_action;                
        }

        // No default reduction, so token not found, so error.
        throw UNEXPECTED_TOKEN__;
    }

    // not at the last element: inspect the nature of the action
    // (< 0: reduce, 0: ACCEPT, > 0: shift)

    int action = elementPtr->d_action;


    return action;
}

    // When an error has occurred, pop elements off the stack until the top
    // state has an error-item. If none is found, the default recovery
    // mode (which is to abort) is activated. 
    //
    // If EOF is encountered without being appropriate for the current state,
    // then the error recovery will fall back to the default recovery mode.
    // (i.e., parsing terminates)
void Parser::errorRecovery()
try
{
    if (d_acceptedTokens__ >= d_requiredTokens__)// only generate an error-
    {                                           // message if enough tokens 
        ++d_nErrors__;                          // were accepted. Otherwise
        error("Syntax error");                  // simply skip input

    }


    // get the error state
    while (not (s_state[top__()][0].d_type & ERR_ITEM))
    {
        pop__();
    }

    // In the error state, lookup a token allowing us to proceed.
    // Continuation may be possible following multiple reductions,
    // but eventuall a shift will be used, requiring the retrieval of
    // a terminal token. If a retrieved token doesn't match, the catch below 
    // will ensure the next token is requested in the while(true) block
    // implemented below:

    int lastToken = d_token__;                  // give the unexpected token a
                                                // chance to be processed
                                                // again.

    pushToken__(_error_);                       // specify _error_ as next token
    push__(lookup(true));                       // push the error state

    d_token__ = lastToken;                      // reactivate the unexpected
                                                // token (we're now in an
                                                // ERROR state).

    bool gotToken = true;                       // the next token is a terminal

    while (true)
    {
        try
        {
            if (s_state[d_state__]->d_type & REQ_TOKEN)
            {
                gotToken = d_token__ == _UNDETERMINED_;
                nextToken();                    // obtain next token
            }
            
            int action = lookup(true);

            if (action > 0)                 // push a new state
            {
                push__(action);
                popToken__();

                if (gotToken)
                {

                    d_acceptedTokens__ = 0;
                    return;
                }
            }
            else if (action < 0)
            {
                // no actions executed on recovery but save an already 
                // available token:
                if (d_token__ != _UNDETERMINED_)
                    pushToken__(d_token__);
 
                                            // next token is the rule's LHS
                reduce__(s_productionInfo[-action]); 
            }
            else
                ABORT();                    // abort when accepting during
                                            // error recovery
        }
        catch (...)
        {
            if (d_token__ == _EOF_)
                ABORT();                    // saw inappropriate _EOF_
                      
            popToken__();                   // failing token now skipped
        }
    }
}
catch (ErrorRecovery__)       // This is: DEFAULT_RECOVERY_MODE
{
    ABORT();
}

    // The parsing algorithm:
    // Initially, state 0 is pushed on the stack, and d_token__ as well as
    // d_nextToken__ are initialized to _UNDETERMINED_. 
    //
    // Then, in an eternal loop:
    //
    //  1. If a state does not have REQ_TOKEN no token is assigned to
    //     d_token__. If the state has REQ_TOKEN, nextToken() is called to
    //      determine d_nextToken__ and d_token__ is set to
    //     d_nextToken__. nextToken() will not call lex() unless d_nextToken__ is 
    //     _UNDETERMINED_. 
    //
    //  2. lookup() is called: 
    //     d_token__ is stored in the final element's d_token field of the
    //     state's SR_ array. 
    //
    //  3. The current token is looked up in the state's SR_ array
    //
    //  4. Depending on the result of the lookup() function the next state is
    //     shifted on the parser's stack, a reduction by some rule is applied,
    //     or the parsing function returns ACCEPT(). When a reduction is
    //     called for, any action that may have been defined for that
    //     reduction is executed.
    //
    //  5. An error occurs if d_token__ is not found, and the state has no
    //     default reduction. Error handling was described at the top of this
    //     file.

int Parser::parse()
try 
{
    push__(0);                              // initial state
    clearin();                              // clear the tokens.

    while (true)
    {
        try
        {
            if (s_state[d_state__]->d_type & REQ_TOKEN)
                nextToken();                // obtain next token


            int action = lookup(false);     // lookup d_token__ in d_state__

            if (action > 0)                 // SHIFT: push a new state
            {
                push__(action);
                popToken__();               // token processed
            }
            else if (action < 0)            // REDUCE: execute and pop.
            {
                executeAction(-action);
                                            // next token is the rule's LHS
                reduce__(s_productionInfo[-action]); 
            }
            else 
                ACCEPT();
        }
        catch (ErrorRecovery__)
        {
            errorRecovery();
        }
    }
}
catch (Return__ retValue)
{
    return retValue;
}

// $insert polymorphicImpl
namespace Meta__
{
   Base::~Base()
   {}
}




