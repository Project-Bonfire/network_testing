#include "bonfire.h"
#include "packets.h"
#include "uart.h"

BONFIRE_MAIN()
{
    //uart_puts("Node 2 started.\n")
    int test = 0;

    BONFIRE_LOOP()
    {
        bonfire_send(build_header(3,3));
        test++;
        bonfire_send(test);
        test++;
        bonfire_send(test);
    }

    BONFIRE_RET();
}
