LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := mtk_symbols.cpp

LOCAL_SHARED_LIBRARIES := libbinder libcutils libutils liblog libicuuc libui libcrypto
LOCAL_MODULE := libmtk_symbols
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)
