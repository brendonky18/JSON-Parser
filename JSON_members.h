
#include <stdbool.h>

// each of the different possible values
typedef enum value_type {
    INVALID_VALUE, 
    BOOL_VALUE,
    NULL_VALUE, 
    NUMBER_VALUE,
    STRING_VALUE,
    ARRAY_VALUE,
    OBJECT_VALUE,
} Value_Type;

// The name of a variable, and that variable's associated value
typedef struct json_variable {
    // Creates linked list of all variables in an object
    struct json_kvp *next;
    struct json_kvp *prev;

    // The type of the variable
    enum value_type *type;

    // The name of the variable
    char *name;

    // The value of the variable
    void *value;
} JSON_Variable;



typedef struct json_object {
    //name of the json_object
    char *name;

    //variables of the object
    struct json_variable *variables;

} JSON_Object;

// Functions for checking the type of the passed variable 
bool is_type    (struct json_variable *var, enum value_type type);
bool is_invalid (struct json_variable *var);
bool is_bool    (struct json_variable *var);
bool is_null    (struct json_variable *var);
bool is_number  (struct json_variable *var);
bool is_string  (struct json_variable *var)
bool is_array   (struct json_variable *var);
bool is_object  (struct json_variable *var);