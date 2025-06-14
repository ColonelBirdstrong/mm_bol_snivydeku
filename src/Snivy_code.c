//
//
// $ Author: Bird of Light
// $ Thank you to Bigmetalhead12 for the Jackie mod as a base!
//
//

// Default Header Files
#include "modding.h"
#include "global.h"
#include "ultra64.h"

// Model Header Files
#include "gSnivySkel.h"

// Right Hand
extern Gfx* gPlayerRightHandOpenDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandClosedDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandBowDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandInstrumentDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandHookshotDLs[2 * PLAYER_FORM_MAX];

// Left Hand
extern Gfx* gPlayerLeftHandOpenDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandClosedDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandTwoHandSwordDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandOneHandSwordDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandBottleDLs[2 * PLAYER_FORM_MAX];

extern Gfx* gPlayerWaistDLs[2 * PLAYER_FORM_MAX];

// Function to replace Deku Link's model with Snivy's model
RECOMP_HOOK("Player_Init") void on_Player_Init(Actor* thisx, PlayState* play) {
    Player* player = GET_PLAYER(play);

    gPlayerSkeletons[PLAYER_FORM_DEKU] = &gSnivySkel;

    // Right Hand DLs
    gPlayerRightHandOpenDLs[PLAYER_FORM_DEKU * 2 + 0] = gSnivySkel_bone018_gLinkDekuRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandOpenDLs[PLAYER_FORM_DEKU * 2 + 1] = gSnivySkel_bone018_gLinkDekuRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandClosedDLs[PLAYER_FORM_DEKU * 2 + 0] = gSnivySkel_bone018_gLinkDekuRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandClosedDLs[PLAYER_FORM_DEKU * 2 + 1] = gSnivySkel_bone018_gLinkDekuRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandInstrumentDLs[PLAYER_FORM_DEKU * 2 + 0] = gSnivySkel_bone018_gLinkDekuRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandInstrumentDLs[PLAYER_FORM_DEKU * 2 + 1] = gSnivySkel_bone018_gLinkDekuRightHandLimb_mesh_layer_Opaque;

    // Left Hand DLs
    gPlayerLeftHandOpenDLs[PLAYER_FORM_DEKU * 2 + 0] = gSnivySkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandOpenDLs[PLAYER_FORM_DEKU * 2 + 1] = gSnivySkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandClosedDLs[PLAYER_FORM_DEKU * 2 + 0] = gSnivySkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandClosedDLs[PLAYER_FORM_DEKU * 2 + 1] = gSnivySkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandBottleDLs[PLAYER_FORM_DEKU * 2 + 0] = gSnivySkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandBottleDLs[PLAYER_FORM_DEKU * 2 + 1] = gSnivySkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque;

    gPlayerWaistDLs[PLAYER_FORM_DEKU * 2 + 0] = gSnivySkel_bone001_gLinkDekuWaistLimb_mesh_layer_Opaque;
    gPlayerWaistDLs[PLAYER_FORM_DEKU * 2 + 1] = gSnivySkel_bone001_gLinkDekuWaistLimb_mesh_layer_Opaque;

}