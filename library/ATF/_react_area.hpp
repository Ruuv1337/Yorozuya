// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <AREA_DEF_TYPE.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _react_area
    {
        struct DUMMY
        {
            struct _dummy_position *pPos;
        };
        struct BLOCK
        {
            struct __dummy_block *pBlk;
        };
        union OBJ
        {
            DUMMY dummy;
            BLOCK block;
        };
        AREA_DEF_TYPE AreaDefType;
        OBJ obj;
    public:
        _react_area();
        void ctor__react_area();
        void copy(struct _react_area* pObj);
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_react_area, 16>(), "_react_area");
END_ATF_NAMESPACE
