// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct INTERNET_AUTH_NOTIFY_DATA
    {
        unsigned int cbStruct;
        unsigned int dwOptions;
        unsigned int (WINAPIV *pfnNotify)(unsigned __int64, unsigned int, void *);
        unsigned __int64 dwContext;
    };
END_ATF_NAMESPACE
