/* Mutlu Can Gürbüz, S004451 */

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
    const char *const pass = argv[1];

    char entry[20];
    int accepted;
    int allowedTries = 3; 
	
    printf("Enter password: ");
    fgets(entry,20,stdin);
    entry[strcspn(entry, "\r\n")] = 0;
   
    if(strcmp(entry, pass) == 0){
	printf("Correct Password!\n");
  	return 0;
    }
   
    while(allowedTries > 0){
        printf("Try again (%d): ", allowedTries--);  
        fgets(entry,20,stdin);
	entry[strcspn(entry, "\r\n")] = 0;
	if(strcmp(entry, pass) == 0){
	    printf("Correct password!\n"); break;
	}
    }
  
    return 0;
}


