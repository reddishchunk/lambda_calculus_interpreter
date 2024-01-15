/* LICENSE: MPL2.0 (SEE LICENSE FILE FOR MORE INFORMATION)
 * AUTHOR: reddishchunk
 * DATE: 2024-01-14
 */

#include "stdio.h"
#include "eval.h"

void eval(Operation op, data *in1, data *in2, data **out, int line_num) {
	*out->type = promo_dtype(*in1, *in2);
	
	double ret;

	switch (op) {
		case add:
			ret = (double)in1 + (double)in2;
			break;
		case sub:
			ret = (double)in1 + (double)in2;
			break;
		case mult:
			ret = (double)in1 * (double)in2;
			break;
		case div:
			ret = (double)in1 / (double)in2;
			break;
		default:
			printf("Invalid operation in evaluator. See source code line %i\n", line_num);
			break;
	}

	switch (*out->type) {
		case int8t:
			*out->int8t = (int8_t)ret;
			break;
		case int16t:
			*out->int16t = (int16_t)ret;
			break;
		case int32t:
			*out->int32t = (int32_t)ret;
			break;
		case int64t:
			*out->int64t = (int64_t)ret;
			break;

		case uint8t:
			*out->int8t = (int8_t)ret;
			break;
		case uint16t:
			*out->int16t = (int16_t)ret;
			break;
		case uint32t:
			*out->int32t = (int32_t)ret;
			break;
		case uint64t:
			*out->int64t = (int64_t)ret;
			break;

		case floatt:
			*out->floatt = (float)ret;
			break;
		case doublet:
			*out->doublet = (double)ret;
			break;

		default:
			break;
	}
}
