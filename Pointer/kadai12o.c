#include<stdio.h>
main() {
	char* p = "pointer test program";
	char save[256];
	
	
    int i = 0;
    while (p[i] != '\0') {
        save[i] = p[i];
        i++;
    }
    save[i] = '\0';
    
    printf("”z—ñ@save[]= %s\n", save);

    

}