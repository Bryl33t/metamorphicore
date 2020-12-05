#include "../includes/sockets.h"

socket_t *socket_init(config_socket_t sock_info)
{
    socket_t *fd_socket = malloc(sizeof(socket_t));
    int sock;
    #ifdef __linux__
        sock = socket(sock_info.domain, sock_info.type, sock_info.proto);
    #endif

    fd_socket->fd = sock;
    printf("%d\n", fd_socket->fd);
    return(fd_socket);
}


int socket_connect(socket_t *fdsock, char *ip, int port, config_socket_t socket_infos)
{
    struct sockaddr_in si;
    si.sin_addr.s_addr = inet_addr(ip);
    si.sin_port = htons(port);
    si.sin_family = socket_infos.domain;

    int conn = connect(fdsock->fd, (struct sockaddr *)&si, sizeof(si));
    return(conn);
}
