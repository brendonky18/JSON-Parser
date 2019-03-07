//iterates while there is still file to read

//TODO: everything w/o a star

//*  { indicates start of JSON object
//*     reads "<string>" : indicating name/value pair
//*         calls method to read the value, value could be an array, an object or a json_primitive
//*             [ indicates start of an array
//*                 calls method to read the value, value could be an array, an object or a json_primitive
//*                 reads until , indicates end of the object
//*                 iterates until reads ], indicates then end of the array
//*             { indicates the start of an object
//                  recurse
//              [NOT IMPLEMENTED] reads null, indicates null object
//*             else: value is a primitive
//                  reads true/false, indicates boolean
//                  reads "<string>", indicates a string
//                  reads <numbers>, indicates an unsigned int
//                      NOTE: this does not support negatives, decimals, or scientific notation
//          reads , indicates another string/value pair is after, iterate while there are commas
//      read until }, indicates end of object







