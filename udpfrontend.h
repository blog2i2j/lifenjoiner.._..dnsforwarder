#ifndef UDPFRONTEND_H_INCLUDED
#define UDPFRONTEND_H_INCLUDED

#include "readconfig.h"

void UdpFrontend_StartWork(void);

int UdpFrontend_Init(ConfigFileInfo *ConfigInfo, BOOL StartWork);

#endif /* UDPFRONTEND_H_INCLUDED */
