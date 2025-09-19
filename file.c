#include <stdio.h>
#include <stdint.h>

#include "localnotify.h"

struct file_hdr{
    char str[FILENAME_MAX];
    uint64_t chunk_sz;
    uint64_t file_sz;
};

struct file_chunk{
    char str[FILENAME_MAX];
    uint64_t chunk_sz;
    uint64_t file_sz;
};

register_ln_payload(tst, "wlan0", struct struct_ex, 0)


int main() {
}
