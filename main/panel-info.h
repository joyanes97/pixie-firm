
#ifndef __PANEL_INFO_H__
#define __PANEL_INFO_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
#define COLOR_CANCEL        (COLOR_RED)
#define COLOR_APPROVE       (COLOR_GREEN)
#define COLOR_BACK          (COLOR_BLUE)


typedef union InfoClickArg {
    int value;
    void* ptr;
    FfxDataResult data;
} InfoClickArg;


typedef int (*InfoInitFunc)(void *info, void *state, void *initArg);

typedef void (*InfoClickFunc)(void *state, InfoClickArg clickArg);


void appendTitle(void *info, const char* title);

void appendEntry(void *info, const char* heading, const char* value,
  InfoClickFunc clickFunc, InfoClickArg clickArg);

//void appendQR(void *info, const char* text);
//void appendQRData(void *info, const uint8_t* data, size_t length);

void appendButton(void *info, const char* label, color_ffxt color,
  InfoClickFunc clickFunc, InfoClickArg clickArg);

// FfxInfoInitFunc FfxInfoClickFunc FfxInfoArg
// ffx_pushInfo ffx_appendInfoTitle ffx_appendInfoButton ffx_appendInfoEntry
int pushPanelInfo(InfoInitFunc initFunc, size_t stateSize, void *initArg);

*/
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __PANEL_INFO_H__ */
