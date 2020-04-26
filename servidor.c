#include <rpc/rpc.h>
#include <time.h>
#include "remtime.h"

date *getdatestr_1_svc(void *x, struct svc_req *y){

    static char buf[MAXSTRLEN];
    static char *cp;
    static datestr *dp;
    time_t secs;

    secs = time (NULL);
    stcpy(buf,ctime(&secs));
    cp=buf;
    dp=&cp;

    return dp;

}