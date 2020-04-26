#include <stdio.h>
#include <rpc/rpc.h>
#include "remtime.h"

#define SERVER "localhost"

int main(){
    CLIENT *cliente;
    datestr *resstring;

    client = clnt_create(server,REMTIMEPROG, REMTIMEPROG, REMTIMEVERS,"tcp");

    if(client == NULL){
        printf("Cannot connect to server\n");
        clnt_pcreateerror(SERVER);
        exit(1);
    }

    resstring=getdatestr_1(NULL,client);
    printf("%s",*resstring);



    return 0;
}