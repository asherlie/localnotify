#include "localnotify.h"

register_ln_payload(tst, "wlp3s0", int, 0)

int main() {
    _Bool success; 
    struct in_addr addr;

    broadcast_tst(3);
    recv_tst(&success, &addr);
}
