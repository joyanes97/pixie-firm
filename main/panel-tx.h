
#ifndef __PANEL_TX_H__
#define __PANEL_TX_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#include "firefly-tx.h"


bool pushPanelTx(FfxDataResult *tx);

// Extensions provided for Info Panels (see panel-tx.c)
bool appendAddress(void *info, const char* title, FfxDataResult address);
bool appendData(void *info, const char* title, FfxDataResult data);
bool appendDecimal(void *info, const char *title, uint8_t decimals,
  FfxDataResult value);
//void appendDevice(void *info, const char* title);
bool appendNetwork(void *info, FfxDataResult chainId);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __PANEL_TX_H__ */
