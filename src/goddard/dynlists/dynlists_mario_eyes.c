#include <PR/ultratypes.h>

#include "macros.h"
#include "dynlist_macros.h"
#include "dynlists.h"
#include "../dynlist_proc.h"

static s16 verts_mario_eye_right[][3] = {{242, -51, 57}, {281, -48, 57}, {242, -44, 102}, {281, -42, 96}, {242, -32, 139}, {281, -31, 128}, {242, -17, 163}, {281, -17, 149}, {242, -1, 171}, {281, -2, 155}, {242, 13, 160}, {281, 11, 146}, {242, 24, 134}, {281, 21, 123}, {242, 29, 95}, {281, 26, 90}, {242, 28, 50}, {281, 26, 50}, {242, 21, 6}, {281, 19, 12}, {242, 9, -31}, {281, 8, -20}, {242, -5, -55}, {281, -5, -41}, {242, -21, -62}, {281, -20, -47}, {242, -36, -52}, {281, -33, -38}, {242, -46, -26}, {281, -44, -15}, {242, -52, 12}, {281, -49, 18}, {288, -34, 92}, {288, -39, 64}, {288, -26, 115}, {288, -15, 130}, {288, -3, 134}, {288, 7, 128}, {288, 15, 111}, {288, 19, 87}, {288, 19, 59}, {288, 14, 31}, {288, 6, 8}, {288, -39, 36}, {288, -17, -32}, {288, -24, -35}, {288, -32, -31}, {288, -37, -20}, {288, -10, -22}, {288, -4, -5}, {288, -40, -4}, {288, -1, 10}, {288, -40, 14}, {288, -40, 2}, {288, -38, 26}, {288, -37, 32}, {288, -1, 29}, {288, -31, 47}, {288, -4, 45}, {288, -24, 57}, {288, -9, 55}, {288, -16, 60}};

static struct GdVtxData vtx_mario_eye_right = { ARRAY_COUNT(verts_mario_eye_right), 0x1, verts_mario_eye_right };

static u16 facedata_mario_eye_right[][4] = {{2, 2, 5, 4}, {2, 4, 7, 6}, {2, 6, 9, 8}, {2, 9, 10, 8}, {2, 11, 12, 10}, {2, 13, 14, 12}, {2, 15, 16, 14}, {2, 16, 19, 18}, {2, 18, 21, 20}, {2, 20, 23, 22}, {2, 22, 25, 24}, {2, 25, 26, 24}, {2, 27, 28, 26}, {2, 29, 30, 28}, {2, 13, 37, 38}, {2, 31, 0, 30}, {1, 58, 40, 60}, {2, 21, 49, 23}, {2, 1, 43, 33}, {2, 7, 36, 9}, {2, 17, 41, 19}, {2, 27, 46, 47}, {2, 3, 34, 5}, {2, 15, 38, 39}, {2, 23, 48, 44}, {2, 11, 36, 37}, {2, 19, 42, 21}, {2, 52, 54, 31}, {2, 5, 35, 7}, {2, 15, 40, 17}, {2, 25, 44, 45}, {2, 3, 33, 32}, {0, 47, 46, 44}, {1, 40, 39, 60}, {1, 39, 38, 32}, {1, 60, 39, 61}, {1, 38, 37, 34}, {1, 37, 36, 35}, {1, 34, 37, 35}, {1, 34, 32, 38}, {1, 32, 33, 61}, {1, 61, 33, 59}, {1, 33, 43, 57}, {1, 43, 54, 55}, {1, 43, 55, 57}, {1, 42, 41, 56}, {1, 41, 40, 58}, {1, 56, 41, 58}, {1, 51, 49, 42}, {1, 56, 51, 42}, {1, 61, 39, 32}, {1, 33, 57, 59}, {0, 45, 44, 46}, {0, 44, 48, 47}, {0, 48, 49, 50}, {0, 49, 51, 53}, {0, 48, 50, 47}, {0, 51, 56, 54}, {0, 56, 58, 55}, {0, 54, 56, 55}, {0, 58, 60, 59}, {0, 60, 61, 59}, {0, 59, 57, 58}, {0, 57, 55, 58}, {0, 54, 52, 51}, {0, 52, 53, 51}, {0, 53, 50, 49}, {2, 0, 3, 2}, {2, 2, 3, 5}, {2, 4, 5, 7}, {2, 6, 7, 9}, {2, 9, 11, 10}, {2, 11, 13, 12}, {2, 13, 15, 14}, {2, 15, 17, 16}, {2, 16, 17, 19}, {2, 18, 19, 21}, {2, 20, 21, 23}, {2, 22, 23, 25}, {2, 25, 27, 26}, {2, 27, 29, 28}, {2, 29, 31, 30}, {2, 13, 11, 37}, {2, 31, 1, 0}, {2, 21, 42, 49}, {2, 1, 31, 43}, {2, 7, 35, 36}, {2, 17, 40, 41}, {2, 53, 29, 50}, {2, 29, 27, 47}, {2, 50, 29, 47}, {2, 3, 32, 34}, {2, 15, 13, 38}, {2, 44, 25, 23}, {2, 23, 49, 48}, {2, 11, 9, 36}, {2, 19, 41, 42}, {2, 43, 31, 54}, {2, 31, 29, 53}, {2, 52, 31, 53}, {2, 5, 34, 35}, {2, 15, 39, 40}, {2, 46, 27, 45}, {2, 27, 25, 45}, {2, 3, 1, 33}, {2, 0, 1, 3}};

static struct GdFaceData faces_mario_eye_right = { ARRAY_COUNT(facedata_mario_eye_right), 0x1, facedata_mario_eye_right };

struct DynList dynlist_mario_eye_right_shape[] = {
    BeginList(),

    MakeDynObj(D_DATA_GRP, DYNOBJ_MARIO_RIGHT_EYE_VTX_GROUP),
        LinkWithPtr(&vtx_mario_eye_right),

    MakeDynObj(D_DATA_GRP, DYNOBJ_MARIO_RIGHT_EYE_TRI_GROUP),
        LinkWithPtr(&faces_mario_eye_right),

    StartGroup(DYNOBJ_MARIO_RIGHT_EYE_MTL_GROUP),
        // ???
        MakeDynObj(D_MATERIAL, 0),
            SetId(0),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
        // Iris color
        MakeDynObj(D_MATERIAL, 0),
            SetId(1),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
        // Pupil color
        MakeDynObj(D_MATERIAL, 0),
            SetId(2),
    SetAmbient(0.366, 0.226, 0.102),
    SetDiffuse(0.366, 0.226, 0.102),
    EndGroup(DYNOBJ_MARIO_RIGHT_EYE_MTL_GROUP),

    MakeDynObj(D_SHAPE, DYNOBJ_MARIO_RIGHT_EYE_SHAPE),
        SetNodeGroup(DYNOBJ_MARIO_RIGHT_EYE_VTX_GROUP),
        SetPlaneGroup(DYNOBJ_MARIO_RIGHT_EYE_TRI_GROUP),
        SetMaterialGroup(DYNOBJ_MARIO_RIGHT_EYE_MTL_GROUP),

    EndList(),
};

static s16 verts_mario_eye_left[][3] = {{242, 25, -67}, {281, 22, -67}, {242, 25, -112}, {281, 23, -106}, {242, 20, -151}, {281, 17, -140}, {242, 9, -177}, {281, 7, -163}, {242, -4, -187}, {281, -6, -172}, {242, -20, -180}, {281, -21, -166}, {242, -36, -156}, {281, -35, -145}, {242, -48, -119}, {281, -46, -112}, {242, -54, -74}, {281, -52, -74}, {242, -55, -29}, {281, -53, -35}, {242, -50, 9}, {281, -47, -1}, {242, -39, 35}, {281, -37, 21}, {242, -25, 45}, {281, -23, 30}, {242, -9, 38}, {281, -8, 24}, {242, 6, 14}, {281, 5, 3}, {242, 18, -23}, {281, 16, -29}, {288, 14, -104}, {288, 14, -76}, {288, 10, -128}, {288, 2, -145}, {288, -8, -151}, {288, -20, -147}, {288, -31, -132}, {288, -39, -109}, {288, -44, -81}, {288, -44, -53}, {288, -40, -28}, {288, 10, -48}, {288, -24, 15}, {288, -17, 19}, {288, -9, 16}, {288, -2, 6}, {288, -29, 4}, {288, -32, -13}, {288, 3, -8}, {288, -32, -29}, {288, 6, -26}, {288, 4, -15}, {288, 6, -38}, {288, 6, -44}, {288, -29, -48}, {288, 3, -60}, {288, -23, -63}, {288, -1, -71}, {288, -16, -73}, {288, -8, -76}};

static struct GdVtxData vtx_mario_eye_left = { ARRAY_COUNT(verts_mario_eye_left), 0x1, verts_mario_eye_left };

static u16 facedata_mario_eye_left[][4] = {{2, 2, 5, 4}, {2, 4, 7, 6}, {2, 6, 9, 8}, {2, 9, 10, 8}, {2, 11, 12, 10}, {2, 13, 14, 12}, {2, 15, 16, 14}, {2, 16, 19, 18}, {2, 18, 21, 20}, {2, 20, 23, 22}, {2, 22, 25, 24}, {2, 25, 26, 24}, {2, 27, 28, 26}, {2, 29, 30, 28}, {2, 13, 37, 38}, {2, 31, 0, 30}, {1, 58, 40, 60}, {2, 21, 49, 23}, {2, 1, 43, 33}, {2, 7, 36, 9}, {2, 17, 41, 19}, {2, 27, 46, 47}, {2, 3, 34, 5}, {2, 15, 38, 39}, {2, 23, 48, 44}, {2, 11, 36, 37}, {2, 19, 42, 21}, {2, 52, 54, 31}, {2, 5, 35, 7}, {2, 15, 40, 17}, {2, 25, 44, 45}, {2, 3, 33, 32}, {0, 47, 46, 44}, {1, 40, 39, 60}, {1, 39, 38, 32}, {1, 60, 39, 61}, {1, 38, 37, 34}, {1, 37, 36, 35}, {1, 34, 37, 35}, {1, 34, 32, 38}, {1, 32, 33, 61}, {1, 61, 33, 59}, {1, 33, 43, 57}, {1, 43, 54, 55}, {1, 43, 55, 57}, {1, 42, 41, 56}, {1, 41, 40, 58}, {1, 56, 41, 58}, {1, 51, 49, 42}, {1, 56, 51, 42}, {1, 61, 39, 32}, {1, 33, 57, 59}, {0, 45, 44, 46}, {0, 44, 48, 47}, {0, 48, 49, 50}, {0, 49, 51, 53}, {0, 48, 50, 47}, {0, 51, 56, 54}, {0, 56, 58, 55}, {0, 54, 56, 55}, {0, 58, 60, 59}, {0, 60, 61, 59}, {0, 59, 57, 58}, {0, 57, 55, 58}, {0, 54, 52, 51}, {0, 52, 53, 51}, {0, 53, 50, 49}, {2, 0, 3, 2}, {2, 2, 3, 5}, {2, 4, 5, 7}, {2, 6, 7, 9}, {2, 9, 11, 10}, {2, 11, 13, 12}, {2, 13, 15, 14}, {2, 15, 17, 16}, {2, 16, 17, 19}, {2, 18, 19, 21}, {2, 20, 21, 23}, {2, 22, 23, 25}, {2, 25, 27, 26}, {2, 27, 29, 28}, {2, 29, 31, 30}, {2, 13, 11, 37}, {2, 31, 1, 0}, {2, 21, 42, 49}, {2, 1, 31, 43}, {2, 7, 35, 36}, {2, 17, 40, 41}, {2, 53, 29, 50}, {2, 29, 27, 47}, {2, 50, 29, 47}, {2, 3, 32, 34}, {2, 15, 13, 38}, {2, 44, 25, 23}, {2, 23, 49, 48}, {2, 11, 9, 36}, {2, 19, 41, 42}, {2, 43, 31, 54}, {2, 31, 29, 53}, {2, 52, 31, 53}, {2, 5, 34, 35}, {2, 15, 39, 40}, {2, 46, 27, 45}, {2, 27, 25, 45}, {2, 3, 1, 33}, {2, 0, 1, 3}};

static struct GdFaceData faces_mario_eye_left = { ARRAY_COUNT(facedata_mario_eye_left), 0x1, facedata_mario_eye_left };

struct DynList dynlist_mario_eye_left_shape[28] = {
    BeginList(),

    MakeDynObj(D_DATA_GRP, DYNOBJ_MARIO_LEFT_EYE_VTX_GROUP),
        LinkWithPtr(&vtx_mario_eye_left),

    MakeDynObj(D_DATA_GRP, DYNOBJ_MARIO_LEFT_EYE_TRI_GROUP),
        LinkWithPtr(&faces_mario_eye_left),

    StartGroup(DYNOBJ_MARIO_LEFT_EYE_MTL_GROUP),
        // ???
        MakeDynObj(D_MATERIAL, 0),
              SetId(0),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
        // Iris color
        MakeDynObj(D_MATERIAL, 0),
            SetId(1),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
        // Pupil color
        MakeDynObj(D_MATERIAL, 0),
            SetId(2),
    SetAmbient(0.366, 0.226, 0.102),
    SetDiffuse(0.366, 0.226, 0.102),
    EndGroup(DYNOBJ_MARIO_LEFT_EYE_MTL_GROUP),

    MakeDynObj(D_SHAPE, DYNOBJ_MARIO_LEFT_EYE_SHAPE),
        SetNodeGroup(DYNOBJ_MARIO_LEFT_EYE_VTX_GROUP),
        SetPlaneGroup(DYNOBJ_MARIO_LEFT_EYE_TRI_GROUP),
        SetMaterialGroup(DYNOBJ_MARIO_LEFT_EYE_MTL_GROUP),

    EndList(),
};
