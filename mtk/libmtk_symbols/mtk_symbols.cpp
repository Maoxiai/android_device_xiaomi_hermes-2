#include <ui/GraphicBufferMapper.h>
#include <ui/Rect.h>
#include <utils/Errors.h>

extern "C" {
#if 0
    void _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(buffer_handle_t, uint32_t, const android::Rect&, void**);

    void _ZN7android19GraphicBufferMapper4lockEPK13native_handleiRKNS_4RectEPPv(buffer_handle_t handle, int usage, const android::Rect& bounds, void** vaddr) {
        _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(handle, static_cast<uint32_t>(usage), bounds, vaddr);
    }

    void _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(buffer_handle_t, uint32_t, const android::Rect&, android_ycbcr*);

    void _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handleiRKNS_4RectEP13android_ycbcr(buffer_handle_t handle, int usage, const android::Rect& bounds, android_ycbcr *ycbcr) {
        _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(handle, static_cast<uint32_t>(usage), bounds, ycbcr);
    }
#endif

    void _ZN7android13AwesomePlayer24mtk_omx_get_current_timeEPx(long long* time){
        time = (long long*)-1;
    }

    bool _ZN7android11AudioSystem24getVoiceUnlockDLInstanceEv(){
        return 0;
    }

    int _ZN7android11AudioSystem23GetVoiceUnlockDLLatencyEv(){
        return 0;
    }

    int _ZN7android11AudioSystem17SetVoiceUnlockSRCEjj(uint32_t outSR, uint32_t outChannel){
        return 0;
    }

    bool _ZN7android11AudioSystem18startVoiceUnlockDLEv(){
        return 0;
    }

    int _ZN7android11AudioSystem15ReadRefFromRingEPvjS1_(void*buf, uint32_t datasz, void* DLtime){
        return 0;
    }

    int _ZN7android11AudioSystem20GetVoiceUnlockULTimeEPv(void* DLtime) {
        return 0;
    }

    void _ZN7android11AudioSystem25freeVoiceUnlockDLInstanceEv(){}

    bool _ZN7android11AudioSystem17stopVoiceUnlockDLEv(){
        return 0;
    }

    int _ZN7android11AudioSystem12SetAudioDataEijPv(int par1,size_t byte_len,void *ptr) {
        return 0;
    }

    int _ZN7android11AudioSystem15SetAudioCommandEii(int var1,int var2) {
        return 0;
    }

    int _ZN7android11AudioSystem15GetAudioCommandEiPi(int var1) {
        return 0;
    }
}