#include "timer_test.h"
#include "ni.h"
#include "uart.h"

int main(int argc, char const *argv[]) {

    unsigned int curr_addr = memory_read(NI_NODE_ADDRESS);

    setup_uart(CPU_SPEED, UART_BAUDRATE);
    uart_print_hex(curr_addr);
    uart_putchar('\n');
}
