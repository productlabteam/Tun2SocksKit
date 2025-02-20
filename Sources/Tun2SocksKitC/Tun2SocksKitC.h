#ifndef Tun2SocksKitC_H
#define Tun2SocksKitC_H

#include <sys/types.h>

#define CTLIOCGINFO 0xc0644e03UL

struct ctl_info {
    u_int32_t   ctl_id;
    char        ctl_name[96];
};
struct sockaddr_ctl {
    u_char      sc_len;
    u_char      sc_family;
    u_int16_t   ss_sysaddr;
    u_int32_t   sc_id;
    u_int32_t   sc_unit;
    u_int32_t   sc_reserved[5];
};

#endif /* Tun2SocksKitC_H */
