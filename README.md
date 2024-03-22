# Usage
```
String string = {0};

string_append(&string, "Hello,", 6);
string_append(&string, " World!", 0); // if 3rd arg is 0, length of 2nd arg is searched via strlen()

string_free(&string);
```

<br>
<br>

# Example
```
#include <stdio.h>

#include "dynamic_string.h"



int main() {

	String string = {0};



	if (string_append(&string, "Hello,", 6) != 0) { puts("ERROR: string_append() failed in main()"); return -1; }

	if (string_append(&string, " World!", 0) != 0) { puts("ERROR: string_append() failed in main()"); return -1; }



	puts(string.data);



	string_free(&string);

	return 0;

}
```
