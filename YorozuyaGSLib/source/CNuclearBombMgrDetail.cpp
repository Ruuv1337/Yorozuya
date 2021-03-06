#include <CNuclearBombMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNuclearBombMgrctor_CNuclearBombMgr2_ptr CNuclearBombMgrctor_CNuclearBombMgr2_next(nullptr);
        Info::CNuclearBombMgrctor_CNuclearBombMgr2_clbk CNuclearBombMgrctor_CNuclearBombMgr2_user(nullptr);
        
        Info::CNuclearBombMgrCheckNuclearState4_ptr CNuclearBombMgrCheckNuclearState4_next(nullptr);
        Info::CNuclearBombMgrCheckNuclearState4_clbk CNuclearBombMgrCheckNuclearState4_user(nullptr);
        
        Info::CNuclearBombMgrCreateMissile6_ptr CNuclearBombMgrCreateMissile6_next(nullptr);
        Info::CNuclearBombMgrCreateMissile6_clbk CNuclearBombMgrCreateMissile6_user(nullptr);
        
        Info::CNuclearBombMgrDestroy8_ptr CNuclearBombMgrDestroy8_next(nullptr);
        Info::CNuclearBombMgrDestroy8_clbk CNuclearBombMgrDestroy8_user(nullptr);
        
        Info::CNuclearBombMgrGetBossType10_ptr CNuclearBombMgrGetBossType10_next(nullptr);
        Info::CNuclearBombMgrGetBossType10_clbk CNuclearBombMgrGetBossType10_user(nullptr);
        
        Info::CNuclearBombMgrInstance12_ptr CNuclearBombMgrInstance12_next(nullptr);
        Info::CNuclearBombMgrInstance12_clbk CNuclearBombMgrInstance12_user(nullptr);
        
        Info::CNuclearBombMgrIsPatriarch14_ptr CNuclearBombMgrIsPatriarch14_next(nullptr);
        Info::CNuclearBombMgrIsPatriarch14_clbk CNuclearBombMgrIsPatriarch14_user(nullptr);
        
        Info::CNuclearBombMgrLoadIni16_ptr CNuclearBombMgrLoadIni16_next(nullptr);
        Info::CNuclearBombMgrLoadIni16_clbk CNuclearBombMgrLoadIni16_user(nullptr);
        
        Info::CNuclearBombMgrLoop18_ptr CNuclearBombMgrLoop18_next(nullptr);
        Info::CNuclearBombMgrLoop18_clbk CNuclearBombMgrLoop18_user(nullptr);
        
        Info::CNuclearBombMgrMissileInit20_ptr CNuclearBombMgrMissileInit20_next(nullptr);
        Info::CNuclearBombMgrMissileInit20_clbk CNuclearBombMgrMissileInit20_user(nullptr);
        
        Info::CNuclearBombMgrRequest_EnableNuclearControl22_ptr CNuclearBombMgrRequest_EnableNuclearControl22_next(nullptr);
        Info::CNuclearBombMgrRequest_EnableNuclearControl22_clbk CNuclearBombMgrRequest_EnableNuclearControl22_user(nullptr);
        
        Info::CNuclearBombMgrRequest_SelectDropPosition24_ptr CNuclearBombMgrRequest_SelectDropPosition24_next(nullptr);
        Info::CNuclearBombMgrRequest_SelectDropPosition24_clbk CNuclearBombMgrRequest_SelectDropPosition24_user(nullptr);
        
        Info::CNuclearBombMgrSendMsg_Result26_ptr CNuclearBombMgrSendMsg_Result26_next(nullptr);
        Info::CNuclearBombMgrSendMsg_Result26_clbk CNuclearBombMgrSendMsg_Result26_user(nullptr);
        
        
        Info::CNuclearBombMgrdtor_CNuclearBombMgr31_ptr CNuclearBombMgrdtor_CNuclearBombMgr31_next(nullptr);
        Info::CNuclearBombMgrdtor_CNuclearBombMgr31_clbk CNuclearBombMgrdtor_CNuclearBombMgr31_user(nullptr);
        
        
        void CNuclearBombMgrctor_CNuclearBombMgr2_wrapper(struct CNuclearBombMgr* _this)
        {
           CNuclearBombMgrctor_CNuclearBombMgr2_user(_this, CNuclearBombMgrctor_CNuclearBombMgr2_next);
        };
        void CNuclearBombMgrCheckNuclearState4_wrapper(struct CNuclearBombMgr* _this, struct CPlayer* pOne)
        {
           CNuclearBombMgrCheckNuclearState4_user(_this, pOne, CNuclearBombMgrCheckNuclearState4_next);
        };
        bool CNuclearBombMgrCreateMissile6_wrapper(struct CNuclearBombMgr* _this, struct CPlayer* pMaster, float* fPos, unsigned int WarnTime, unsigned int InformTime, unsigned int StartTime)
        {
           return CNuclearBombMgrCreateMissile6_user(_this, pMaster, fPos, WarnTime, InformTime, StartTime, CNuclearBombMgrCreateMissile6_next);
        };
        void CNuclearBombMgrDestroy8_wrapper(struct CNuclearBombMgr* _this)
        {
           CNuclearBombMgrDestroy8_user(_this, CNuclearBombMgrDestroy8_next);
        };
        char CNuclearBombMgrGetBossType10_wrapper(struct CNuclearBombMgr* _this, char byRace, unsigned int dwSerial)
        {
           return CNuclearBombMgrGetBossType10_user(_this, byRace, dwSerial, CNuclearBombMgrGetBossType10_next);
        };
        struct CNuclearBombMgr* CNuclearBombMgrInstance12_wrapper()
        {
           return CNuclearBombMgrInstance12_user(CNuclearBombMgrInstance12_next);
        };
        bool CNuclearBombMgrIsPatriarch14_wrapper(struct CNuclearBombMgr* _this, struct CPlayer* pOne)
        {
           return CNuclearBombMgrIsPatriarch14_user(_this, pOne, CNuclearBombMgrIsPatriarch14_next);
        };
        bool CNuclearBombMgrLoadIni16_wrapper(struct CNuclearBombMgr* _this)
        {
           return CNuclearBombMgrLoadIni16_user(_this, CNuclearBombMgrLoadIni16_next);
        };
        void CNuclearBombMgrLoop18_wrapper(struct CNuclearBombMgr* _this)
        {
           CNuclearBombMgrLoop18_user(_this, CNuclearBombMgrLoop18_next);
        };
        bool CNuclearBombMgrMissileInit20_wrapper(struct CNuclearBombMgr* _this)
        {
           return CNuclearBombMgrMissileInit20_user(_this, CNuclearBombMgrMissileInit20_next);
        };
        bool CNuclearBombMgrRequest_EnableNuclearControl22_wrapper(struct CNuclearBombMgr* _this, int n, char* pMsg)
        {
           return CNuclearBombMgrRequest_EnableNuclearControl22_user(_this, n, pMsg, CNuclearBombMgrRequest_EnableNuclearControl22_next);
        };
        bool CNuclearBombMgrRequest_SelectDropPosition24_wrapper(struct CNuclearBombMgr* _this, int n, char* pMsg)
        {
           return CNuclearBombMgrRequest_SelectDropPosition24_user(_this, n, pMsg, CNuclearBombMgrRequest_SelectDropPosition24_next);
        };
        void CNuclearBombMgrSendMsg_Result26_wrapper(struct CNuclearBombMgr* _this, int n, char byCode)
        {
           CNuclearBombMgrSendMsg_Result26_user(_this, n, byCode, CNuclearBombMgrSendMsg_Result26_next);
        };
        
        void CNuclearBombMgrdtor_CNuclearBombMgr31_wrapper(struct CNuclearBombMgr* _this)
        {
           CNuclearBombMgrdtor_CNuclearBombMgr31_user(_this, CNuclearBombMgrdtor_CNuclearBombMgr31_next);
        };
        
        ::std::array<hook_record, 14> CNuclearBombMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14013a2b0L,
                (LPVOID *)&CNuclearBombMgrctor_CNuclearBombMgr2_user,
                (LPVOID *)&CNuclearBombMgrctor_CNuclearBombMgr2_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrctor_CNuclearBombMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CNuclearBombMgr::*)())&CNuclearBombMgr::ctor_CNuclearBombMgr)
            },
            _hook_record {
                (LPVOID)0x14013a850L,
                (LPVOID *)&CNuclearBombMgrCheckNuclearState4_user,
                (LPVOID *)&CNuclearBombMgrCheckNuclearState4_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrCheckNuclearState4_wrapper),
                (LPVOID)cast_pointer_function((void(CNuclearBombMgr::*)(struct CPlayer*))&CNuclearBombMgr::CheckNuclearState)
            },
            _hook_record {
                (LPVOID)0x14013b3f0L,
                (LPVOID *)&CNuclearBombMgrCreateMissile6_user,
                (LPVOID *)&CNuclearBombMgrCreateMissile6_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrCreateMissile6_wrapper),
                (LPVOID)cast_pointer_function((bool(CNuclearBombMgr::*)(struct CPlayer*, float*, unsigned int, unsigned int, unsigned int))&CNuclearBombMgr::CreateMissile)
            },
            _hook_record {
                (LPVOID)0x14013a460L,
                (LPVOID *)&CNuclearBombMgrDestroy8_user,
                (LPVOID *)&CNuclearBombMgrDestroy8_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrDestroy8_wrapper),
                (LPVOID)cast_pointer_function((void(CNuclearBombMgr::*)())&CNuclearBombMgr::Destroy)
            },
            _hook_record {
                (LPVOID)0x14013a7c0L,
                (LPVOID *)&CNuclearBombMgrGetBossType10_user,
                (LPVOID *)&CNuclearBombMgrGetBossType10_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrGetBossType10_wrapper),
                (LPVOID)cast_pointer_function((char(CNuclearBombMgr::*)(char, unsigned int))&CNuclearBombMgr::GetBossType)
            },
            _hook_record {
                (LPVOID)0x14013a3a0L,
                (LPVOID *)&CNuclearBombMgrInstance12_user,
                (LPVOID *)&CNuclearBombMgrInstance12_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrInstance12_wrapper),
                (LPVOID)cast_pointer_function((struct CNuclearBombMgr*(*)())&CNuclearBombMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x14013aad0L,
                (LPVOID *)&CNuclearBombMgrIsPatriarch14_user,
                (LPVOID *)&CNuclearBombMgrIsPatriarch14_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrIsPatriarch14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNuclearBombMgr::*)(struct CPlayer*))&CNuclearBombMgr::IsPatriarch)
            },
            _hook_record {
                (LPVOID)0x14013a5e0L,
                (LPVOID *)&CNuclearBombMgrLoadIni16_user,
                (LPVOID *)&CNuclearBombMgrLoadIni16_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrLoadIni16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNuclearBombMgr::*)())&CNuclearBombMgr::LoadIni)
            },
            _hook_record {
                (LPVOID)0x14013b650L,
                (LPVOID *)&CNuclearBombMgrLoop18_user,
                (LPVOID *)&CNuclearBombMgrLoop18_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrLoop18_wrapper),
                (LPVOID)cast_pointer_function((void(CNuclearBombMgr::*)())&CNuclearBombMgr::Loop)
            },
            _hook_record {
                (LPVOID)0x14013a4f0L,
                (LPVOID *)&CNuclearBombMgrMissileInit20_user,
                (LPVOID *)&CNuclearBombMgrMissileInit20_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrMissileInit20_wrapper),
                (LPVOID)cast_pointer_function((bool(CNuclearBombMgr::*)())&CNuclearBombMgr::MissileInit)
            },
            _hook_record {
                (LPVOID)0x14013ab60L,
                (LPVOID *)&CNuclearBombMgrRequest_EnableNuclearControl22_user,
                (LPVOID *)&CNuclearBombMgrRequest_EnableNuclearControl22_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrRequest_EnableNuclearControl22_wrapper),
                (LPVOID)cast_pointer_function((bool(CNuclearBombMgr::*)(int, char*))&CNuclearBombMgr::Request_EnableNuclearControl)
            },
            _hook_record {
                (LPVOID)0x14013ae80L,
                (LPVOID *)&CNuclearBombMgrRequest_SelectDropPosition24_user,
                (LPVOID *)&CNuclearBombMgrRequest_SelectDropPosition24_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrRequest_SelectDropPosition24_wrapper),
                (LPVOID)cast_pointer_function((bool(CNuclearBombMgr::*)(int, char*))&CNuclearBombMgr::Request_SelectDropPosition)
            },
            _hook_record {
                (LPVOID)0x14013b5b0L,
                (LPVOID *)&CNuclearBombMgrSendMsg_Result26_user,
                (LPVOID *)&CNuclearBombMgrSendMsg_Result26_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrSendMsg_Result26_wrapper),
                (LPVOID)cast_pointer_function((void(CNuclearBombMgr::*)(int, char))&CNuclearBombMgr::SendMsg_Result)
            },
            _hook_record {
                (LPVOID)0x14013a330L,
                (LPVOID *)&CNuclearBombMgrdtor_CNuclearBombMgr31_user,
                (LPVOID *)&CNuclearBombMgrdtor_CNuclearBombMgr31_next,
                (LPVOID)cast_pointer_function(CNuclearBombMgrdtor_CNuclearBombMgr31_wrapper),
                (LPVOID)cast_pointer_function((void(CNuclearBombMgr::*)())&CNuclearBombMgr::dtor_CNuclearBombMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
