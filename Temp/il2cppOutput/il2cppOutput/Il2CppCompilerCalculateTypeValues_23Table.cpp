#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// GameLogic
struct GameLogic_t3731221617;
// GvrKeyboard
struct GvrKeyboard_t2536560201;
// GvrKeyboard/KeyboardCallback
struct KeyboardCallback_t3330588312;
// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t3546202735;
// GvrVideoPlayerTexture/OnExceptionCallback
struct OnExceptionCallback_t1696428116;
// GvrVideoPlayerTexture/OnVideoEventCallback
struct OnVideoEventCallback_t2376626694;
// KeyboardState
struct KeyboardState_t4109162649;
// LightUp
struct LightUp_t751348637;
// LightUp_1
struct LightUp_1_t2853573179;
// LightUp_2_Final
struct LightUp_2_Final_t1468263550;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`2<System.String,System.String>
struct Action_2_t3970170674;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Action`1<System.Int32>>
struct List_1_t300520794;
// System.Collections.Generic.List`1<System.Action`2<System.String,System.String>>
struct List_1_t1147278120;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t2924027637;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1110636971;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t4040729994;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t3270282352;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t1438173104;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Text
struct Text_t1901882714;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DUMMYKEYBOARDPROVIDER_T4235634217_H
#define DUMMYKEYBOARDPROVIDER_T4235634217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.DummyKeyboardProvider
struct  DummyKeyboardProvider_t4235634217  : public RuntimeObject
{
public:
	// KeyboardState Gvr.Internal.DummyKeyboardProvider::dummyState
	KeyboardState_t4109162649 * ___dummyState_0;
	// System.String Gvr.Internal.DummyKeyboardProvider::<EditorText>k__BackingField
	String_t* ___U3CEditorTextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_dummyState_0() { return static_cast<int32_t>(offsetof(DummyKeyboardProvider_t4235634217, ___dummyState_0)); }
	inline KeyboardState_t4109162649 * get_dummyState_0() const { return ___dummyState_0; }
	inline KeyboardState_t4109162649 ** get_address_of_dummyState_0() { return &___dummyState_0; }
	inline void set_dummyState_0(KeyboardState_t4109162649 * value)
	{
		___dummyState_0 = value;
		Il2CppCodeGenWriteBarrier((&___dummyState_0), value);
	}

	inline static int32_t get_offset_of_U3CEditorTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DummyKeyboardProvider_t4235634217, ___U3CEditorTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CEditorTextU3Ek__BackingField_1() const { return ___U3CEditorTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CEditorTextU3Ek__BackingField_1() { return &___U3CEditorTextU3Ek__BackingField_1; }
	inline void set_U3CEditorTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CEditorTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEditorTextU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUMMYKEYBOARDPROVIDER_T4235634217_H
#ifndef GVRCURSORHELPER_T4026897861_H
#define GVRCURSORHELPER_T4026897861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.GvrCursorHelper
struct  GvrCursorHelper_t4026897861  : public RuntimeObject
{
public:

public:
};

struct GvrCursorHelper_t4026897861_StaticFields
{
public:
	// System.Boolean Gvr.Internal.GvrCursorHelper::cachedHeadEmulationActive
	bool ___cachedHeadEmulationActive_0;
	// System.Boolean Gvr.Internal.GvrCursorHelper::cachedControllerEmulationActive
	bool ___cachedControllerEmulationActive_1;

public:
	inline static int32_t get_offset_of_cachedHeadEmulationActive_0() { return static_cast<int32_t>(offsetof(GvrCursorHelper_t4026897861_StaticFields, ___cachedHeadEmulationActive_0)); }
	inline bool get_cachedHeadEmulationActive_0() const { return ___cachedHeadEmulationActive_0; }
	inline bool* get_address_of_cachedHeadEmulationActive_0() { return &___cachedHeadEmulationActive_0; }
	inline void set_cachedHeadEmulationActive_0(bool value)
	{
		___cachedHeadEmulationActive_0 = value;
	}

	inline static int32_t get_offset_of_cachedControllerEmulationActive_1() { return static_cast<int32_t>(offsetof(GvrCursorHelper_t4026897861_StaticFields, ___cachedControllerEmulationActive_1)); }
	inline bool get_cachedControllerEmulationActive_1() const { return ___cachedControllerEmulationActive_1; }
	inline bool* get_address_of_cachedControllerEmulationActive_1() { return &___cachedControllerEmulationActive_1; }
	inline void set_cachedControllerEmulationActive_1(bool value)
	{
		___cachedControllerEmulationActive_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRCURSORHELPER_T4026897861_H
#ifndef KEYBOARDPROVIDERFACTORY_T3069358895_H
#define KEYBOARDPROVIDERFACTORY_T3069358895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.KeyboardProviderFactory
struct  KeyboardProviderFactory_t3069358895  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDPROVIDERFACTORY_T3069358895_H
#ifndef GVRACTIVITYHELPER_T700161863_H
#define GVRACTIVITYHELPER_T700161863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrActivityHelper
struct  GvrActivityHelper_t700161863  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRACTIVITYHELPER_T700161863_H
#ifndef GVRDAYDREAMAPI_T820520409_H
#define GVRDAYDREAMAPI_T820520409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrDaydreamApi
struct  GvrDaydreamApi_t820520409  : public RuntimeObject
{
public:

public:
};

struct GvrDaydreamApi_t820520409_StaticFields
{
public:
	// GvrDaydreamApi GvrDaydreamApi::m_instance
	GvrDaydreamApi_t820520409 * ___m_instance_4;

public:
	inline static int32_t get_offset_of_m_instance_4() { return static_cast<int32_t>(offsetof(GvrDaydreamApi_t820520409_StaticFields, ___m_instance_4)); }
	inline GvrDaydreamApi_t820520409 * get_m_instance_4() const { return ___m_instance_4; }
	inline GvrDaydreamApi_t820520409 ** get_address_of_m_instance_4() { return &___m_instance_4; }
	inline void set_m_instance_4(GvrDaydreamApi_t820520409 * value)
	{
		___m_instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRDAYDREAMAPI_T820520409_H
#ifndef U3CLAUNCHVRHOMEASYNCU3EC__ANONSTOREY0_T1042273844_H
#define U3CLAUNCHVRHOMEASYNCU3EC__ANONSTOREY0_T1042273844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrDaydreamApi/<LaunchVrHomeAsync>c__AnonStorey0
struct  U3CLaunchVrHomeAsyncU3Ec__AnonStorey0_t1042273844  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GvrDaydreamApi/<LaunchVrHomeAsync>c__AnonStorey0::callback
	Action_1_t269755560 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLaunchVrHomeAsyncU3Ec__AnonStorey0_t1042273844, ___callback_0)); }
	inline Action_1_t269755560 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t269755560 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t269755560 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLAUNCHVRHOMEASYNCU3EC__ANONSTOREY0_T1042273844_H
#ifndef GVRINTENT_T255451010_H
#define GVRINTENT_T255451010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrIntent
struct  GvrIntent_t255451010  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRINTENT_T255451010_H
#ifndef U3CEXECUTERU3EC__ITERATOR0_T892308174_H
#define U3CEXECUTERU3EC__ITERATOR0_T892308174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboard/<Executer>c__Iterator0
struct  U3CExecuterU3Ec__Iterator0_t892308174  : public RuntimeObject
{
public:
	// GvrKeyboard GvrKeyboard/<Executer>c__Iterator0::$this
	GvrKeyboard_t2536560201 * ___U24this_0;
	// System.Object GvrKeyboard/<Executer>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean GvrKeyboard/<Executer>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 GvrKeyboard/<Executer>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CExecuterU3Ec__Iterator0_t892308174, ___U24this_0)); }
	inline GvrKeyboard_t2536560201 * get_U24this_0() const { return ___U24this_0; }
	inline GvrKeyboard_t2536560201 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GvrKeyboard_t2536560201 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CExecuterU3Ec__Iterator0_t892308174, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CExecuterU3Ec__Iterator0_t892308174, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CExecuterU3Ec__Iterator0_t892308174, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEXECUTERU3EC__ITERATOR0_T892308174_H
#ifndef GVRKEYBOARDINTENT_T3874861606_H
#define GVRKEYBOARDINTENT_T3874861606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboardIntent
struct  GvrKeyboardIntent_t3874861606  : public RuntimeObject
{
public:

public:
};

struct GvrKeyboardIntent_t3874861606_StaticFields
{
public:
	// GvrKeyboardIntent GvrKeyboardIntent::theInstance
	GvrKeyboardIntent_t3874861606 * ___theInstance_2;

public:
	inline static int32_t get_offset_of_theInstance_2() { return static_cast<int32_t>(offsetof(GvrKeyboardIntent_t3874861606_StaticFields, ___theInstance_2)); }
	inline GvrKeyboardIntent_t3874861606 * get_theInstance_2() const { return ___theInstance_2; }
	inline GvrKeyboardIntent_t3874861606 ** get_address_of_theInstance_2() { return &___theInstance_2; }
	inline void set_theInstance_2(GvrKeyboardIntent_t3874861606 * value)
	{
		___theInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___theInstance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRKEYBOARDINTENT_T3874861606_H
#ifndef GVRUIHELPERS_T853958893_H
#define GVRUIHELPERS_T853958893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrUIHelpers
struct  GvrUIHelpers_t853958893  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRUIHELPERS_T853958893_H
#ifndef U3CINTERNALONEXCEPTIONCALLBACKU3EC__ANONSTOREY1_T3301768987_H
#define U3CINTERNALONEXCEPTIONCALLBACKU3EC__ANONSTOREY1_T3301768987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey1
struct  U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987  : public RuntimeObject
{
public:
	// GvrVideoPlayerTexture GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey1::player
	GvrVideoPlayerTexture_t3546202735 * ___player_0;
	// System.String GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey1::type
	String_t* ___type_1;
	// System.String GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey1::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987, ___player_0)); }
	inline GvrVideoPlayerTexture_t3546202735 * get_player_0() const { return ___player_0; }
	inline GvrVideoPlayerTexture_t3546202735 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(GvrVideoPlayerTexture_t3546202735 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier((&___player_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((&___msg_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINTERNALONEXCEPTIONCALLBACKU3EC__ANONSTOREY1_T3301768987_H
#ifndef U3CINTERNALONVIDEOEVENTCALLBACKU3EC__ANONSTOREY0_T2222373319_H
#define U3CINTERNALONVIDEOEVENTCALLBACKU3EC__ANONSTOREY0_T2222373319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/<InternalOnVideoEventCallback>c__AnonStorey0
struct  U3CInternalOnVideoEventCallbackU3Ec__AnonStorey0_t2222373319  : public RuntimeObject
{
public:
	// GvrVideoPlayerTexture GvrVideoPlayerTexture/<InternalOnVideoEventCallback>c__AnonStorey0::player
	GvrVideoPlayerTexture_t3546202735 * ___player_0;
	// System.Int32 GvrVideoPlayerTexture/<InternalOnVideoEventCallback>c__AnonStorey0::eventId
	int32_t ___eventId_1;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(U3CInternalOnVideoEventCallbackU3Ec__AnonStorey0_t2222373319, ___player_0)); }
	inline GvrVideoPlayerTexture_t3546202735 * get_player_0() const { return ___player_0; }
	inline GvrVideoPlayerTexture_t3546202735 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(GvrVideoPlayerTexture_t3546202735 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier((&___player_0), value);
	}

	inline static int32_t get_offset_of_eventId_1() { return static_cast<int32_t>(offsetof(U3CInternalOnVideoEventCallbackU3Ec__AnonStorey0_t2222373319, ___eventId_1)); }
	inline int32_t get_eventId_1() const { return ___eventId_1; }
	inline int32_t* get_address_of_eventId_1() { return &___eventId_1; }
	inline void set_eventId_1(int32_t value)
	{
		___eventId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINTERNALONVIDEOEVENTCALLBACKU3EC__ANONSTOREY0_T2222373319_H
#ifndef U3CLIGHTFORU3EC__ITERATOR0_T3322656041_H
#define U3CLIGHTFORU3EC__ITERATOR0_T3322656041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightUp/<LightFor>c__Iterator0
struct  U3CLightForU3Ec__Iterator0_t3322656041  : public RuntimeObject
{
public:
	// System.Single LightUp/<LightFor>c__Iterator0::duration
	float ___duration_0;
	// LightUp LightUp/<LightFor>c__Iterator0::$this
	LightUp_t751348637 * ___U24this_1;
	// System.Object LightUp/<LightFor>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean LightUp/<LightFor>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 LightUp/<LightFor>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3322656041, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3322656041, ___U24this_1)); }
	inline LightUp_t751348637 * get_U24this_1() const { return ___U24this_1; }
	inline LightUp_t751348637 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LightUp_t751348637 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3322656041, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3322656041, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3322656041, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLIGHTFORU3EC__ITERATOR0_T3322656041_H
#ifndef U3CLIGHTFORU3EC__ITERATOR0_T1970725915_H
#define U3CLIGHTFORU3EC__ITERATOR0_T1970725915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightUp_1/<LightFor>c__Iterator0
struct  U3CLightForU3Ec__Iterator0_t1970725915  : public RuntimeObject
{
public:
	// System.Single LightUp_1/<LightFor>c__Iterator0::duration
	float ___duration_0;
	// LightUp_1 LightUp_1/<LightFor>c__Iterator0::$this
	LightUp_1_t2853573179 * ___U24this_1;
	// System.Object LightUp_1/<LightFor>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean LightUp_1/<LightFor>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 LightUp_1/<LightFor>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t1970725915, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t1970725915, ___U24this_1)); }
	inline LightUp_1_t2853573179 * get_U24this_1() const { return ___U24this_1; }
	inline LightUp_1_t2853573179 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LightUp_1_t2853573179 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t1970725915, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t1970725915, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t1970725915, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLIGHTFORU3EC__ITERATOR0_T1970725915_H
#ifndef U3CLIGHTFORU3EC__ITERATOR0_T3094849212_H
#define U3CLIGHTFORU3EC__ITERATOR0_T3094849212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightUp_2_Final/<LightFor>c__Iterator0
struct  U3CLightForU3Ec__Iterator0_t3094849212  : public RuntimeObject
{
public:
	// System.Single LightUp_2_Final/<LightFor>c__Iterator0::duration
	float ___duration_0;
	// LightUp_2_Final LightUp_2_Final/<LightFor>c__Iterator0::$this
	LightUp_2_Final_t1468263550 * ___U24this_1;
	// System.Object LightUp_2_Final/<LightFor>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean LightUp_2_Final/<LightFor>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 LightUp_2_Final/<LightFor>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3094849212, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3094849212, ___U24this_1)); }
	inline LightUp_2_Final_t1468263550 * get_U24this_1() const { return ___U24this_1; }
	inline LightUp_2_Final_t1468263550 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LightUp_2_Final_t1468263550 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3094849212, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3094849212, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CLightForU3Ec__Iterator0_t3094849212, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLIGHTFORU3EC__ITERATOR0_T3094849212_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ANDROIDJAVAPROXY_T2835824643_H
#define ANDROIDJAVAPROXY_T2835824643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t2835824643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_T2835824643_H
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
#ifndef U24ARRAYTYPEU3D16_T3253128244_H
#define U24ARRAYTYPEU3D16_T3253128244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D16_t3253128244 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_t3253128244__padding[16];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D16_T3253128244_H
#ifndef U24ARRAYTYPEU3D20_T1702832645_H
#define U24ARRAYTYPEU3D20_T1702832645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t1702832645 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t1702832645__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T1702832645_H
#ifndef U24ARRAYTYPEU3D28_T173484549_H
#define U24ARRAYTYPEU3D28_T173484549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=28
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D28_t173484549 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D28_t173484549__padding[28];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D28_T173484549_H
#ifndef GVR_CLOCK_TIME_POINT_T2797008802_H
#define GVR_CLOCK_TIME_POINT_T2797008802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.AndroidNativeKeyboardProvider/gvr_clock_time_point
struct  gvr_clock_time_point_t2797008802 
{
public:
	// System.Int64 Gvr.Internal.AndroidNativeKeyboardProvider/gvr_clock_time_point::monotonic_system_time_nanos
	int64_t ___monotonic_system_time_nanos_0;

public:
	inline static int32_t get_offset_of_monotonic_system_time_nanos_0() { return static_cast<int32_t>(offsetof(gvr_clock_time_point_t2797008802, ___monotonic_system_time_nanos_0)); }
	inline int64_t get_monotonic_system_time_nanos_0() const { return ___monotonic_system_time_nanos_0; }
	inline int64_t* get_address_of_monotonic_system_time_nanos_0() { return &___monotonic_system_time_nanos_0; }
	inline void set_monotonic_system_time_nanos_0(int64_t value)
	{
		___monotonic_system_time_nanos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVR_CLOCK_TIME_POINT_T2797008802_H
#ifndef GVR_RECTI_T2249612514_H
#define GVR_RECTI_T2249612514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.AndroidNativeKeyboardProvider/gvr_recti
struct  gvr_recti_t2249612514 
{
public:
	// System.Int32 Gvr.Internal.AndroidNativeKeyboardProvider/gvr_recti::left
	int32_t ___left_0;
	// System.Int32 Gvr.Internal.AndroidNativeKeyboardProvider/gvr_recti::right
	int32_t ___right_1;
	// System.Int32 Gvr.Internal.AndroidNativeKeyboardProvider/gvr_recti::bottom
	int32_t ___bottom_2;
	// System.Int32 Gvr.Internal.AndroidNativeKeyboardProvider/gvr_recti::top
	int32_t ___top_3;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(gvr_recti_t2249612514, ___left_0)); }
	inline int32_t get_left_0() const { return ___left_0; }
	inline int32_t* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(int32_t value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(gvr_recti_t2249612514, ___right_1)); }
	inline int32_t get_right_1() const { return ___right_1; }
	inline int32_t* get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(int32_t value)
	{
		___right_1 = value;
	}

	inline static int32_t get_offset_of_bottom_2() { return static_cast<int32_t>(offsetof(gvr_recti_t2249612514, ___bottom_2)); }
	inline int32_t get_bottom_2() const { return ___bottom_2; }
	inline int32_t* get_address_of_bottom_2() { return &___bottom_2; }
	inline void set_bottom_2(int32_t value)
	{
		___bottom_2 = value;
	}

	inline static int32_t get_offset_of_top_3() { return static_cast<int32_t>(offsetof(gvr_recti_t2249612514, ___top_3)); }
	inline int32_t get_top_3() const { return ___top_3; }
	inline int32_t* get_address_of_top_3() { return &___top_3; }
	inline void set_top_3(int32_t value)
	{
		___top_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVR_RECTI_T2249612514_H
#ifndef KEYBOARDCALLBACK_T4011255843_H
#define KEYBOARDCALLBACK_T4011255843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboardIntent/KeyboardCallback
struct  KeyboardCallback_t4011255843  : public AndroidJavaProxy_t2835824643
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDCALLBACK_T4011255843_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef PROPERTYATTRIBUTE_T3677895545_H
#define PROPERTYATTRIBUTE_T3677895545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3677895545  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3677895545_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-311441405B64B3EA9097AC8E07F3274962EC6BB4
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-16E2B412E9C2B8E31B780DE46254349320CCAAA0
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-D7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8
	U24ArrayTypeU3D16_t3253128244  ___U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-25B4B83D2A43393F4E18624598DDA694217A6622
	U24ArrayTypeU3D16_t3253128244  ___U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-FADC743710841EB901D5F6FBC97F555D4BD94310
	U24ArrayTypeU3D20_t1702832645  ___U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-C34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F
	U24ArrayTypeU3D28_t173484549  ___U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5;

public:
	inline static int32_t get_offset_of_U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0() const { return ___U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0() { return &___U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0; }
	inline void set_U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1() const { return ___U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1() { return &___U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1; }
	inline void set_U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2)); }
	inline U24ArrayTypeU3D16_t3253128244  get_U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2() const { return ___U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2; }
	inline U24ArrayTypeU3D16_t3253128244 * get_address_of_U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2() { return &___U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2; }
	inline void set_U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2(U24ArrayTypeU3D16_t3253128244  value)
	{
		___U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3)); }
	inline U24ArrayTypeU3D16_t3253128244  get_U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3() const { return ___U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3; }
	inline U24ArrayTypeU3D16_t3253128244 * get_address_of_U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3() { return &___U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3; }
	inline void set_U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3(U24ArrayTypeU3D16_t3253128244  value)
	{
		___U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4)); }
	inline U24ArrayTypeU3D20_t1702832645  get_U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4() const { return ___U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4; }
	inline U24ArrayTypeU3D20_t1702832645 * get_address_of_U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4() { return &___U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4; }
	inline void set_U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4(U24ArrayTypeU3D20_t1702832645  value)
	{
		___U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5)); }
	inline U24ArrayTypeU3D28_t173484549  get_U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5() const { return ___U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5; }
	inline U24ArrayTypeU3D28_t173484549 * get_address_of_U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5() { return &___U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5; }
	inline void set_U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5(U24ArrayTypeU3D28_t173484549  value)
	{
		___U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef GVRINFO_T2187998870_H
#define GVRINFO_T2187998870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrInfo
struct  GvrInfo_t2187998870  : public PropertyAttribute_t3677895545
{
public:
	// System.String GvrInfo::text
	String_t* ___text_0;
	// System.Int32 GvrInfo::numLines
	int32_t ___numLines_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(GvrInfo_t2187998870, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_numLines_1() { return static_cast<int32_t>(offsetof(GvrInfo_t2187998870, ___numLines_1)); }
	inline int32_t get_numLines_1() const { return ___numLines_1; }
	inline int32_t* get_address_of_numLines_1() { return &___numLines_1; }
	inline void set_numLines_1(int32_t value)
	{
		___numLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRINFO_T2187998870_H
#ifndef GVRKEYBOARDERROR_T3210682397_H
#define GVRKEYBOARDERROR_T3210682397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboardError
struct  GvrKeyboardError_t3210682397 
{
public:
	// System.Int32 GvrKeyboardError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GvrKeyboardError_t3210682397, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRKEYBOARDERROR_T3210682397_H
#ifndef GVRKEYBOARDEVENT_T3629165438_H
#define GVRKEYBOARDEVENT_T3629165438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboardEvent
struct  GvrKeyboardEvent_t3629165438 
{
public:
	// System.Int32 GvrKeyboardEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GvrKeyboardEvent_t3629165438, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRKEYBOARDEVENT_T3629165438_H
#ifndef GVRKEYBOARDINPUTMODE_T518947509_H
#define GVRKEYBOARDINPUTMODE_T518947509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboardInputMode
struct  GvrKeyboardInputMode_t518947509 
{
public:
	// System.Int32 GvrKeyboardInputMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GvrKeyboardInputMode_t518947509, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRKEYBOARDINPUTMODE_T518947509_H
#ifndef GVRMATHHELPERS_T769385329_H
#define GVRMATHHELPERS_T769385329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrMathHelpers
struct  GvrMathHelpers_t769385329  : public RuntimeObject
{
public:

public:
};

struct GvrMathHelpers_t769385329_StaticFields
{
public:
	// UnityEngine.Vector2 GvrMathHelpers::sphericalCoordinatesResult
	Vector2_t2156229523  ___sphericalCoordinatesResult_0;

public:
	inline static int32_t get_offset_of_sphericalCoordinatesResult_0() { return static_cast<int32_t>(offsetof(GvrMathHelpers_t769385329_StaticFields, ___sphericalCoordinatesResult_0)); }
	inline Vector2_t2156229523  get_sphericalCoordinatesResult_0() const { return ___sphericalCoordinatesResult_0; }
	inline Vector2_t2156229523 * get_address_of_sphericalCoordinatesResult_0() { return &___sphericalCoordinatesResult_0; }
	inline void set_sphericalCoordinatesResult_0(Vector2_t2156229523  value)
	{
		___sphericalCoordinatesResult_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRMATHHELPERS_T769385329_H
#ifndef RENDERCOMMAND_T1121160834_H
#define RENDERCOMMAND_T1121160834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/RenderCommand
struct  RenderCommand_t1121160834 
{
public:
	// System.Int32 GvrVideoPlayerTexture/RenderCommand::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderCommand_t1121160834, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERCOMMAND_T1121160834_H
#ifndef STEREOMODE_T1039127149_H
#define STEREOMODE_T1039127149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/StereoMode
struct  StereoMode_t1039127149 
{
public:
	// System.Int32 GvrVideoPlayerTexture/StereoMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoMode_t1039127149, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOMODE_T1039127149_H
#ifndef VIDEOEVENTS_T3555787859_H
#define VIDEOEVENTS_T3555787859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/VideoEvents
struct  VideoEvents_t3555787859 
{
public:
	// System.Int32 GvrVideoPlayerTexture/VideoEvents::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoEvents_t3555787859, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOEVENTS_T3555787859_H
#ifndef VIDEOPLAYERSTATE_T3323603301_H
#define VIDEOPLAYERSTATE_T3323603301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/VideoPlayerState
struct  VideoPlayerState_t3323603301 
{
public:
	// System.Int32 GvrVideoPlayerTexture/VideoPlayerState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoPlayerState_t3323603301, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYERSTATE_T3323603301_H
#ifndef VIDEORESOLUTION_T1062057780_H
#define VIDEORESOLUTION_T1062057780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/VideoResolution
struct  VideoResolution_t1062057780 
{
public:
	// System.Int32 GvrVideoPlayerTexture/VideoResolution::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoResolution_t1062057780, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEORESOLUTION_T1062057780_H
#ifndef VIDEOTYPE_T2491562340_H
#define VIDEOTYPE_T2491562340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/VideoType
struct  VideoType_t2491562340 
{
public:
	// System.Int32 GvrVideoPlayerTexture/VideoType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoType_t2491562340, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTYPE_T2491562340_H
#ifndef POSE3D_T2649470188_H
#define POSE3D_T2649470188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pose3D
struct  Pose3D_t2649470188  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Pose3D::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion Pose3D::<Orientation>k__BackingField
	Quaternion_t2301928331  ___U3COrientationU3Ek__BackingField_2;
	// UnityEngine.Matrix4x4 Pose3D::<Matrix>k__BackingField
	Matrix4x4_t1817901843  ___U3CMatrixU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Pose3D_t2649470188, ___U3CPositionU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_1() const { return ___U3CPositionU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_1() { return &___U3CPositionU3Ek__BackingField_1; }
	inline void set_U3CPositionU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COrientationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pose3D_t2649470188, ___U3COrientationU3Ek__BackingField_2)); }
	inline Quaternion_t2301928331  get_U3COrientationU3Ek__BackingField_2() const { return ___U3COrientationU3Ek__BackingField_2; }
	inline Quaternion_t2301928331 * get_address_of_U3COrientationU3Ek__BackingField_2() { return &___U3COrientationU3Ek__BackingField_2; }
	inline void set_U3COrientationU3Ek__BackingField_2(Quaternion_t2301928331  value)
	{
		___U3COrientationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMatrixU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Pose3D_t2649470188, ___U3CMatrixU3Ek__BackingField_3)); }
	inline Matrix4x4_t1817901843  get_U3CMatrixU3Ek__BackingField_3() const { return ___U3CMatrixU3Ek__BackingField_3; }
	inline Matrix4x4_t1817901843 * get_address_of_U3CMatrixU3Ek__BackingField_3() { return &___U3CMatrixU3Ek__BackingField_3; }
	inline void set_U3CMatrixU3Ek__BackingField_3(Matrix4x4_t1817901843  value)
	{
		___U3CMatrixU3Ek__BackingField_3 = value;
	}
};

struct Pose3D_t2649470188_StaticFields
{
public:
	// UnityEngine.Matrix4x4 Pose3D::FLIP_Z
	Matrix4x4_t1817901843  ___FLIP_Z_0;

public:
	inline static int32_t get_offset_of_FLIP_Z_0() { return static_cast<int32_t>(offsetof(Pose3D_t2649470188_StaticFields, ___FLIP_Z_0)); }
	inline Matrix4x4_t1817901843  get_FLIP_Z_0() const { return ___FLIP_Z_0; }
	inline Matrix4x4_t1817901843 * get_address_of_FLIP_Z_0() { return &___FLIP_Z_0; }
	inline void set_FLIP_Z_0(Matrix4x4_t1817901843  value)
	{
		___FLIP_Z_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE3D_T2649470188_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef ANDROIDNATIVEKEYBOARDPROVIDER_T4081466012_H
#define ANDROIDNATIVEKEYBOARDPROVIDER_T4081466012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.AndroidNativeKeyboardProvider
struct  AndroidNativeKeyboardProvider_t4081466012  : public RuntimeObject
{
public:
	// System.IntPtr Gvr.Internal.AndroidNativeKeyboardProvider::renderEventFunction
	intptr_t ___renderEventFunction_0;
	// System.IntPtr Gvr.Internal.AndroidNativeKeyboardProvider::keyboard_context
	intptr_t ___keyboard_context_9;
	// GvrKeyboardInputMode Gvr.Internal.AndroidNativeKeyboardProvider::mode
	int32_t ___mode_16;
	// System.String Gvr.Internal.AndroidNativeKeyboardProvider::editorText
	String_t* ___editorText_17;
	// UnityEngine.Matrix4x4 Gvr.Internal.AndroidNativeKeyboardProvider::worldMatrix
	Matrix4x4_t1817901843  ___worldMatrix_18;
	// System.Boolean Gvr.Internal.AndroidNativeKeyboardProvider::isValid
	bool ___isValid_19;
	// System.Boolean Gvr.Internal.AndroidNativeKeyboardProvider::isReady
	bool ___isReady_20;

public:
	inline static int32_t get_offset_of_renderEventFunction_0() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t4081466012, ___renderEventFunction_0)); }
	inline intptr_t get_renderEventFunction_0() const { return ___renderEventFunction_0; }
	inline intptr_t* get_address_of_renderEventFunction_0() { return &___renderEventFunction_0; }
	inline void set_renderEventFunction_0(intptr_t value)
	{
		___renderEventFunction_0 = value;
	}

	inline static int32_t get_offset_of_keyboard_context_9() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t4081466012, ___keyboard_context_9)); }
	inline intptr_t get_keyboard_context_9() const { return ___keyboard_context_9; }
	inline intptr_t* get_address_of_keyboard_context_9() { return &___keyboard_context_9; }
	inline void set_keyboard_context_9(intptr_t value)
	{
		___keyboard_context_9 = value;
	}

	inline static int32_t get_offset_of_mode_16() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t4081466012, ___mode_16)); }
	inline int32_t get_mode_16() const { return ___mode_16; }
	inline int32_t* get_address_of_mode_16() { return &___mode_16; }
	inline void set_mode_16(int32_t value)
	{
		___mode_16 = value;
	}

	inline static int32_t get_offset_of_editorText_17() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t4081466012, ___editorText_17)); }
	inline String_t* get_editorText_17() const { return ___editorText_17; }
	inline String_t** get_address_of_editorText_17() { return &___editorText_17; }
	inline void set_editorText_17(String_t* value)
	{
		___editorText_17 = value;
		Il2CppCodeGenWriteBarrier((&___editorText_17), value);
	}

	inline static int32_t get_offset_of_worldMatrix_18() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t4081466012, ___worldMatrix_18)); }
	inline Matrix4x4_t1817901843  get_worldMatrix_18() const { return ___worldMatrix_18; }
	inline Matrix4x4_t1817901843 * get_address_of_worldMatrix_18() { return &___worldMatrix_18; }
	inline void set_worldMatrix_18(Matrix4x4_t1817901843  value)
	{
		___worldMatrix_18 = value;
	}

	inline static int32_t get_offset_of_isValid_19() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t4081466012, ___isValid_19)); }
	inline bool get_isValid_19() const { return ___isValid_19; }
	inline bool* get_address_of_isValid_19() { return &___isValid_19; }
	inline void set_isValid_19(bool value)
	{
		___isValid_19 = value;
	}

	inline static int32_t get_offset_of_isReady_20() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t4081466012, ___isReady_20)); }
	inline bool get_isReady_20() const { return ___isReady_20; }
	inline bool* get_address_of_isReady_20() { return &___isReady_20; }
	inline void set_isReady_20(bool value)
	{
		___isReady_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDNATIVEKEYBOARDPROVIDER_T4081466012_H
#ifndef EMULATORKEYBOARDPROVIDER_T2389719130_H
#define EMULATORKEYBOARDPROVIDER_T2389719130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorKeyboardProvider
struct  EmulatorKeyboardProvider_t2389719130  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Gvr.Internal.EmulatorKeyboardProvider::stub
	GameObject_t1113636619 * ___stub_0;
	// System.Boolean Gvr.Internal.EmulatorKeyboardProvider::showing
	bool ___showing_1;
	// GvrKeyboard/KeyboardCallback Gvr.Internal.EmulatorKeyboardProvider::keyboardCallback
	KeyboardCallback_t3330588312 * ___keyboardCallback_2;
	// System.String Gvr.Internal.EmulatorKeyboardProvider::editorText
	String_t* ___editorText_3;
	// GvrKeyboardInputMode Gvr.Internal.EmulatorKeyboardProvider::mode
	int32_t ___mode_4;
	// UnityEngine.Matrix4x4 Gvr.Internal.EmulatorKeyboardProvider::worldMatrix
	Matrix4x4_t1817901843  ___worldMatrix_5;
	// System.Boolean Gvr.Internal.EmulatorKeyboardProvider::isValid
	bool ___isValid_6;

public:
	inline static int32_t get_offset_of_stub_0() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2389719130, ___stub_0)); }
	inline GameObject_t1113636619 * get_stub_0() const { return ___stub_0; }
	inline GameObject_t1113636619 ** get_address_of_stub_0() { return &___stub_0; }
	inline void set_stub_0(GameObject_t1113636619 * value)
	{
		___stub_0 = value;
		Il2CppCodeGenWriteBarrier((&___stub_0), value);
	}

	inline static int32_t get_offset_of_showing_1() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2389719130, ___showing_1)); }
	inline bool get_showing_1() const { return ___showing_1; }
	inline bool* get_address_of_showing_1() { return &___showing_1; }
	inline void set_showing_1(bool value)
	{
		___showing_1 = value;
	}

	inline static int32_t get_offset_of_keyboardCallback_2() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2389719130, ___keyboardCallback_2)); }
	inline KeyboardCallback_t3330588312 * get_keyboardCallback_2() const { return ___keyboardCallback_2; }
	inline KeyboardCallback_t3330588312 ** get_address_of_keyboardCallback_2() { return &___keyboardCallback_2; }
	inline void set_keyboardCallback_2(KeyboardCallback_t3330588312 * value)
	{
		___keyboardCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyboardCallback_2), value);
	}

	inline static int32_t get_offset_of_editorText_3() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2389719130, ___editorText_3)); }
	inline String_t* get_editorText_3() const { return ___editorText_3; }
	inline String_t** get_address_of_editorText_3() { return &___editorText_3; }
	inline void set_editorText_3(String_t* value)
	{
		___editorText_3 = value;
		Il2CppCodeGenWriteBarrier((&___editorText_3), value);
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2389719130, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_worldMatrix_5() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2389719130, ___worldMatrix_5)); }
	inline Matrix4x4_t1817901843  get_worldMatrix_5() const { return ___worldMatrix_5; }
	inline Matrix4x4_t1817901843 * get_address_of_worldMatrix_5() { return &___worldMatrix_5; }
	inline void set_worldMatrix_5(Matrix4x4_t1817901843  value)
	{
		___worldMatrix_5 = value;
	}

	inline static int32_t get_offset_of_isValid_6() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2389719130, ___isValid_6)); }
	inline bool get_isValid_6() const { return ___isValid_6; }
	inline bool* get_address_of_isValid_6() { return &___isValid_6; }
	inline void set_isValid_6(bool value)
	{
		___isValid_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMULATORKEYBOARDPROVIDER_T2389719130_H
#ifndef KEYBOARDSTATE_T4109162649_H
#define KEYBOARDSTATE_T4109162649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KeyboardState
struct  KeyboardState_t4109162649  : public RuntimeObject
{
public:
	// System.String KeyboardState::editorText
	String_t* ___editorText_0;
	// GvrKeyboardInputMode KeyboardState::mode
	int32_t ___mode_1;
	// System.Boolean KeyboardState::isValid
	bool ___isValid_2;
	// System.Boolean KeyboardState::isReady
	bool ___isReady_3;
	// UnityEngine.Matrix4x4 KeyboardState::worldMatrix
	Matrix4x4_t1817901843  ___worldMatrix_4;

public:
	inline static int32_t get_offset_of_editorText_0() { return static_cast<int32_t>(offsetof(KeyboardState_t4109162649, ___editorText_0)); }
	inline String_t* get_editorText_0() const { return ___editorText_0; }
	inline String_t** get_address_of_editorText_0() { return &___editorText_0; }
	inline void set_editorText_0(String_t* value)
	{
		___editorText_0 = value;
		Il2CppCodeGenWriteBarrier((&___editorText_0), value);
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(KeyboardState_t4109162649, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_isValid_2() { return static_cast<int32_t>(offsetof(KeyboardState_t4109162649, ___isValid_2)); }
	inline bool get_isValid_2() const { return ___isValid_2; }
	inline bool* get_address_of_isValid_2() { return &___isValid_2; }
	inline void set_isValid_2(bool value)
	{
		___isValid_2 = value;
	}

	inline static int32_t get_offset_of_isReady_3() { return static_cast<int32_t>(offsetof(KeyboardState_t4109162649, ___isReady_3)); }
	inline bool get_isReady_3() const { return ___isReady_3; }
	inline bool* get_address_of_isReady_3() { return &___isReady_3; }
	inline void set_isReady_3(bool value)
	{
		___isReady_3 = value;
	}

	inline static int32_t get_offset_of_worldMatrix_4() { return static_cast<int32_t>(offsetof(KeyboardState_t4109162649, ___worldMatrix_4)); }
	inline Matrix4x4_t1817901843  get_worldMatrix_4() const { return ___worldMatrix_4; }
	inline Matrix4x4_t1817901843 * get_address_of_worldMatrix_4() { return &___worldMatrix_4; }
	inline void set_worldMatrix_4(Matrix4x4_t1817901843  value)
	{
		___worldMatrix_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDSTATE_T4109162649_H
#ifndef MUTABLEPOSE3D_T3352419872_H
#define MUTABLEPOSE3D_T3352419872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MutablePose3D
struct  MutablePose3D_t3352419872  : public Pose3D_t2649470188
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUTABLEPOSE3D_T3352419872_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef EDITTEXTCALLBACK_T1702213000_H
#define EDITTEXTCALLBACK_T1702213000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboard/EditTextCallback
struct  EditTextCallback_t1702213000  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITTEXTCALLBACK_T1702213000_H
#ifndef ERRORCALLBACK_T2310212740_H
#define ERRORCALLBACK_T2310212740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboard/ErrorCallback
struct  ErrorCallback_t2310212740  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCALLBACK_T2310212740_H
#ifndef KEYBOARDCALLBACK_T3330588312_H
#define KEYBOARDCALLBACK_T3330588312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboard/KeyboardCallback
struct  KeyboardCallback_t3330588312  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDCALLBACK_T3330588312_H
#ifndef STANDARDCALLBACK_T3095007891_H
#define STANDARDCALLBACK_T3095007891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboard/StandardCallback
struct  StandardCallback_t3095007891  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDCALLBACK_T3095007891_H
#ifndef ONEXCEPTIONCALLBACK_T1696428116_H
#define ONEXCEPTIONCALLBACK_T1696428116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/OnExceptionCallback
struct  OnExceptionCallback_t1696428116  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEXCEPTIONCALLBACK_T1696428116_H
#ifndef ONVIDEOEVENTCALLBACK_T2376626694_H
#define ONVIDEOEVENTCALLBACK_T2376626694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/OnVideoEventCallback
struct  OnVideoEventCallback_t2376626694  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVIDEOEVENTCALLBACK_T2376626694_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef GAMELOGIC_T3731221617_H
#define GAMELOGIC_T3731221617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic
struct  GameLogic_t3731221617  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameLogic::player
	GameObject_t1113636619 * ___player_4;
	// UnityEngine.GameObject GameLogic::eventSystem
	GameObject_t1113636619 * ___eventSystem_5;
	// UnityEngine.GameObject GameLogic::startUI
	GameObject_t1113636619 * ___startUI_6;
	// UnityEngine.GameObject GameLogic::restartUI
	GameObject_t1113636619 * ___restartUI_7;
	// UnityEngine.GameObject GameLogic::startPoint
	GameObject_t1113636619 * ___startPoint_8;
	// UnityEngine.GameObject GameLogic::playPoint
	GameObject_t1113636619 * ___playPoint_9;
	// UnityEngine.GameObject GameLogic::restartPoint
	GameObject_t1113636619 * ___restartPoint_10;
	// UnityEngine.GameObject[] GameLogic::puzzleSpheres
	GameObjectU5BU5D_t3328599146* ___puzzleSpheres_11;
	// System.Int32 GameLogic::puzzleLength
	int32_t ___puzzleLength_12;
	// System.Single GameLogic::puzzleSpeed
	float ___puzzleSpeed_13;
	// System.Int32[] GameLogic::puzzleOrder
	Int32U5BU5D_t385246372* ___puzzleOrder_14;
	// System.Int32 GameLogic::currentDisplayIndex
	int32_t ___currentDisplayIndex_15;
	// System.Int32 GameLogic::currentSolveIndex
	int32_t ___currentSolveIndex_16;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_eventSystem_5() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___eventSystem_5)); }
	inline GameObject_t1113636619 * get_eventSystem_5() const { return ___eventSystem_5; }
	inline GameObject_t1113636619 ** get_address_of_eventSystem_5() { return &___eventSystem_5; }
	inline void set_eventSystem_5(GameObject_t1113636619 * value)
	{
		___eventSystem_5 = value;
		Il2CppCodeGenWriteBarrier((&___eventSystem_5), value);
	}

	inline static int32_t get_offset_of_startUI_6() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___startUI_6)); }
	inline GameObject_t1113636619 * get_startUI_6() const { return ___startUI_6; }
	inline GameObject_t1113636619 ** get_address_of_startUI_6() { return &___startUI_6; }
	inline void set_startUI_6(GameObject_t1113636619 * value)
	{
		___startUI_6 = value;
		Il2CppCodeGenWriteBarrier((&___startUI_6), value);
	}

	inline static int32_t get_offset_of_restartUI_7() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___restartUI_7)); }
	inline GameObject_t1113636619 * get_restartUI_7() const { return ___restartUI_7; }
	inline GameObject_t1113636619 ** get_address_of_restartUI_7() { return &___restartUI_7; }
	inline void set_restartUI_7(GameObject_t1113636619 * value)
	{
		___restartUI_7 = value;
		Il2CppCodeGenWriteBarrier((&___restartUI_7), value);
	}

	inline static int32_t get_offset_of_startPoint_8() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___startPoint_8)); }
	inline GameObject_t1113636619 * get_startPoint_8() const { return ___startPoint_8; }
	inline GameObject_t1113636619 ** get_address_of_startPoint_8() { return &___startPoint_8; }
	inline void set_startPoint_8(GameObject_t1113636619 * value)
	{
		___startPoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPoint_8), value);
	}

	inline static int32_t get_offset_of_playPoint_9() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___playPoint_9)); }
	inline GameObject_t1113636619 * get_playPoint_9() const { return ___playPoint_9; }
	inline GameObject_t1113636619 ** get_address_of_playPoint_9() { return &___playPoint_9; }
	inline void set_playPoint_9(GameObject_t1113636619 * value)
	{
		___playPoint_9 = value;
		Il2CppCodeGenWriteBarrier((&___playPoint_9), value);
	}

	inline static int32_t get_offset_of_restartPoint_10() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___restartPoint_10)); }
	inline GameObject_t1113636619 * get_restartPoint_10() const { return ___restartPoint_10; }
	inline GameObject_t1113636619 ** get_address_of_restartPoint_10() { return &___restartPoint_10; }
	inline void set_restartPoint_10(GameObject_t1113636619 * value)
	{
		___restartPoint_10 = value;
		Il2CppCodeGenWriteBarrier((&___restartPoint_10), value);
	}

	inline static int32_t get_offset_of_puzzleSpheres_11() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___puzzleSpheres_11)); }
	inline GameObjectU5BU5D_t3328599146* get_puzzleSpheres_11() const { return ___puzzleSpheres_11; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_puzzleSpheres_11() { return &___puzzleSpheres_11; }
	inline void set_puzzleSpheres_11(GameObjectU5BU5D_t3328599146* value)
	{
		___puzzleSpheres_11 = value;
		Il2CppCodeGenWriteBarrier((&___puzzleSpheres_11), value);
	}

	inline static int32_t get_offset_of_puzzleLength_12() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___puzzleLength_12)); }
	inline int32_t get_puzzleLength_12() const { return ___puzzleLength_12; }
	inline int32_t* get_address_of_puzzleLength_12() { return &___puzzleLength_12; }
	inline void set_puzzleLength_12(int32_t value)
	{
		___puzzleLength_12 = value;
	}

	inline static int32_t get_offset_of_puzzleSpeed_13() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___puzzleSpeed_13)); }
	inline float get_puzzleSpeed_13() const { return ___puzzleSpeed_13; }
	inline float* get_address_of_puzzleSpeed_13() { return &___puzzleSpeed_13; }
	inline void set_puzzleSpeed_13(float value)
	{
		___puzzleSpeed_13 = value;
	}

	inline static int32_t get_offset_of_puzzleOrder_14() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___puzzleOrder_14)); }
	inline Int32U5BU5D_t385246372* get_puzzleOrder_14() const { return ___puzzleOrder_14; }
	inline Int32U5BU5D_t385246372** get_address_of_puzzleOrder_14() { return &___puzzleOrder_14; }
	inline void set_puzzleOrder_14(Int32U5BU5D_t385246372* value)
	{
		___puzzleOrder_14 = value;
		Il2CppCodeGenWriteBarrier((&___puzzleOrder_14), value);
	}

	inline static int32_t get_offset_of_currentDisplayIndex_15() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___currentDisplayIndex_15)); }
	inline int32_t get_currentDisplayIndex_15() const { return ___currentDisplayIndex_15; }
	inline int32_t* get_address_of_currentDisplayIndex_15() { return &___currentDisplayIndex_15; }
	inline void set_currentDisplayIndex_15(int32_t value)
	{
		___currentDisplayIndex_15 = value;
	}

	inline static int32_t get_offset_of_currentSolveIndex_16() { return static_cast<int32_t>(offsetof(GameLogic_t3731221617, ___currentSolveIndex_16)); }
	inline int32_t get_currentSolveIndex_16() const { return ___currentSolveIndex_16; }
	inline int32_t* get_address_of_currentSolveIndex_16() { return &___currentSolveIndex_16; }
	inline void set_currentSolveIndex_16(int32_t value)
	{
		___currentSolveIndex_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOGIC_T3731221617_H
#ifndef GAMELOGIC_1_T1992382119_H
#define GAMELOGIC_1_T1992382119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic_1
struct  GameLogic_1_t1992382119  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameLogic_1::startUI
	GameObject_t1113636619 * ___startUI_4;
	// UnityEngine.GameObject GameLogic_1::restartUI
	GameObject_t1113636619 * ___restartUI_5;

public:
	inline static int32_t get_offset_of_startUI_4() { return static_cast<int32_t>(offsetof(GameLogic_1_t1992382119, ___startUI_4)); }
	inline GameObject_t1113636619 * get_startUI_4() const { return ___startUI_4; }
	inline GameObject_t1113636619 ** get_address_of_startUI_4() { return &___startUI_4; }
	inline void set_startUI_4(GameObject_t1113636619 * value)
	{
		___startUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___startUI_4), value);
	}

	inline static int32_t get_offset_of_restartUI_5() { return static_cast<int32_t>(offsetof(GameLogic_1_t1992382119, ___restartUI_5)); }
	inline GameObject_t1113636619 * get_restartUI_5() const { return ___restartUI_5; }
	inline GameObject_t1113636619 ** get_address_of_restartUI_5() { return &___restartUI_5; }
	inline void set_restartUI_5(GameObject_t1113636619 * value)
	{
		___restartUI_5 = value;
		Il2CppCodeGenWriteBarrier((&___restartUI_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOGIC_1_T1992382119_H
#ifndef GAMELOGIC_3_T829582705_H
#define GAMELOGIC_3_T829582705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic_3
struct  GameLogic_3_t829582705  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameLogic_3::player
	GameObject_t1113636619 * ___player_4;
	// UnityEngine.GameObject GameLogic_3::eventSystem
	GameObject_t1113636619 * ___eventSystem_5;
	// UnityEngine.GameObject GameLogic_3::startUI
	GameObject_t1113636619 * ___startUI_6;
	// UnityEngine.GameObject GameLogic_3::restartUI
	GameObject_t1113636619 * ___restartUI_7;
	// UnityEngine.GameObject GameLogic_3::startPoint
	GameObject_t1113636619 * ___startPoint_8;
	// UnityEngine.GameObject GameLogic_3::playPoint
	GameObject_t1113636619 * ___playPoint_9;
	// UnityEngine.GameObject GameLogic_3::restartPoint
	GameObject_t1113636619 * ___restartPoint_10;
	// UnityEngine.GameObject[] GameLogic_3::puzzleSpheres
	GameObjectU5BU5D_t3328599146* ___puzzleSpheres_11;
	// System.Int32 GameLogic_3::puzzleLength
	int32_t ___puzzleLength_12;
	// System.Single GameLogic_3::puzzleSpeed
	float ___puzzleSpeed_13;
	// System.Int32[] GameLogic_3::puzzleOrder
	Int32U5BU5D_t385246372* ___puzzleOrder_14;
	// System.Int32 GameLogic_3::currentDisplayIndex
	int32_t ___currentDisplayIndex_15;
	// System.Int32 GameLogic_3::currentSolveIndex
	int32_t ___currentSolveIndex_16;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_eventSystem_5() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___eventSystem_5)); }
	inline GameObject_t1113636619 * get_eventSystem_5() const { return ___eventSystem_5; }
	inline GameObject_t1113636619 ** get_address_of_eventSystem_5() { return &___eventSystem_5; }
	inline void set_eventSystem_5(GameObject_t1113636619 * value)
	{
		___eventSystem_5 = value;
		Il2CppCodeGenWriteBarrier((&___eventSystem_5), value);
	}

	inline static int32_t get_offset_of_startUI_6() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___startUI_6)); }
	inline GameObject_t1113636619 * get_startUI_6() const { return ___startUI_6; }
	inline GameObject_t1113636619 ** get_address_of_startUI_6() { return &___startUI_6; }
	inline void set_startUI_6(GameObject_t1113636619 * value)
	{
		___startUI_6 = value;
		Il2CppCodeGenWriteBarrier((&___startUI_6), value);
	}

	inline static int32_t get_offset_of_restartUI_7() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___restartUI_7)); }
	inline GameObject_t1113636619 * get_restartUI_7() const { return ___restartUI_7; }
	inline GameObject_t1113636619 ** get_address_of_restartUI_7() { return &___restartUI_7; }
	inline void set_restartUI_7(GameObject_t1113636619 * value)
	{
		___restartUI_7 = value;
		Il2CppCodeGenWriteBarrier((&___restartUI_7), value);
	}

	inline static int32_t get_offset_of_startPoint_8() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___startPoint_8)); }
	inline GameObject_t1113636619 * get_startPoint_8() const { return ___startPoint_8; }
	inline GameObject_t1113636619 ** get_address_of_startPoint_8() { return &___startPoint_8; }
	inline void set_startPoint_8(GameObject_t1113636619 * value)
	{
		___startPoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPoint_8), value);
	}

	inline static int32_t get_offset_of_playPoint_9() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___playPoint_9)); }
	inline GameObject_t1113636619 * get_playPoint_9() const { return ___playPoint_9; }
	inline GameObject_t1113636619 ** get_address_of_playPoint_9() { return &___playPoint_9; }
	inline void set_playPoint_9(GameObject_t1113636619 * value)
	{
		___playPoint_9 = value;
		Il2CppCodeGenWriteBarrier((&___playPoint_9), value);
	}

	inline static int32_t get_offset_of_restartPoint_10() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___restartPoint_10)); }
	inline GameObject_t1113636619 * get_restartPoint_10() const { return ___restartPoint_10; }
	inline GameObject_t1113636619 ** get_address_of_restartPoint_10() { return &___restartPoint_10; }
	inline void set_restartPoint_10(GameObject_t1113636619 * value)
	{
		___restartPoint_10 = value;
		Il2CppCodeGenWriteBarrier((&___restartPoint_10), value);
	}

	inline static int32_t get_offset_of_puzzleSpheres_11() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___puzzleSpheres_11)); }
	inline GameObjectU5BU5D_t3328599146* get_puzzleSpheres_11() const { return ___puzzleSpheres_11; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_puzzleSpheres_11() { return &___puzzleSpheres_11; }
	inline void set_puzzleSpheres_11(GameObjectU5BU5D_t3328599146* value)
	{
		___puzzleSpheres_11 = value;
		Il2CppCodeGenWriteBarrier((&___puzzleSpheres_11), value);
	}

	inline static int32_t get_offset_of_puzzleLength_12() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___puzzleLength_12)); }
	inline int32_t get_puzzleLength_12() const { return ___puzzleLength_12; }
	inline int32_t* get_address_of_puzzleLength_12() { return &___puzzleLength_12; }
	inline void set_puzzleLength_12(int32_t value)
	{
		___puzzleLength_12 = value;
	}

	inline static int32_t get_offset_of_puzzleSpeed_13() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___puzzleSpeed_13)); }
	inline float get_puzzleSpeed_13() const { return ___puzzleSpeed_13; }
	inline float* get_address_of_puzzleSpeed_13() { return &___puzzleSpeed_13; }
	inline void set_puzzleSpeed_13(float value)
	{
		___puzzleSpeed_13 = value;
	}

	inline static int32_t get_offset_of_puzzleOrder_14() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___puzzleOrder_14)); }
	inline Int32U5BU5D_t385246372* get_puzzleOrder_14() const { return ___puzzleOrder_14; }
	inline Int32U5BU5D_t385246372** get_address_of_puzzleOrder_14() { return &___puzzleOrder_14; }
	inline void set_puzzleOrder_14(Int32U5BU5D_t385246372* value)
	{
		___puzzleOrder_14 = value;
		Il2CppCodeGenWriteBarrier((&___puzzleOrder_14), value);
	}

	inline static int32_t get_offset_of_currentDisplayIndex_15() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___currentDisplayIndex_15)); }
	inline int32_t get_currentDisplayIndex_15() const { return ___currentDisplayIndex_15; }
	inline int32_t* get_address_of_currentDisplayIndex_15() { return &___currentDisplayIndex_15; }
	inline void set_currentDisplayIndex_15(int32_t value)
	{
		___currentDisplayIndex_15 = value;
	}

	inline static int32_t get_offset_of_currentSolveIndex_16() { return static_cast<int32_t>(offsetof(GameLogic_3_t829582705, ___currentSolveIndex_16)); }
	inline int32_t get_currentSolveIndex_16() const { return ___currentSolveIndex_16; }
	inline int32_t* get_address_of_currentSolveIndex_16() { return &___currentSolveIndex_16; }
	inline void set_currentSolveIndex_16(int32_t value)
	{
		___currentSolveIndex_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOGIC_3_T829582705_H
#ifndef GAMELOGIC_4_FINAL_T607761564_H
#define GAMELOGIC_4_FINAL_T607761564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic_4_Final
struct  GameLogic_4_Final_t607761564  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameLogic_4_Final::player
	GameObject_t1113636619 * ___player_4;
	// UnityEngine.GameObject GameLogic_4_Final::eventSystem
	GameObject_t1113636619 * ___eventSystem_5;
	// UnityEngine.GameObject GameLogic_4_Final::startUI
	GameObject_t1113636619 * ___startUI_6;
	// UnityEngine.GameObject GameLogic_4_Final::restartUI
	GameObject_t1113636619 * ___restartUI_7;
	// UnityEngine.GameObject GameLogic_4_Final::startPoint
	GameObject_t1113636619 * ___startPoint_8;
	// UnityEngine.GameObject GameLogic_4_Final::playPoint
	GameObject_t1113636619 * ___playPoint_9;
	// UnityEngine.GameObject GameLogic_4_Final::restartPoint
	GameObject_t1113636619 * ___restartPoint_10;
	// UnityEngine.GameObject[] GameLogic_4_Final::puzzleSpheres
	GameObjectU5BU5D_t3328599146* ___puzzleSpheres_11;
	// System.Int32 GameLogic_4_Final::puzzleLength
	int32_t ___puzzleLength_12;
	// System.Single GameLogic_4_Final::puzzleSpeed
	float ___puzzleSpeed_13;
	// System.Int32[] GameLogic_4_Final::puzzleOrder
	Int32U5BU5D_t385246372* ___puzzleOrder_14;
	// System.Int32 GameLogic_4_Final::currentDisplayIndex
	int32_t ___currentDisplayIndex_15;
	// System.Int32 GameLogic_4_Final::currentSolveIndex
	int32_t ___currentSolveIndex_16;
	// UnityEngine.GameObject GameLogic_4_Final::failAudioHolder
	GameObject_t1113636619 * ___failAudioHolder_17;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_eventSystem_5() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___eventSystem_5)); }
	inline GameObject_t1113636619 * get_eventSystem_5() const { return ___eventSystem_5; }
	inline GameObject_t1113636619 ** get_address_of_eventSystem_5() { return &___eventSystem_5; }
	inline void set_eventSystem_5(GameObject_t1113636619 * value)
	{
		___eventSystem_5 = value;
		Il2CppCodeGenWriteBarrier((&___eventSystem_5), value);
	}

	inline static int32_t get_offset_of_startUI_6() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___startUI_6)); }
	inline GameObject_t1113636619 * get_startUI_6() const { return ___startUI_6; }
	inline GameObject_t1113636619 ** get_address_of_startUI_6() { return &___startUI_6; }
	inline void set_startUI_6(GameObject_t1113636619 * value)
	{
		___startUI_6 = value;
		Il2CppCodeGenWriteBarrier((&___startUI_6), value);
	}

	inline static int32_t get_offset_of_restartUI_7() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___restartUI_7)); }
	inline GameObject_t1113636619 * get_restartUI_7() const { return ___restartUI_7; }
	inline GameObject_t1113636619 ** get_address_of_restartUI_7() { return &___restartUI_7; }
	inline void set_restartUI_7(GameObject_t1113636619 * value)
	{
		___restartUI_7 = value;
		Il2CppCodeGenWriteBarrier((&___restartUI_7), value);
	}

	inline static int32_t get_offset_of_startPoint_8() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___startPoint_8)); }
	inline GameObject_t1113636619 * get_startPoint_8() const { return ___startPoint_8; }
	inline GameObject_t1113636619 ** get_address_of_startPoint_8() { return &___startPoint_8; }
	inline void set_startPoint_8(GameObject_t1113636619 * value)
	{
		___startPoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPoint_8), value);
	}

	inline static int32_t get_offset_of_playPoint_9() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___playPoint_9)); }
	inline GameObject_t1113636619 * get_playPoint_9() const { return ___playPoint_9; }
	inline GameObject_t1113636619 ** get_address_of_playPoint_9() { return &___playPoint_9; }
	inline void set_playPoint_9(GameObject_t1113636619 * value)
	{
		___playPoint_9 = value;
		Il2CppCodeGenWriteBarrier((&___playPoint_9), value);
	}

	inline static int32_t get_offset_of_restartPoint_10() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___restartPoint_10)); }
	inline GameObject_t1113636619 * get_restartPoint_10() const { return ___restartPoint_10; }
	inline GameObject_t1113636619 ** get_address_of_restartPoint_10() { return &___restartPoint_10; }
	inline void set_restartPoint_10(GameObject_t1113636619 * value)
	{
		___restartPoint_10 = value;
		Il2CppCodeGenWriteBarrier((&___restartPoint_10), value);
	}

	inline static int32_t get_offset_of_puzzleSpheres_11() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___puzzleSpheres_11)); }
	inline GameObjectU5BU5D_t3328599146* get_puzzleSpheres_11() const { return ___puzzleSpheres_11; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_puzzleSpheres_11() { return &___puzzleSpheres_11; }
	inline void set_puzzleSpheres_11(GameObjectU5BU5D_t3328599146* value)
	{
		___puzzleSpheres_11 = value;
		Il2CppCodeGenWriteBarrier((&___puzzleSpheres_11), value);
	}

	inline static int32_t get_offset_of_puzzleLength_12() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___puzzleLength_12)); }
	inline int32_t get_puzzleLength_12() const { return ___puzzleLength_12; }
	inline int32_t* get_address_of_puzzleLength_12() { return &___puzzleLength_12; }
	inline void set_puzzleLength_12(int32_t value)
	{
		___puzzleLength_12 = value;
	}

	inline static int32_t get_offset_of_puzzleSpeed_13() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___puzzleSpeed_13)); }
	inline float get_puzzleSpeed_13() const { return ___puzzleSpeed_13; }
	inline float* get_address_of_puzzleSpeed_13() { return &___puzzleSpeed_13; }
	inline void set_puzzleSpeed_13(float value)
	{
		___puzzleSpeed_13 = value;
	}

	inline static int32_t get_offset_of_puzzleOrder_14() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___puzzleOrder_14)); }
	inline Int32U5BU5D_t385246372* get_puzzleOrder_14() const { return ___puzzleOrder_14; }
	inline Int32U5BU5D_t385246372** get_address_of_puzzleOrder_14() { return &___puzzleOrder_14; }
	inline void set_puzzleOrder_14(Int32U5BU5D_t385246372* value)
	{
		___puzzleOrder_14 = value;
		Il2CppCodeGenWriteBarrier((&___puzzleOrder_14), value);
	}

	inline static int32_t get_offset_of_currentDisplayIndex_15() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___currentDisplayIndex_15)); }
	inline int32_t get_currentDisplayIndex_15() const { return ___currentDisplayIndex_15; }
	inline int32_t* get_address_of_currentDisplayIndex_15() { return &___currentDisplayIndex_15; }
	inline void set_currentDisplayIndex_15(int32_t value)
	{
		___currentDisplayIndex_15 = value;
	}

	inline static int32_t get_offset_of_currentSolveIndex_16() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___currentSolveIndex_16)); }
	inline int32_t get_currentSolveIndex_16() const { return ___currentSolveIndex_16; }
	inline int32_t* get_address_of_currentSolveIndex_16() { return &___currentSolveIndex_16; }
	inline void set_currentSolveIndex_16(int32_t value)
	{
		___currentSolveIndex_16 = value;
	}

	inline static int32_t get_offset_of_failAudioHolder_17() { return static_cast<int32_t>(offsetof(GameLogic_4_Final_t607761564, ___failAudioHolder_17)); }
	inline GameObject_t1113636619 * get_failAudioHolder_17() const { return ___failAudioHolder_17; }
	inline GameObject_t1113636619 ** get_address_of_failAudioHolder_17() { return &___failAudioHolder_17; }
	inline void set_failAudioHolder_17(GameObject_t1113636619 * value)
	{
		___failAudioHolder_17 = value;
		Il2CppCodeGenWriteBarrier((&___failAudioHolder_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOGIC_4_FINAL_T607761564_H
#ifndef GVRKEYBOARDDELEGATEBASE_T30895224_H
#define GVRKEYBOARDDELEGATEBASE_T30895224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboardDelegateBase
struct  GvrKeyboardDelegateBase_t30895224  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRKEYBOARDDELEGATEBASE_T30895224_H
#ifndef GVRVIDEOPLAYERTEXTURE_T3546202735_H
#define GVRVIDEOPLAYERTEXTURE_T3546202735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture
struct  GvrVideoPlayerTexture_t3546202735  : public MonoBehaviour_t3962482529
{
public:
	// System.IntPtr GvrVideoPlayerTexture::videoPlayerPtr
	intptr_t ___videoPlayerPtr_4;
	// System.Int32 GvrVideoPlayerTexture::videoPlayerEventBase
	int32_t ___videoPlayerEventBase_5;
	// UnityEngine.Texture GvrVideoPlayerTexture::initialTexture
	Texture_t3661962703 * ___initialTexture_6;
	// UnityEngine.Texture GvrVideoPlayerTexture::surfaceTexture
	Texture_t3661962703 * ___surfaceTexture_7;
	// System.Single[] GvrVideoPlayerTexture::videoMatrixRaw
	SingleU5BU5D_t1444911251* ___videoMatrixRaw_8;
	// UnityEngine.Matrix4x4 GvrVideoPlayerTexture::videoMatrix
	Matrix4x4_t1817901843  ___videoMatrix_9;
	// System.Int32 GvrVideoPlayerTexture::videoMatrixPropertyId
	int32_t ___videoMatrixPropertyId_10;
	// System.Int64 GvrVideoPlayerTexture::lastVideoTimestamp
	int64_t ___lastVideoTimestamp_11;
	// System.Boolean GvrVideoPlayerTexture::initialized
	bool ___initialized_12;
	// System.Int32 GvrVideoPlayerTexture::texWidth
	int32_t ___texWidth_13;
	// System.Int32 GvrVideoPlayerTexture::texHeight
	int32_t ___texHeight_14;
	// System.Int64 GvrVideoPlayerTexture::lastBufferedPosition
	int64_t ___lastBufferedPosition_15;
	// System.Single GvrVideoPlayerTexture::framecount
	float ___framecount_16;
	// UnityEngine.Renderer GvrVideoPlayerTexture::screen
	Renderer_t2627027031 * ___screen_17;
	// System.IntPtr GvrVideoPlayerTexture::renderEventFunction
	intptr_t ___renderEventFunction_18;
	// System.Boolean GvrVideoPlayerTexture::playOnResume
	bool ___playOnResume_19;
	// System.Collections.Generic.List`1<System.Action`1<System.Int32>> GvrVideoPlayerTexture::onEventCallbacks
	List_1_t300520794 * ___onEventCallbacks_20;
	// System.Collections.Generic.List`1<System.Action`2<System.String,System.String>> GvrVideoPlayerTexture::onExceptionCallbacks
	List_1_t1147278120 * ___onExceptionCallbacks_21;
	// UnityEngine.UI.Text GvrVideoPlayerTexture::statusText
	Text_t1901882714 * ___statusText_23;
	// GvrVideoPlayerTexture/VideoType GvrVideoPlayerTexture::videoType
	int32_t ___videoType_24;
	// System.String GvrVideoPlayerTexture::videoURL
	String_t* ___videoURL_25;
	// System.String GvrVideoPlayerTexture::videoContentID
	String_t* ___videoContentID_26;
	// System.String GvrVideoPlayerTexture::videoProviderId
	String_t* ___videoProviderId_27;
	// GvrVideoPlayerTexture/VideoResolution GvrVideoPlayerTexture::initialResolution
	int32_t ___initialResolution_28;
	// System.Boolean GvrVideoPlayerTexture::adjustAspectRatio
	bool ___adjustAspectRatio_29;
	// System.Boolean GvrVideoPlayerTexture::useSecurePath
	bool ___useSecurePath_30;

public:
	inline static int32_t get_offset_of_videoPlayerPtr_4() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoPlayerPtr_4)); }
	inline intptr_t get_videoPlayerPtr_4() const { return ___videoPlayerPtr_4; }
	inline intptr_t* get_address_of_videoPlayerPtr_4() { return &___videoPlayerPtr_4; }
	inline void set_videoPlayerPtr_4(intptr_t value)
	{
		___videoPlayerPtr_4 = value;
	}

	inline static int32_t get_offset_of_videoPlayerEventBase_5() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoPlayerEventBase_5)); }
	inline int32_t get_videoPlayerEventBase_5() const { return ___videoPlayerEventBase_5; }
	inline int32_t* get_address_of_videoPlayerEventBase_5() { return &___videoPlayerEventBase_5; }
	inline void set_videoPlayerEventBase_5(int32_t value)
	{
		___videoPlayerEventBase_5 = value;
	}

	inline static int32_t get_offset_of_initialTexture_6() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___initialTexture_6)); }
	inline Texture_t3661962703 * get_initialTexture_6() const { return ___initialTexture_6; }
	inline Texture_t3661962703 ** get_address_of_initialTexture_6() { return &___initialTexture_6; }
	inline void set_initialTexture_6(Texture_t3661962703 * value)
	{
		___initialTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___initialTexture_6), value);
	}

	inline static int32_t get_offset_of_surfaceTexture_7() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___surfaceTexture_7)); }
	inline Texture_t3661962703 * get_surfaceTexture_7() const { return ___surfaceTexture_7; }
	inline Texture_t3661962703 ** get_address_of_surfaceTexture_7() { return &___surfaceTexture_7; }
	inline void set_surfaceTexture_7(Texture_t3661962703 * value)
	{
		___surfaceTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___surfaceTexture_7), value);
	}

	inline static int32_t get_offset_of_videoMatrixRaw_8() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoMatrixRaw_8)); }
	inline SingleU5BU5D_t1444911251* get_videoMatrixRaw_8() const { return ___videoMatrixRaw_8; }
	inline SingleU5BU5D_t1444911251** get_address_of_videoMatrixRaw_8() { return &___videoMatrixRaw_8; }
	inline void set_videoMatrixRaw_8(SingleU5BU5D_t1444911251* value)
	{
		___videoMatrixRaw_8 = value;
		Il2CppCodeGenWriteBarrier((&___videoMatrixRaw_8), value);
	}

	inline static int32_t get_offset_of_videoMatrix_9() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoMatrix_9)); }
	inline Matrix4x4_t1817901843  get_videoMatrix_9() const { return ___videoMatrix_9; }
	inline Matrix4x4_t1817901843 * get_address_of_videoMatrix_9() { return &___videoMatrix_9; }
	inline void set_videoMatrix_9(Matrix4x4_t1817901843  value)
	{
		___videoMatrix_9 = value;
	}

	inline static int32_t get_offset_of_videoMatrixPropertyId_10() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoMatrixPropertyId_10)); }
	inline int32_t get_videoMatrixPropertyId_10() const { return ___videoMatrixPropertyId_10; }
	inline int32_t* get_address_of_videoMatrixPropertyId_10() { return &___videoMatrixPropertyId_10; }
	inline void set_videoMatrixPropertyId_10(int32_t value)
	{
		___videoMatrixPropertyId_10 = value;
	}

	inline static int32_t get_offset_of_lastVideoTimestamp_11() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___lastVideoTimestamp_11)); }
	inline int64_t get_lastVideoTimestamp_11() const { return ___lastVideoTimestamp_11; }
	inline int64_t* get_address_of_lastVideoTimestamp_11() { return &___lastVideoTimestamp_11; }
	inline void set_lastVideoTimestamp_11(int64_t value)
	{
		___lastVideoTimestamp_11 = value;
	}

	inline static int32_t get_offset_of_initialized_12() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___initialized_12)); }
	inline bool get_initialized_12() const { return ___initialized_12; }
	inline bool* get_address_of_initialized_12() { return &___initialized_12; }
	inline void set_initialized_12(bool value)
	{
		___initialized_12 = value;
	}

	inline static int32_t get_offset_of_texWidth_13() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___texWidth_13)); }
	inline int32_t get_texWidth_13() const { return ___texWidth_13; }
	inline int32_t* get_address_of_texWidth_13() { return &___texWidth_13; }
	inline void set_texWidth_13(int32_t value)
	{
		___texWidth_13 = value;
	}

	inline static int32_t get_offset_of_texHeight_14() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___texHeight_14)); }
	inline int32_t get_texHeight_14() const { return ___texHeight_14; }
	inline int32_t* get_address_of_texHeight_14() { return &___texHeight_14; }
	inline void set_texHeight_14(int32_t value)
	{
		___texHeight_14 = value;
	}

	inline static int32_t get_offset_of_lastBufferedPosition_15() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___lastBufferedPosition_15)); }
	inline int64_t get_lastBufferedPosition_15() const { return ___lastBufferedPosition_15; }
	inline int64_t* get_address_of_lastBufferedPosition_15() { return &___lastBufferedPosition_15; }
	inline void set_lastBufferedPosition_15(int64_t value)
	{
		___lastBufferedPosition_15 = value;
	}

	inline static int32_t get_offset_of_framecount_16() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___framecount_16)); }
	inline float get_framecount_16() const { return ___framecount_16; }
	inline float* get_address_of_framecount_16() { return &___framecount_16; }
	inline void set_framecount_16(float value)
	{
		___framecount_16 = value;
	}

	inline static int32_t get_offset_of_screen_17() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___screen_17)); }
	inline Renderer_t2627027031 * get_screen_17() const { return ___screen_17; }
	inline Renderer_t2627027031 ** get_address_of_screen_17() { return &___screen_17; }
	inline void set_screen_17(Renderer_t2627027031 * value)
	{
		___screen_17 = value;
		Il2CppCodeGenWriteBarrier((&___screen_17), value);
	}

	inline static int32_t get_offset_of_renderEventFunction_18() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___renderEventFunction_18)); }
	inline intptr_t get_renderEventFunction_18() const { return ___renderEventFunction_18; }
	inline intptr_t* get_address_of_renderEventFunction_18() { return &___renderEventFunction_18; }
	inline void set_renderEventFunction_18(intptr_t value)
	{
		___renderEventFunction_18 = value;
	}

	inline static int32_t get_offset_of_playOnResume_19() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___playOnResume_19)); }
	inline bool get_playOnResume_19() const { return ___playOnResume_19; }
	inline bool* get_address_of_playOnResume_19() { return &___playOnResume_19; }
	inline void set_playOnResume_19(bool value)
	{
		___playOnResume_19 = value;
	}

	inline static int32_t get_offset_of_onEventCallbacks_20() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___onEventCallbacks_20)); }
	inline List_1_t300520794 * get_onEventCallbacks_20() const { return ___onEventCallbacks_20; }
	inline List_1_t300520794 ** get_address_of_onEventCallbacks_20() { return &___onEventCallbacks_20; }
	inline void set_onEventCallbacks_20(List_1_t300520794 * value)
	{
		___onEventCallbacks_20 = value;
		Il2CppCodeGenWriteBarrier((&___onEventCallbacks_20), value);
	}

	inline static int32_t get_offset_of_onExceptionCallbacks_21() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___onExceptionCallbacks_21)); }
	inline List_1_t1147278120 * get_onExceptionCallbacks_21() const { return ___onExceptionCallbacks_21; }
	inline List_1_t1147278120 ** get_address_of_onExceptionCallbacks_21() { return &___onExceptionCallbacks_21; }
	inline void set_onExceptionCallbacks_21(List_1_t1147278120 * value)
	{
		___onExceptionCallbacks_21 = value;
		Il2CppCodeGenWriteBarrier((&___onExceptionCallbacks_21), value);
	}

	inline static int32_t get_offset_of_statusText_23() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___statusText_23)); }
	inline Text_t1901882714 * get_statusText_23() const { return ___statusText_23; }
	inline Text_t1901882714 ** get_address_of_statusText_23() { return &___statusText_23; }
	inline void set_statusText_23(Text_t1901882714 * value)
	{
		___statusText_23 = value;
		Il2CppCodeGenWriteBarrier((&___statusText_23), value);
	}

	inline static int32_t get_offset_of_videoType_24() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoType_24)); }
	inline int32_t get_videoType_24() const { return ___videoType_24; }
	inline int32_t* get_address_of_videoType_24() { return &___videoType_24; }
	inline void set_videoType_24(int32_t value)
	{
		___videoType_24 = value;
	}

	inline static int32_t get_offset_of_videoURL_25() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoURL_25)); }
	inline String_t* get_videoURL_25() const { return ___videoURL_25; }
	inline String_t** get_address_of_videoURL_25() { return &___videoURL_25; }
	inline void set_videoURL_25(String_t* value)
	{
		___videoURL_25 = value;
		Il2CppCodeGenWriteBarrier((&___videoURL_25), value);
	}

	inline static int32_t get_offset_of_videoContentID_26() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoContentID_26)); }
	inline String_t* get_videoContentID_26() const { return ___videoContentID_26; }
	inline String_t** get_address_of_videoContentID_26() { return &___videoContentID_26; }
	inline void set_videoContentID_26(String_t* value)
	{
		___videoContentID_26 = value;
		Il2CppCodeGenWriteBarrier((&___videoContentID_26), value);
	}

	inline static int32_t get_offset_of_videoProviderId_27() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___videoProviderId_27)); }
	inline String_t* get_videoProviderId_27() const { return ___videoProviderId_27; }
	inline String_t** get_address_of_videoProviderId_27() { return &___videoProviderId_27; }
	inline void set_videoProviderId_27(String_t* value)
	{
		___videoProviderId_27 = value;
		Il2CppCodeGenWriteBarrier((&___videoProviderId_27), value);
	}

	inline static int32_t get_offset_of_initialResolution_28() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___initialResolution_28)); }
	inline int32_t get_initialResolution_28() const { return ___initialResolution_28; }
	inline int32_t* get_address_of_initialResolution_28() { return &___initialResolution_28; }
	inline void set_initialResolution_28(int32_t value)
	{
		___initialResolution_28 = value;
	}

	inline static int32_t get_offset_of_adjustAspectRatio_29() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___adjustAspectRatio_29)); }
	inline bool get_adjustAspectRatio_29() const { return ___adjustAspectRatio_29; }
	inline bool* get_address_of_adjustAspectRatio_29() { return &___adjustAspectRatio_29; }
	inline void set_adjustAspectRatio_29(bool value)
	{
		___adjustAspectRatio_29 = value;
	}

	inline static int32_t get_offset_of_useSecurePath_30() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735, ___useSecurePath_30)); }
	inline bool get_useSecurePath_30() const { return ___useSecurePath_30; }
	inline bool* get_address_of_useSecurePath_30() { return &___useSecurePath_30; }
	inline void set_useSecurePath_30(bool value)
	{
		___useSecurePath_30 = value;
	}
};

struct GvrVideoPlayerTexture_t3546202735_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<System.Action> GvrVideoPlayerTexture::ExecuteOnMainThread
	Queue_1_t1110636971 * ___ExecuteOnMainThread_22;
	// System.Action`2<System.String,System.String> GvrVideoPlayerTexture::<>f__am$cache0
	Action_2_t3970170674 * ___U3CU3Ef__amU24cache0_32;
	// GvrVideoPlayerTexture/OnVideoEventCallback GvrVideoPlayerTexture::<>f__mg$cache0
	OnVideoEventCallback_t2376626694 * ___U3CU3Ef__mgU24cache0_33;
	// GvrVideoPlayerTexture/OnExceptionCallback GvrVideoPlayerTexture::<>f__mg$cache1
	OnExceptionCallback_t1696428116 * ___U3CU3Ef__mgU24cache1_34;

public:
	inline static int32_t get_offset_of_ExecuteOnMainThread_22() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735_StaticFields, ___ExecuteOnMainThread_22)); }
	inline Queue_1_t1110636971 * get_ExecuteOnMainThread_22() const { return ___ExecuteOnMainThread_22; }
	inline Queue_1_t1110636971 ** get_address_of_ExecuteOnMainThread_22() { return &___ExecuteOnMainThread_22; }
	inline void set_ExecuteOnMainThread_22(Queue_1_t1110636971 * value)
	{
		___ExecuteOnMainThread_22 = value;
		Il2CppCodeGenWriteBarrier((&___ExecuteOnMainThread_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_32() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735_StaticFields, ___U3CU3Ef__amU24cache0_32)); }
	inline Action_2_t3970170674 * get_U3CU3Ef__amU24cache0_32() const { return ___U3CU3Ef__amU24cache0_32; }
	inline Action_2_t3970170674 ** get_address_of_U3CU3Ef__amU24cache0_32() { return &___U3CU3Ef__amU24cache0_32; }
	inline void set_U3CU3Ef__amU24cache0_32(Action_2_t3970170674 * value)
	{
		___U3CU3Ef__amU24cache0_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_33() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735_StaticFields, ___U3CU3Ef__mgU24cache0_33)); }
	inline OnVideoEventCallback_t2376626694 * get_U3CU3Ef__mgU24cache0_33() const { return ___U3CU3Ef__mgU24cache0_33; }
	inline OnVideoEventCallback_t2376626694 ** get_address_of_U3CU3Ef__mgU24cache0_33() { return &___U3CU3Ef__mgU24cache0_33; }
	inline void set_U3CU3Ef__mgU24cache0_33(OnVideoEventCallback_t2376626694 * value)
	{
		___U3CU3Ef__mgU24cache0_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_34() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t3546202735_StaticFields, ___U3CU3Ef__mgU24cache1_34)); }
	inline OnExceptionCallback_t1696428116 * get_U3CU3Ef__mgU24cache1_34() const { return ___U3CU3Ef__mgU24cache1_34; }
	inline OnExceptionCallback_t1696428116 ** get_address_of_U3CU3Ef__mgU24cache1_34() { return &___U3CU3Ef__mgU24cache1_34; }
	inline void set_U3CU3Ef__mgU24cache1_34(OnExceptionCallback_t1696428116 * value)
	{
		___U3CU3Ef__mgU24cache1_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRVIDEOPLAYERTEXTURE_T3546202735_H
#ifndef LIGHTUP_T751348637_H
#define LIGHTUP_T751348637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightUp
struct  LightUp_t751348637  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material LightUp::defaultMaterial
	Material_t340375123 * ___defaultMaterial_4;
	// UnityEngine.Material LightUp::lightUpMaterial
	Material_t340375123 * ___lightUpMaterial_5;
	// GameLogic LightUp::gameLogic
	GameLogic_t3731221617 * ___gameLogic_6;

public:
	inline static int32_t get_offset_of_defaultMaterial_4() { return static_cast<int32_t>(offsetof(LightUp_t751348637, ___defaultMaterial_4)); }
	inline Material_t340375123 * get_defaultMaterial_4() const { return ___defaultMaterial_4; }
	inline Material_t340375123 ** get_address_of_defaultMaterial_4() { return &___defaultMaterial_4; }
	inline void set_defaultMaterial_4(Material_t340375123 * value)
	{
		___defaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMaterial_4), value);
	}

	inline static int32_t get_offset_of_lightUpMaterial_5() { return static_cast<int32_t>(offsetof(LightUp_t751348637, ___lightUpMaterial_5)); }
	inline Material_t340375123 * get_lightUpMaterial_5() const { return ___lightUpMaterial_5; }
	inline Material_t340375123 ** get_address_of_lightUpMaterial_5() { return &___lightUpMaterial_5; }
	inline void set_lightUpMaterial_5(Material_t340375123 * value)
	{
		___lightUpMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightUpMaterial_5), value);
	}

	inline static int32_t get_offset_of_gameLogic_6() { return static_cast<int32_t>(offsetof(LightUp_t751348637, ___gameLogic_6)); }
	inline GameLogic_t3731221617 * get_gameLogic_6() const { return ___gameLogic_6; }
	inline GameLogic_t3731221617 ** get_address_of_gameLogic_6() { return &___gameLogic_6; }
	inline void set_gameLogic_6(GameLogic_t3731221617 * value)
	{
		___gameLogic_6 = value;
		Il2CppCodeGenWriteBarrier((&___gameLogic_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTUP_T751348637_H
#ifndef LIGHTUP_1_T2853573179_H
#define LIGHTUP_1_T2853573179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightUp_1
struct  LightUp_1_t2853573179  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material LightUp_1::defaultMaterial
	Material_t340375123 * ___defaultMaterial_4;
	// UnityEngine.Material LightUp_1::lightUpMaterial
	Material_t340375123 * ___lightUpMaterial_5;
	// GameLogic LightUp_1::gameLogic
	GameLogic_t3731221617 * ___gameLogic_6;

public:
	inline static int32_t get_offset_of_defaultMaterial_4() { return static_cast<int32_t>(offsetof(LightUp_1_t2853573179, ___defaultMaterial_4)); }
	inline Material_t340375123 * get_defaultMaterial_4() const { return ___defaultMaterial_4; }
	inline Material_t340375123 ** get_address_of_defaultMaterial_4() { return &___defaultMaterial_4; }
	inline void set_defaultMaterial_4(Material_t340375123 * value)
	{
		___defaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMaterial_4), value);
	}

	inline static int32_t get_offset_of_lightUpMaterial_5() { return static_cast<int32_t>(offsetof(LightUp_1_t2853573179, ___lightUpMaterial_5)); }
	inline Material_t340375123 * get_lightUpMaterial_5() const { return ___lightUpMaterial_5; }
	inline Material_t340375123 ** get_address_of_lightUpMaterial_5() { return &___lightUpMaterial_5; }
	inline void set_lightUpMaterial_5(Material_t340375123 * value)
	{
		___lightUpMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightUpMaterial_5), value);
	}

	inline static int32_t get_offset_of_gameLogic_6() { return static_cast<int32_t>(offsetof(LightUp_1_t2853573179, ___gameLogic_6)); }
	inline GameLogic_t3731221617 * get_gameLogic_6() const { return ___gameLogic_6; }
	inline GameLogic_t3731221617 ** get_address_of_gameLogic_6() { return &___gameLogic_6; }
	inline void set_gameLogic_6(GameLogic_t3731221617 * value)
	{
		___gameLogic_6 = value;
		Il2CppCodeGenWriteBarrier((&___gameLogic_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTUP_1_T2853573179_H
#ifndef LIGHTUP_2_FINAL_T1468263550_H
#define LIGHTUP_2_FINAL_T1468263550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightUp_2_Final
struct  LightUp_2_Final_t1468263550  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material LightUp_2_Final::defaultMaterial
	Material_t340375123 * ___defaultMaterial_4;
	// UnityEngine.Material LightUp_2_Final::lightUpMaterial
	Material_t340375123 * ___lightUpMaterial_5;
	// GameLogic LightUp_2_Final::gameLogic
	GameLogic_t3731221617 * ___gameLogic_6;

public:
	inline static int32_t get_offset_of_defaultMaterial_4() { return static_cast<int32_t>(offsetof(LightUp_2_Final_t1468263550, ___defaultMaterial_4)); }
	inline Material_t340375123 * get_defaultMaterial_4() const { return ___defaultMaterial_4; }
	inline Material_t340375123 ** get_address_of_defaultMaterial_4() { return &___defaultMaterial_4; }
	inline void set_defaultMaterial_4(Material_t340375123 * value)
	{
		___defaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMaterial_4), value);
	}

	inline static int32_t get_offset_of_lightUpMaterial_5() { return static_cast<int32_t>(offsetof(LightUp_2_Final_t1468263550, ___lightUpMaterial_5)); }
	inline Material_t340375123 * get_lightUpMaterial_5() const { return ___lightUpMaterial_5; }
	inline Material_t340375123 ** get_address_of_lightUpMaterial_5() { return &___lightUpMaterial_5; }
	inline void set_lightUpMaterial_5(Material_t340375123 * value)
	{
		___lightUpMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightUpMaterial_5), value);
	}

	inline static int32_t get_offset_of_gameLogic_6() { return static_cast<int32_t>(offsetof(LightUp_2_Final_t1468263550, ___gameLogic_6)); }
	inline GameLogic_t3731221617 * get_gameLogic_6() const { return ___gameLogic_6; }
	inline GameLogic_t3731221617 ** get_address_of_gameLogic_6() { return &___gameLogic_6; }
	inline void set_gameLogic_6(GameLogic_t3731221617 * value)
	{
		___gameLogic_6 = value;
		Il2CppCodeGenWriteBarrier((&___gameLogic_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTUP_2_FINAL_T1468263550_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef DROPDOWN_T2274391225_H
#define DROPDOWN_T2274391225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown
struct  Dropdown_t2274391225  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t3704657025 * ___m_Template_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t1901882714 * ___m_CaptionText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t2670269651 * ___m_CaptionImage_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t1901882714 * ___m_ItemText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t2670269651 * ___m_ItemImage_22;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_23;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t1438173104 * ___m_Options_24;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t4040729994 * ___m_OnValueChanged_25;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t1113636619 * ___m_Dropdown_26;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t1113636619 * ___m_Blocker_27;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t2924027637 * ___m_Items_28;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t3520241082 * ___m_AlphaTweenRunner_29;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_30;

public:
	inline static int32_t get_offset_of_m_Template_18() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Template_18)); }
	inline RectTransform_t3704657025 * get_m_Template_18() const { return ___m_Template_18; }
	inline RectTransform_t3704657025 ** get_address_of_m_Template_18() { return &___m_Template_18; }
	inline void set_m_Template_18(RectTransform_t3704657025 * value)
	{
		___m_Template_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Template_18), value);
	}

	inline static int32_t get_offset_of_m_CaptionText_19() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionText_19)); }
	inline Text_t1901882714 * get_m_CaptionText_19() const { return ___m_CaptionText_19; }
	inline Text_t1901882714 ** get_address_of_m_CaptionText_19() { return &___m_CaptionText_19; }
	inline void set_m_CaptionText_19(Text_t1901882714 * value)
	{
		___m_CaptionText_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionText_19), value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_20() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionImage_20)); }
	inline Image_t2670269651 * get_m_CaptionImage_20() const { return ___m_CaptionImage_20; }
	inline Image_t2670269651 ** get_address_of_m_CaptionImage_20() { return &___m_CaptionImage_20; }
	inline void set_m_CaptionImage_20(Image_t2670269651 * value)
	{
		___m_CaptionImage_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionImage_20), value);
	}

	inline static int32_t get_offset_of_m_ItemText_21() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemText_21)); }
	inline Text_t1901882714 * get_m_ItemText_21() const { return ___m_ItemText_21; }
	inline Text_t1901882714 ** get_address_of_m_ItemText_21() { return &___m_ItemText_21; }
	inline void set_m_ItemText_21(Text_t1901882714 * value)
	{
		___m_ItemText_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemText_21), value);
	}

	inline static int32_t get_offset_of_m_ItemImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemImage_22)); }
	inline Image_t2670269651 * get_m_ItemImage_22() const { return ___m_ItemImage_22; }
	inline Image_t2670269651 ** get_address_of_m_ItemImage_22() { return &___m_ItemImage_22; }
	inline void set_m_ItemImage_22(Image_t2670269651 * value)
	{
		___m_ItemImage_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemImage_22), value);
	}

	inline static int32_t get_offset_of_m_Value_23() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Value_23)); }
	inline int32_t get_m_Value_23() const { return ___m_Value_23; }
	inline int32_t* get_address_of_m_Value_23() { return &___m_Value_23; }
	inline void set_m_Value_23(int32_t value)
	{
		___m_Value_23 = value;
	}

	inline static int32_t get_offset_of_m_Options_24() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Options_24)); }
	inline OptionDataList_t1438173104 * get_m_Options_24() const { return ___m_Options_24; }
	inline OptionDataList_t1438173104 ** get_address_of_m_Options_24() { return &___m_Options_24; }
	inline void set_m_Options_24(OptionDataList_t1438173104 * value)
	{
		___m_Options_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Options_24), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_OnValueChanged_25)); }
	inline DropdownEvent_t4040729994 * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline DropdownEvent_t4040729994 ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(DropdownEvent_t4040729994 * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_25), value);
	}

	inline static int32_t get_offset_of_m_Dropdown_26() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Dropdown_26)); }
	inline GameObject_t1113636619 * get_m_Dropdown_26() const { return ___m_Dropdown_26; }
	inline GameObject_t1113636619 ** get_address_of_m_Dropdown_26() { return &___m_Dropdown_26; }
	inline void set_m_Dropdown_26(GameObject_t1113636619 * value)
	{
		___m_Dropdown_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dropdown_26), value);
	}

	inline static int32_t get_offset_of_m_Blocker_27() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Blocker_27)); }
	inline GameObject_t1113636619 * get_m_Blocker_27() const { return ___m_Blocker_27; }
	inline GameObject_t1113636619 ** get_address_of_m_Blocker_27() { return &___m_Blocker_27; }
	inline void set_m_Blocker_27(GameObject_t1113636619 * value)
	{
		___m_Blocker_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Blocker_27), value);
	}

	inline static int32_t get_offset_of_m_Items_28() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Items_28)); }
	inline List_1_t2924027637 * get_m_Items_28() const { return ___m_Items_28; }
	inline List_1_t2924027637 ** get_address_of_m_Items_28() { return &___m_Items_28; }
	inline void set_m_Items_28(List_1_t2924027637 * value)
	{
		___m_Items_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_Items_28), value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_29() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_AlphaTweenRunner_29)); }
	inline TweenRunner_1_t3520241082 * get_m_AlphaTweenRunner_29() const { return ___m_AlphaTweenRunner_29; }
	inline TweenRunner_1_t3520241082 ** get_address_of_m_AlphaTweenRunner_29() { return &___m_AlphaTweenRunner_29; }
	inline void set_m_AlphaTweenRunner_29(TweenRunner_1_t3520241082 * value)
	{
		___m_AlphaTweenRunner_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlphaTweenRunner_29), value);
	}

	inline static int32_t get_offset_of_validTemplate_30() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___validTemplate_30)); }
	inline bool get_validTemplate_30() const { return ___validTemplate_30; }
	inline bool* get_address_of_validTemplate_30() { return &___validTemplate_30; }
	inline void set_validTemplate_30(bool value)
	{
		___validTemplate_30 = value;
	}
};

struct Dropdown_t2274391225_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t3270282352 * ___s_NoOptionData_31;

public:
	inline static int32_t get_offset_of_s_NoOptionData_31() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225_StaticFields, ___s_NoOptionData_31)); }
	inline OptionData_t3270282352 * get_s_NoOptionData_31() const { return ___s_NoOptionData_31; }
	inline OptionData_t3270282352 ** get_address_of_s_NoOptionData_31() { return &___s_NoOptionData_31; }
	inline void set_s_NoOptionData_31(OptionData_t3270282352 * value)
	{
		___s_NoOptionData_31 = value;
		Il2CppCodeGenWriteBarrier((&___s_NoOptionData_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPDOWN_T2274391225_H
#ifndef GVRDROPDOWN_T2772907210_H
#define GVRDROPDOWN_T2772907210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrDropdown
struct  GvrDropdown_t2772907210  : public Dropdown_t2274391225
{
public:
	// UnityEngine.GameObject GvrDropdown::currentBlocker
	GameObject_t1113636619 * ___currentBlocker_32;

public:
	inline static int32_t get_offset_of_currentBlocker_32() { return static_cast<int32_t>(offsetof(GvrDropdown_t2772907210, ___currentBlocker_32)); }
	inline GameObject_t1113636619 * get_currentBlocker_32() const { return ___currentBlocker_32; }
	inline GameObject_t1113636619 ** get_address_of_currentBlocker_32() { return &___currentBlocker_32; }
	inline void set_currentBlocker_32(GameObject_t1113636619 * value)
	{
		___currentBlocker_32 = value;
		Il2CppCodeGenWriteBarrier((&___currentBlocker_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GVRDROPDOWN_T2772907210_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (StandardCallback_t3095007891), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (EditTextCallback_t1702213000), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (ErrorCallback_t2310212740), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (KeyboardCallback_t3330588312), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (U3CExecuterU3Ec__Iterator0_t892308174), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[4] = 
{
	U3CExecuterU3Ec__Iterator0_t892308174::get_offset_of_U24this_0(),
	U3CExecuterU3Ec__Iterator0_t892308174::get_offset_of_U24current_1(),
	U3CExecuterU3Ec__Iterator0_t892308174::get_offset_of_U24disposing_2(),
	U3CExecuterU3Ec__Iterator0_t892308174::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (GvrKeyboardDelegateBase_t30895224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (GvrKeyboardIntent_t3874861606), -1, sizeof(GvrKeyboardIntent_t3874861606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2306[3] = 
{
	0,
	0,
	GvrKeyboardIntent_t3874861606_StaticFields::get_offset_of_theInstance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (KeyboardCallback_t4011255843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (KeyboardProviderFactory_t3069358895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (AndroidNativeKeyboardProvider_t4081466012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2310[21] = 
{
	AndroidNativeKeyboardProvider_t4081466012::get_offset_of_renderEventFunction_0(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	AndroidNativeKeyboardProvider_t4081466012::get_offset_of_keyboard_context_9(),
	0,
	0,
	0,
	0,
	0,
	0,
	AndroidNativeKeyboardProvider_t4081466012::get_offset_of_mode_16(),
	AndroidNativeKeyboardProvider_t4081466012::get_offset_of_editorText_17(),
	AndroidNativeKeyboardProvider_t4081466012::get_offset_of_worldMatrix_18(),
	AndroidNativeKeyboardProvider_t4081466012::get_offset_of_isValid_19(),
	AndroidNativeKeyboardProvider_t4081466012::get_offset_of_isReady_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (gvr_clock_time_point_t2797008802)+ sizeof (RuntimeObject), sizeof(gvr_clock_time_point_t2797008802 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2311[1] = 
{
	gvr_clock_time_point_t2797008802::get_offset_of_monotonic_system_time_nanos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (gvr_recti_t2249612514)+ sizeof (RuntimeObject), sizeof(gvr_recti_t2249612514 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2312[4] = 
{
	gvr_recti_t2249612514::get_offset_of_left_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	gvr_recti_t2249612514::get_offset_of_right_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	gvr_recti_t2249612514::get_offset_of_bottom_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	gvr_recti_t2249612514::get_offset_of_top_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (DummyKeyboardProvider_t4235634217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[2] = 
{
	DummyKeyboardProvider_t4235634217::get_offset_of_dummyState_0(),
	DummyKeyboardProvider_t4235634217::get_offset_of_U3CEditorTextU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (EmulatorKeyboardProvider_t2389719130), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2314[7] = 
{
	EmulatorKeyboardProvider_t2389719130::get_offset_of_stub_0(),
	EmulatorKeyboardProvider_t2389719130::get_offset_of_showing_1(),
	EmulatorKeyboardProvider_t2389719130::get_offset_of_keyboardCallback_2(),
	EmulatorKeyboardProvider_t2389719130::get_offset_of_editorText_3(),
	EmulatorKeyboardProvider_t2389719130::get_offset_of_mode_4(),
	EmulatorKeyboardProvider_t2389719130::get_offset_of_worldMatrix_5(),
	EmulatorKeyboardProvider_t2389719130::get_offset_of_isValid_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (KeyboardState_t4109162649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2315[5] = 
{
	KeyboardState_t4109162649::get_offset_of_editorText_0(),
	KeyboardState_t4109162649::get_offset_of_mode_1(),
	KeyboardState_t4109162649::get_offset_of_isValid_2(),
	KeyboardState_t4109162649::get_offset_of_isReady_3(),
	KeyboardState_t4109162649::get_offset_of_worldMatrix_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (Pose3D_t2649470188), -1, sizeof(Pose3D_t2649470188_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2316[4] = 
{
	Pose3D_t2649470188_StaticFields::get_offset_of_FLIP_Z_0(),
	Pose3D_t2649470188::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t2649470188::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t2649470188::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (MutablePose3D_t3352419872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (GvrInfo_t2187998870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2318[2] = 
{
	GvrInfo_t2187998870::get_offset_of_text_0(),
	GvrInfo_t2187998870::get_offset_of_numLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (GvrDropdown_t2772907210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2319[1] = 
{
	GvrDropdown_t2772907210::get_offset_of_currentBlocker_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (GvrActivityHelper_t700161863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (GvrCursorHelper_t4026897861), -1, sizeof(GvrCursorHelper_t4026897861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2321[2] = 
{
	GvrCursorHelper_t4026897861_StaticFields::get_offset_of_cachedHeadEmulationActive_0(),
	GvrCursorHelper_t4026897861_StaticFields::get_offset_of_cachedControllerEmulationActive_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (GvrDaydreamApi_t820520409), -1, sizeof(GvrDaydreamApi_t820520409_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2322[5] = 
{
	0,
	0,
	0,
	0,
	GvrDaydreamApi_t820520409_StaticFields::get_offset_of_m_instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (U3CLaunchVrHomeAsyncU3Ec__AnonStorey0_t1042273844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[1] = 
{
	U3CLaunchVrHomeAsyncU3Ec__AnonStorey0_t1042273844::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (GvrIntent_t255451010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2324[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (GvrMathHelpers_t769385329), -1, sizeof(GvrMathHelpers_t769385329_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2325[1] = 
{
	GvrMathHelpers_t769385329_StaticFields::get_offset_of_sphericalCoordinatesResult_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (GvrUIHelpers_t853958893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (GvrVideoPlayerTexture_t3546202735), -1, sizeof(GvrVideoPlayerTexture_t3546202735_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2327[31] = 
{
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoPlayerPtr_4(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoPlayerEventBase_5(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_initialTexture_6(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_surfaceTexture_7(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoMatrixRaw_8(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoMatrix_9(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoMatrixPropertyId_10(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_lastVideoTimestamp_11(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_initialized_12(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_texWidth_13(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_texHeight_14(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_lastBufferedPosition_15(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_framecount_16(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_screen_17(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_renderEventFunction_18(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_playOnResume_19(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_onEventCallbacks_20(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_onExceptionCallbacks_21(),
	GvrVideoPlayerTexture_t3546202735_StaticFields::get_offset_of_ExecuteOnMainThread_22(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_statusText_23(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoType_24(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoURL_25(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoContentID_26(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_videoProviderId_27(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_initialResolution_28(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_adjustAspectRatio_29(),
	GvrVideoPlayerTexture_t3546202735::get_offset_of_useSecurePath_30(),
	0,
	GvrVideoPlayerTexture_t3546202735_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_32(),
	GvrVideoPlayerTexture_t3546202735_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_33(),
	GvrVideoPlayerTexture_t3546202735_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (VideoType_t2491562340)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2328[4] = 
{
	VideoType_t2491562340::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (VideoResolution_t1062057780)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2329[6] = 
{
	VideoResolution_t1062057780::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (VideoPlayerState_t3323603301)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2330[6] = 
{
	VideoPlayerState_t3323603301::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (VideoEvents_t3555787859)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2331[6] = 
{
	VideoEvents_t3555787859::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (StereoMode_t1039127149)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2332[5] = 
{
	StereoMode_t1039127149::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (RenderCommand_t1121160834)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2333[8] = 
{
	RenderCommand_t1121160834::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (OnVideoEventCallback_t2376626694), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (OnExceptionCallback_t1696428116), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (U3CInternalOnVideoEventCallbackU3Ec__AnonStorey0_t2222373319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2336[2] = 
{
	U3CInternalOnVideoEventCallbackU3Ec__AnonStorey0_t2222373319::get_offset_of_player_0(),
	U3CInternalOnVideoEventCallbackU3Ec__AnonStorey0_t2222373319::get_offset_of_eventId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2337[3] = 
{
	U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987::get_offset_of_player_0(),
	U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987::get_offset_of_type_1(),
	U3CInternalOnExceptionCallbackU3Ec__AnonStorey1_t3301768987::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (LightUp_t751348637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2338[3] = 
{
	LightUp_t751348637::get_offset_of_defaultMaterial_4(),
	LightUp_t751348637::get_offset_of_lightUpMaterial_5(),
	LightUp_t751348637::get_offset_of_gameLogic_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { sizeof (U3CLightForU3Ec__Iterator0_t3322656041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2339[5] = 
{
	U3CLightForU3Ec__Iterator0_t3322656041::get_offset_of_duration_0(),
	U3CLightForU3Ec__Iterator0_t3322656041::get_offset_of_U24this_1(),
	U3CLightForU3Ec__Iterator0_t3322656041::get_offset_of_U24current_2(),
	U3CLightForU3Ec__Iterator0_t3322656041::get_offset_of_U24disposing_3(),
	U3CLightForU3Ec__Iterator0_t3322656041::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (GameLogic_1_t1992382119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[2] = 
{
	GameLogic_1_t1992382119::get_offset_of_startUI_4(),
	GameLogic_1_t1992382119::get_offset_of_restartUI_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (GameLogic_t3731221617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2341[13] = 
{
	GameLogic_t3731221617::get_offset_of_player_4(),
	GameLogic_t3731221617::get_offset_of_eventSystem_5(),
	GameLogic_t3731221617::get_offset_of_startUI_6(),
	GameLogic_t3731221617::get_offset_of_restartUI_7(),
	GameLogic_t3731221617::get_offset_of_startPoint_8(),
	GameLogic_t3731221617::get_offset_of_playPoint_9(),
	GameLogic_t3731221617::get_offset_of_restartPoint_10(),
	GameLogic_t3731221617::get_offset_of_puzzleSpheres_11(),
	GameLogic_t3731221617::get_offset_of_puzzleLength_12(),
	GameLogic_t3731221617::get_offset_of_puzzleSpeed_13(),
	GameLogic_t3731221617::get_offset_of_puzzleOrder_14(),
	GameLogic_t3731221617::get_offset_of_currentDisplayIndex_15(),
	GameLogic_t3731221617::get_offset_of_currentSolveIndex_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (GameLogic_3_t829582705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2342[13] = 
{
	GameLogic_3_t829582705::get_offset_of_player_4(),
	GameLogic_3_t829582705::get_offset_of_eventSystem_5(),
	GameLogic_3_t829582705::get_offset_of_startUI_6(),
	GameLogic_3_t829582705::get_offset_of_restartUI_7(),
	GameLogic_3_t829582705::get_offset_of_startPoint_8(),
	GameLogic_3_t829582705::get_offset_of_playPoint_9(),
	GameLogic_3_t829582705::get_offset_of_restartPoint_10(),
	GameLogic_3_t829582705::get_offset_of_puzzleSpheres_11(),
	GameLogic_3_t829582705::get_offset_of_puzzleLength_12(),
	GameLogic_3_t829582705::get_offset_of_puzzleSpeed_13(),
	GameLogic_3_t829582705::get_offset_of_puzzleOrder_14(),
	GameLogic_3_t829582705::get_offset_of_currentDisplayIndex_15(),
	GameLogic_3_t829582705::get_offset_of_currentSolveIndex_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (GameLogic_4_Final_t607761564), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2343[14] = 
{
	GameLogic_4_Final_t607761564::get_offset_of_player_4(),
	GameLogic_4_Final_t607761564::get_offset_of_eventSystem_5(),
	GameLogic_4_Final_t607761564::get_offset_of_startUI_6(),
	GameLogic_4_Final_t607761564::get_offset_of_restartUI_7(),
	GameLogic_4_Final_t607761564::get_offset_of_startPoint_8(),
	GameLogic_4_Final_t607761564::get_offset_of_playPoint_9(),
	GameLogic_4_Final_t607761564::get_offset_of_restartPoint_10(),
	GameLogic_4_Final_t607761564::get_offset_of_puzzleSpheres_11(),
	GameLogic_4_Final_t607761564::get_offset_of_puzzleLength_12(),
	GameLogic_4_Final_t607761564::get_offset_of_puzzleSpeed_13(),
	GameLogic_4_Final_t607761564::get_offset_of_puzzleOrder_14(),
	GameLogic_4_Final_t607761564::get_offset_of_currentDisplayIndex_15(),
	GameLogic_4_Final_t607761564::get_offset_of_currentSolveIndex_16(),
	GameLogic_4_Final_t607761564::get_offset_of_failAudioHolder_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (LightUp_1_t2853573179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2344[3] = 
{
	LightUp_1_t2853573179::get_offset_of_defaultMaterial_4(),
	LightUp_1_t2853573179::get_offset_of_lightUpMaterial_5(),
	LightUp_1_t2853573179::get_offset_of_gameLogic_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (U3CLightForU3Ec__Iterator0_t1970725915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2345[5] = 
{
	U3CLightForU3Ec__Iterator0_t1970725915::get_offset_of_duration_0(),
	U3CLightForU3Ec__Iterator0_t1970725915::get_offset_of_U24this_1(),
	U3CLightForU3Ec__Iterator0_t1970725915::get_offset_of_U24current_2(),
	U3CLightForU3Ec__Iterator0_t1970725915::get_offset_of_U24disposing_3(),
	U3CLightForU3Ec__Iterator0_t1970725915::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (LightUp_2_Final_t1468263550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2346[3] = 
{
	LightUp_2_Final_t1468263550::get_offset_of_defaultMaterial_4(),
	LightUp_2_Final_t1468263550::get_offset_of_lightUpMaterial_5(),
	LightUp_2_Final_t1468263550::get_offset_of_gameLogic_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (U3CLightForU3Ec__Iterator0_t3094849212), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2347[5] = 
{
	U3CLightForU3Ec__Iterator0_t3094849212::get_offset_of_duration_0(),
	U3CLightForU3Ec__Iterator0_t3094849212::get_offset_of_U24this_1(),
	U3CLightForU3Ec__Iterator0_t3094849212::get_offset_of_U24current_2(),
	U3CLightForU3Ec__Iterator0_t3094849212::get_offset_of_U24disposing_3(),
	U3CLightForU3Ec__Iterator0_t3094849212::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255366), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2348[6] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_0(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_1(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_2(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_3(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_4(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (U24ArrayTypeU3D12_t2488454197)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t2488454197 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (U24ArrayTypeU3D16_t3253128244)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D16_t3253128244 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (U24ArrayTypeU3D20_t1702832645)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D20_t1702832645 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (U24ArrayTypeU3D28_t173484549)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D28_t173484549 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
