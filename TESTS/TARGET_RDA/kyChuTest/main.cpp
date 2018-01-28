#include "mbed.h"
#include "rtos.h"

#include "WiFiStackInterface.h"
#include "rda_sys_wrapper.h"
#include "rda5981_sniffer.h"

char IP[4] = {192, 168, 22, 1};
char GW[4] = {192, 168, 22, 1};
char MSK[4] = {255, 255, 255, 0};

char DHCP_S[4] = {192, 168, 22, 50};
char DHCP_E[4] = {192, 168, 22, 100};

int main(void) {
	WiFiStackInterface wifi;
	printf("Start wifi AP test ...\r\n");

	wifi.init();
	/* - 1 -
	wifi.set_dhcp(true);
	wifi.set_network((const char *)IP, (const char *)MSK, (const char *)GW);
	*/
	/* - 2 - */
	wifi.set_network_ap((const char *)IP, (const char *)MSK, (const char *)GW, (const char *)DHCP_S, (const char *)DHCP_E);
	wifi.start_ap((const char *)"kyChu_RDA_Wifi", (const char *)"123456789", 6, 0);
	while(1);
}
