#include "mbed.h"
#include "rtos.h"

#include "WiFiStackInterface.h"
#include "rda_sys_wrapper.h"
#include "rda5981_sniffer.h"

int main(void) {
	WiFiStackInterface wifi;
	printf("Start wifi AP test ...\r\n");

	wifi.init();
	/* - 1 -
	wifi.set_dhcp(true);
	wifi.set_network("192.168.22.1", "255.255.255.0", "192.168.22.1");
	*/
	/* - 2 - */
	wifi.set_network_ap("192.168.22.1", "255.255.255.0", "192.168.22.1", "192.168.22.50", "192.168.22.100");
	wifi.start_ap((const char *)"kyChu_RDA_Wifi", (const char *)"123456789", 6, 0);
	while(1);
}
