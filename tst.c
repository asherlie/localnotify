#include "localnotify.h"

register_ln_payload(tst, "wlp3s0", int, 0)

int main() {
    _Bool success; 
    struct in_addr addr;
    int r;

    broadcast_tst(3);
    r = recv_tst(&success, &addr);

    if (success) {
        printf("succesfully received: %i\n", r);
    }
}
