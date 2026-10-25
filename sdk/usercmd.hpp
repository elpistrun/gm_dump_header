// Auto-generated GMod x64 SDK — usercmd.hpp
#pragma once
#include <cstdint>

namespace SDK {
    struct Vector3D { float x, y, z; };
    struct QAngle   { float pitch, yaw, roll; };

    struct CUserCmd {
        virtual ~CUserCmd() {};
        int       command_number;     // 0x08
        int       tick_count;         // 0x0C
        QAngle    viewangles;         // 0x10
        float     forwardmove;        // 0x1C
        float     sidemove;           // 0x20
        float     upmove;             // 0x24
        int       buttons;            // 0x28
        uint8_t   impulse;            // 0x2C
        uint8_t   _pad0[3];           // 0x2D
        int       weaponselect;       // 0x30
        int       weaponsubtype;      // 0x34
        int       random_seed;        // 0x38
        short     mousedx;            // 0x3C
        short     mousedy;            // 0x3E
        bool      hasbeenpredicted;   // 0x40
        uint8_t   _pad1[7];           // 0x41
    };
    static_assert(sizeof(CUserCmd) == 0x48, "CUserCmd size mismatch!");

    struct CInput {
        void*     m_pVtbl;            // 0x00
        bool      m_fTrackIRAvailable;// 0x08
        bool      m_fMouseInitialized;// 0x09
        bool      m_fMouseActive;     // 0x0A
        uint8_t   _pad[5];            // 0x0B
        CUserCmd* m_pCommands;        // Array of commands
        void*     m_pVerifiedCommands;// Array of verified commands
    };
}
