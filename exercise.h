#pragma once

typedef struct NinjalangVar {
	char type;
	char is_constant;
	int value;

	int scope_level; 
	char *name;
} ninjalang_var_t;
