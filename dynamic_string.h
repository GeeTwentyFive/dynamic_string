#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {

	char* data;
	size_t length;

} String;



void string_free(String* string) { free(string->data); }



int string_append(String* string, char* append_data, size_t append_data_len) {

	if (append_data_len == 0) { append_data_len = strlen(append_data); }

	string->data = realloc(string->data, string->length + append_data_len);
	if (string->data == NULL) { puts("ERROR: realloc() failed in string_append()"); return -1; }

	memcpy(string->data + string->length, append_data, append_data_len);

	string->length += append_data_len;

	return 0;

}
