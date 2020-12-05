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

    char ip[] = "127.0.0.1\0";
    int port = 1337;

    socket_t *init_sock = socket_init(sock_info);

    printf("fd socket => %d\n", init_sock->fd);

    int conn = socket_connect(init_sock, ip, port, sock_info);
    printf("conn => %d\n", conn);
    
    free(init_sock);
    return(0);
}