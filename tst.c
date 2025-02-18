#include "localnotify.h"

struct struct_ex{
    int i;
    char str[6];
    float f;
};

register_ln_payload(tst, "wlp3s0", struct struct_ex, 0)

int main() {
    _Bool success; 
    struct in_addr addr;
    struct struct_ex r = {0};

    memcpy(r.str, "asher", 5);
    broadcast_tst(r);
    r = recv_tst(&success, &addr);

    if (success) {
        printf("succesfully received: {%i, %s, %f}\n", r.i, r.str, r.f);
    }
}
