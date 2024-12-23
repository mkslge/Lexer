typedef enum {
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,
    EQUALS,
    EQUALS_COMPARISON,
    LESS_THAN,
    MORE_THAN,
    LESS_EQUAL_THAN,
    MORE_EQUAL_THAN,
    LEFT_PARENTHESIS,
    RIGHT_PARENTHESIS,
    IF,
    ELSE,
    LEFT_BRACE,
    RIGHT_BRACE,
    INT,
    BOOL,
    AND,
    OR,
    NOT,
    TRUE,
    FALSE,
    SEMICOLON,
    INTEGER,
    BOOLEAN,
    VARIABLE_NAME





} TokenType;


typedef struct  {
    TokenType type;
    char* stringName;
    int integerValue;
    int booleanValue;

} Token;


/* Constructor for token
*/
Token* makeToken(TokenType type, char* name, int integerValue, int booleanValue) {
    Token *newToken = (Token *)malloc(sizeof(Token));
    newToken->type = type;
    newToken->stringName = name;
    newToken->integerValue = integerValue;
    newToken->booleanValue = booleanValue;
    return newToken;
}