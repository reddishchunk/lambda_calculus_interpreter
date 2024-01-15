#ifndef EVAL_H
#define EVAL_H

#include "data.h"

/* functionality needed:
 * evaluation of final constant tokens in the parse tree
 */

void eval(Operation op, data *in1, data *in2, data *out, int line_num);

#endif
