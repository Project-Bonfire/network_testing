#include "plasma.h"
#include "ni.h"

int main() {
    unsigned int ni_flags;
    unsigned int flit;
    unsigned int packet_counter;


    while (1)
    {
        packet_counter = memory_read(NI_COUNTER_ADDRESS);
        if(packet_counter > 0)
        {
            ni_flags = ni_read_flags();
            if(((ni_flags & NI_READ_MASK) == 0)){
                flit = ni_read();

            }
        }
        else
        {
            ni_write(0b00100000000011110000000000000000);
            asm("nop");
            asm("nop");
        }

    }

    return 0;
}
