#include "data.h"

void set_type(data *d, Type t) {
	d->type = t;
}

void set_data(data *d, double val) {
	
	switch Type {
		case int8t:
			d->int8it_val = (int8_t)val;
			break;
		case int16t:
			d->int16t_val = (int16_t)val;
			break;
		case int32t:
			d->int32t_val = (int32_t)val;
			break;
		case int64t:
			d->int64t_val = (int64_t)val;
			break;
		
		case uint8t:
			d->uint8t_val = (uint8_t)val;
			break;
		case uint16t:
			d->uint16t_val = (uint16_t)val;
			break;
		case uint32t:
			d->uint32t_val = (uint32_t)val;
			break;
		case uint64t:
			d->uint64t_val = (uint64_t)val;
			break;

		case chart:
			d->chart_val = (char)val;
			break;
		case stringt:
			d->stringt_val = (char)val;
			break;

		default:
			break;
	}
}

Type get_type(data *d) {
	return d->type;
}
