#include <stdio.h>
#include <stdlib.h>
#include "includes/server/server.h"
#include "includes/client/client.h"
#include "includes/sockets.h"

int main(int argc, char **argv)
{
    config_socket_t sock_info;
    sock_info.domain = AF_INET;
    sock_info.type = SOCK_STREAM;
    sock_info.proto = 0; 

    socket_t *init_sock = socket_init(sock_info);
    
    
    return(0);
}