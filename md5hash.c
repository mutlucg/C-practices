/* Mutlu Can Gürbüz, S004451 */
#include <stdio.h>
#include <openssl/md5.h>

int main(int argc, char *argv[]){
    unsigned char c[MD5_DIGEST_LENGTH]; 
    FILE *file = fopen(argv[1],"r");
    int bytes;
    unsigned char data[1024];
    MD5_CTX context;
    
    MD5_Init(&context);
    while((bytes = fread(data,1,1024,file))!=0){
        MD5_Update(&context,data,bytes);
    }
    MD5_Final(c,&context);
    
    printf("%s (MD5): ",argv[1]); 
    for(int i=0;i<MD5_DIGEST_LENGTH;i++){
        printf("%02x",c[i]);
    }
    printf("\n");

    return 0;


}
