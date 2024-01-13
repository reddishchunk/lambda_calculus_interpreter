#ifndef DATA_H
#define DATA_H

typedef enum {int8t, int16t, int32t, int64t
		uint8t, uint16t, uint32t, uint64t
		floatt, doublet
		chart, stringt} Type;

typedef struct data;
struct data {
	Type type;
	union {
		int8_t int8t_val;
		int16_t int16t_val;
		int32_t int32t_val;
		int64_t int64t_val;
		
		uint8_t uint8t_val;
		uint16_t uint16t_val;
		uint32_t uint32t_val;
		uint64_t uint64t_val;

		float float_val;
		double double_val;

		char char_val;
		char *string_val;
	}
};

void set_type(data *d, Type t);
void set_data(data *d, double val);

Type get_type(data *d);

#endif
