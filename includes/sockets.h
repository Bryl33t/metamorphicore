#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>

#ifdef __linux__
    #include <sys/socket.h>
#elif defined __WIN64
    #include <winsock2.h>
#endif

typedef enum _bool Bool;

enum _bool {
   false = 0,
   true = 1
};

typedef struct 
{
    int fd;
} socket_t;

typedef struct 
{
    int domain;
    int type;
    int proto;
}config_socket_t;


socket_t *socket_init(config_socket_t sock_info);
int socket_connect(socket_t *fdsock, char *ip, int port, config_socket_t socket_infos);