//(C) Bigstep.com 
//Helix tests
#include <string.h> 
#include <stdio.h> 
#include <he.h>
#include <string.h>

#define DATASTORE "he://.//dev/sdc"

int main() {

	he_t he;
	he_item item;


	//open helium datastore
	he = he_open(DATASTORE, "DATASTORE", 0, NULL); 
	if (!he) {
		he_perror("he_open"); return -1;
	}

	const char *key="test-key";
	const char *val="test-val";

	item.key=(void*)key;
	item.val=(void*)val;
	item.key_len=strlen(key);
	item.val_len=strlen(val);
	
	//insert a value
	if(he_insert(he, &item))
	{
		he_perror("he_insert");
	}


	//close helium datastore
	if (he_close(he)) {
		he_perror("he_close"); return -2;
	}
}
