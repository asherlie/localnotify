#include <stdio.h>
#include <stdint.h>

#include "localnotify.h"

// add a shasum
struct file_hdr{
    char str[FILENAME_MAX];
    uint64_t chunk_sz;
    uint64_t file_sz;
};

// this struct is also used to request a fill-in. this is marked by chunk_sz being set to 0, can just use chunk == NULL if i remove chunk_sz
struct file_chunk{
    uint32_t chunk_idx;
    // this is somewhat redundant - only necessary for last chunk, even so, recipients can just deduce size of last chunk
    uint64_t chunk_sz;
    uint8_t* chunk;
};

register_ln_payload(file_hdr, "wlan0", struct file_hdr, 0)
register_ln_payload(file_chunk, "wlan0", struct file_chunk, 1)


int main() {
}
