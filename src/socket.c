#include "../includes/sockets.h"

socket_t *socket_init(config_socket_t sock_info)
{
    socket_t *fd_socket;

    #ifdef __linux__
        int sock = socket(sock_info.domain, sock_info.type, sock_info.proto);
    #endif

    fd_socket->fd = &sock;
    return(fd_socket);
}

void socket_connect(socket_t fd, char *ip, int port, config_socket_t sock_info)
{
    //connection
}
