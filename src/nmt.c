/* This is a managed file. Do not delete this comment. */

#include <include/canopen.h>

int16_t canopen_nmt_construct(
    canopen_nmt this)
{
    this->state = CANOPEN_NMT_BOOT;

    canopen_Heartbeat hb = canopen_Heartbeat__create(
        this,
        "heartbeat",
        this->driver,
        this->dictionary,
        (corto_word)this->state);
    if (!hb) {
        corto_throw("Failed to create heartbeat.");
        goto error;
    }

    return 0;
error:
    return -1;
}
