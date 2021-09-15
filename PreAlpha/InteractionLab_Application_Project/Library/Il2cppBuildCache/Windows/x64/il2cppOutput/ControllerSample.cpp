#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerator_1_tFE6297375FF339F2A21BE3B2B1E139A5A440D734;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags>
struct List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.XR.TrackingOriginModeFlags[]
struct TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.XRInputSubsystem[]
struct XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionAssetEnabler
struct ActionAssetEnabler_t1B61D9FF68BA3C688E2D13954AC99EE332078F7B;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX
struct ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics
struct ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX
struct ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX
struct ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX
struct ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger
struct AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX
struct DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tC225688DB5DF321664CF12716C0F61F163CC64C1;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin
struct TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tFE6297375FF339F2A21BE3B2B1E139A5A440D734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0571F5D1DEB0FE72E1AB264E0E626D71B3CE1024;
IL2CPP_EXTERN_C String_t* _stringLiteral0737B1ACDF8964B9F3EED1B9A7B1CA4CBB2E56F7;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral7D41BC2C5861CAFFF94AE651644ADF3FD72C2B5F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F99F40B002E6812B3FC6B4018D04CB3B6BC23BF;
IL2CPP_EXTERN_C String_t* _stringLiteralD247A25733ACDBD81E5D8E60F931935A0373AEE3;
IL2CPP_EXTERN_C String_t* _stringLiteralDEE28C18494D794852D03319FBBEB5AF85D7B86E;
IL2CPP_EXTERN_C String_t* _stringLiteralE8784EC976A4B025737B3623D61D326A638E6522;
IL2CPP_EXTERN_C String_t* _stringLiteralEDF950C7FD6FD60A8F4D9D41F8D39DC465CF3ADB;
IL2CPP_EXTERN_C const RuntimeMethod* ActionToHaptics_U3CStartU3Eb__3_0_mFCD1D54EAC61C033DECD1E6D2CCAA824F63290EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0388CF3A4845763E6B15FB26190D88F8983EFF70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFF1AC1DBB4D03150ACB30B316BCAD7507FB93C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE7818FFAEC6C46C0F8E348C4F466F9F12055123F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBA43611562A4D66653708A0D13A63D209932A576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m578B7AEEE73AD1313179E5CB1A9418168C67D81F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD1DB0B6E222DBBB4A6E4F9529F8C37374718649A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_GetEnumerator_mAEEC68EF09B52103F64AB16AADF0F114B1D6FCBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_m7CF26F2A142B9827C812C657CC6B37E4ECC9E123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingModeOrigin_TrackingOriginUpdated_m1DDC026BEE0F5C403701E2AFC01418D458647CE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4900A3C88A954D0ECB907D923FB4EF0FF007DFC7 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags>
struct List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76, ____items_1)); }
	inline TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6* get__items_1() const { return ____items_1; }
	inline TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76_StaticFields, ____emptyArray_5)); }
	inline TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TrackingOriginModeFlagsU5BU5D_t0116DD0E7285F76F87BA025E5173037FC5F14DF6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____items_1)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>
struct ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E, ___m_Array_0)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Array_0)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_Array_0() const { return ___m_Array_0; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975, ___m_Array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_Array_0() const { return ___m_Array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 
{
public:
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_Reference_2;

public:
	inline static int32_t get_offset_of_m_UseReference_0() { return static_cast<int32_t>(offsetof(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63, ___m_UseReference_0)); }
	inline bool get_m_UseReference_0() const { return ___m_UseReference_0; }
	inline bool* get_address_of_m_UseReference_0() { return &___m_UseReference_0; }
	inline void set_m_UseReference_0(bool value)
	{
		___m_UseReference_0 = value;
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63, ___m_Action_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reference_2() { return static_cast<int32_t>(offsetof(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63, ___m_Reference_2)); }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * get_m_Reference_2() const { return ___m_Reference_2; }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E ** get_address_of_m_Reference_2() { return &___m_Reference_2; }
	inline void set_m_Reference_2(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * value)
	{
		___m_Reference_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Reference_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_Reference_2;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_21;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_22;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_23;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CformatU3Ek__BackingField_21)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_21() const { return ___U3CformatU3Ek__BackingField_21; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_21() { return &___U3CformatU3Ek__BackingField_21; }
	inline void set_U3CformatU3Ek__BackingField_21(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbyteOffsetU3Ek__BackingField_22)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_22() const { return ___U3CbyteOffsetU3Ek__BackingField_22; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_22() { return &___U3CbyteOffsetU3Ek__BackingField_22; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_22(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbitOffsetU3Ek__BackingField_23)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_23() const { return ___U3CbitOffsetU3Ek__BackingField_23; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_23() { return &___U3CbitOffsetU3Ek__BackingField_23; }
	inline void set_U3CbitOffsetU3Ek__BackingField_23(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CsizeInBitsU3Ek__BackingField_24)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_24() const { return ___U3CsizeInBitsU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_24() { return &___U3CsizeInBitsU3Ek__BackingField_24; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_24(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_24 = value;
	}
};

struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSBit_3;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatInt_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUInt_5;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatShort_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUShort_7;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatByte_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSByte_9;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatLong_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatULong_11;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatFloat_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatDouble_13;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3_15;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatQuaternion_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Short_17;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Short_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Byte_19;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Byte_20;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatBit_2)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_3() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSBit_3)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSBit_3() const { return ___FormatSBit_3; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSBit_3() { return &___FormatSBit_3; }
	inline void set_FormatSBit_3(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSBit_3 = value;
	}

	inline static int32_t get_offset_of_FormatInt_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatInt_4)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatInt_4() const { return ___FormatInt_4; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatInt_4() { return &___FormatInt_4; }
	inline void set_FormatInt_4(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatInt_4 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_5() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUInt_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUInt_5() const { return ___FormatUInt_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUInt_5() { return &___FormatUInt_5; }
	inline void set_FormatUInt_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUInt_5 = value;
	}

	inline static int32_t get_offset_of_FormatShort_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatShort_6)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatShort_6() const { return ___FormatShort_6; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatShort_6() { return &___FormatShort_6; }
	inline void set_FormatShort_6(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatShort_6 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_7() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUShort_7)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUShort_7() const { return ___FormatUShort_7; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUShort_7() { return &___FormatUShort_7; }
	inline void set_FormatUShort_7(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUShort_7 = value;
	}

	inline static int32_t get_offset_of_FormatByte_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatByte_8)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatByte_8() const { return ___FormatByte_8; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatByte_8() { return &___FormatByte_8; }
	inline void set_FormatByte_8(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatByte_8 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_9() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSByte_9)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSByte_9() const { return ___FormatSByte_9; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSByte_9() { return &___FormatSByte_9; }
	inline void set_FormatSByte_9(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSByte_9 = value;
	}

	inline static int32_t get_offset_of_FormatLong_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatLong_10)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatLong_10() const { return ___FormatLong_10; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatLong_10() { return &___FormatLong_10; }
	inline void set_FormatLong_10(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatLong_10 = value;
	}

	inline static int32_t get_offset_of_FormatULong_11() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatULong_11)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatULong_11() const { return ___FormatULong_11; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatULong_11() { return &___FormatULong_11; }
	inline void set_FormatULong_11(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatULong_11 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatFloat_12)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatFloat_12() const { return ___FormatFloat_12; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatFloat_12() { return &___FormatFloat_12; }
	inline void set_FormatFloat_12(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatFloat_12 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_13() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatDouble_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatDouble_13() const { return ___FormatDouble_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatDouble_13() { return &___FormatDouble_13; }
	inline void set_FormatDouble_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatDouble_13 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2_14)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2_14() const { return ___FormatVector2_14; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2_14() { return &___FormatVector2_14; }
	inline void set_FormatVector2_14(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2_14 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_15() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3_15)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3_15() const { return ___FormatVector3_15; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3_15() { return &___FormatVector3_15; }
	inline void set_FormatVector3_15(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3_15 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatQuaternion_16)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatQuaternion_16() const { return ___FormatQuaternion_16; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatQuaternion_16() { return &___FormatQuaternion_16; }
	inline void set_FormatQuaternion_16(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatQuaternion_16 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_17() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Short_17)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Short_17() const { return ___FormatVector2Short_17; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Short_17() { return &___FormatVector2Short_17; }
	inline void set_FormatVector2Short_17(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Short_17 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Short_18)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Short_18() const { return ___FormatVector3Short_18; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Short_18() { return &___FormatVector3Short_18; }
	inline void set_FormatVector3Short_18(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Short_18 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_19() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Byte_19)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Byte_19() const { return ___FormatVector2Byte_19; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Byte_19() { return &___FormatVector2Byte_19; }
	inline void set_FormatVector2Byte_19(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Byte_19 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Byte_20)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Byte_20() const { return ___FormatVector3Byte_20; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Byte_20() { return &___FormatVector3Byte_20; }
	inline void set_FormatVector3Byte_20(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Byte_20 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.XR.TrackingOriginModeFlags
struct TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_6;

public:
	inline static int32_t get_offset_of_m_Asset_4() { return static_cast<int32_t>(offsetof(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E, ___m_Asset_4)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_4() const { return ___m_Asset_4; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_4() { return &___m_Asset_4; }
	inline void set_m_Asset_4(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionId_5() { return static_cast<int32_t>(offsetof(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E, ___m_ActionId_5)); }
	inline String_t* get_m_ActionId_5() const { return ___m_ActionId_5; }
	inline String_t** get_address_of_m_ActionId_5() { return &___m_ActionId_5; }
	inline void set_m_ActionId_5(String_t* value)
	{
		___m_ActionId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionId_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_6() { return static_cast<int32_t>(offsetof(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E, ___m_Action_6)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Action_6() const { return ___m_Action_6; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Action_6() { return &___m_Action_6; }
	inline void set_m_Action_6(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Action_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_6), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_StateBlock_0)); }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Name_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Layout_7)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Variants_8)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Device_9)); }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Parent_10)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DefaultState_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MinValue_19)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MaxValue_20)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_DevicesCount
	int32_t ___m_DevicesCount_9;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionAsset::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_10;

public:
	inline static int32_t get_offset_of_m_ActionMaps_5() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ActionMaps_5)); }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* get_m_ActionMaps_5() const { return ___m_ActionMaps_5; }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580** get_address_of_m_ActionMaps_5() { return &___m_ActionMaps_5; }
	inline void set_m_ActionMaps_5(InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* value)
	{
		___m_ActionMaps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMaps_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemes_6() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ControlSchemes_6)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_ControlSchemes_6() const { return ___m_ControlSchemes_6; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_ControlSchemes_6() { return &___m_ControlSchemes_6; }
	inline void set_m_ControlSchemes_6(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_ControlSchemes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlSchemes_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStateForAllMaps_7() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_SharedStateForAllMaps_7)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_SharedStateForAllMaps_7() const { return ___m_SharedStateForAllMaps_7; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_SharedStateForAllMaps_7() { return &___m_SharedStateForAllMaps_7; }
	inline void set_m_SharedStateForAllMaps_7(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_SharedStateForAllMaps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStateForAllMaps_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_BindingMask_8)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_9() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesCount_9)); }
	inline int32_t get_m_DevicesCount_9() const { return ___m_DevicesCount_9; }
	inline int32_t* get_address_of_m_DevicesCount_9() { return &___m_DevicesCount_9; }
	inline void set_m_DevicesCount_9(int32_t value)
	{
		___m_DevicesCount_9 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_10() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesArray_10)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_10() const { return ___m_DevicesArray_10; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_10() { return &___m_DevicesArray_10; }
	inline void set_m_DevicesArray_10(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_10), (void*)value);
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ChildrenForEachControl_34;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_Description_28)); }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionAssetEnabler
struct ActionAssetEnabler_t1B61D9FF68BA3C688E2D13954AC99EE332078F7B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionAssetEnabler::m_ActionAsset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_ActionAsset_4;

public:
	inline static int32_t get_offset_of_m_ActionAsset_4() { return static_cast<int32_t>(offsetof(ActionAssetEnabler_t1B61D9FF68BA3C688E2D13954AC99EE332078F7B, ___m_ActionAsset_4)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_ActionAsset_4() const { return ___m_ActionAsset_4; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_ActionAsset_4() { return &___m_ActionAsset_4; }
	inline void set_m_ActionAsset_4(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_ActionAsset_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionAsset_4), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX
struct ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::m_ActionReference
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_ActionReference_4;
	// UnityEngine.Color UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::enabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___enabledColor_5;
	// UnityEngine.Color UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::disabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___disabledColor_6;
	// UnityEngine.UI.Image UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_7;
	// UnityEngine.UI.Graphic UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_8;
	// UnityEngine.UI.Graphic[] UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::graphics
	GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* ___graphics_9;
	// System.Type UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::lastActiveType
	Type_t * ___lastActiveType_10;

public:
	inline static int32_t get_offset_of_m_ActionReference_4() { return static_cast<int32_t>(offsetof(ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750, ___m_ActionReference_4)); }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * get_m_ActionReference_4() const { return ___m_ActionReference_4; }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E ** get_address_of_m_ActionReference_4() { return &___m_ActionReference_4; }
	inline void set_m_ActionReference_4(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * value)
	{
		___m_ActionReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_enabledColor_5() { return static_cast<int32_t>(offsetof(ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750, ___enabledColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_enabledColor_5() const { return ___enabledColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_enabledColor_5() { return &___enabledColor_5; }
	inline void set_enabledColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___enabledColor_5 = value;
	}

	inline static int32_t get_offset_of_disabledColor_6() { return static_cast<int32_t>(offsetof(ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750, ___disabledColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_disabledColor_6() const { return ___disabledColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_disabledColor_6() { return &___disabledColor_6; }
	inline void set_disabledColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___disabledColor_6 = value;
	}

	inline static int32_t get_offset_of_image_7() { return static_cast<int32_t>(offsetof(ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750, ___image_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_7() const { return ___image_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_7() { return &___image_7; }
	inline void set_image_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_7), (void*)value);
	}

	inline static int32_t get_offset_of_graphic_8() { return static_cast<int32_t>(offsetof(ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750, ___graphic_8)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_8() const { return ___graphic_8; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_8() { return &___graphic_8; }
	inline void set_graphic_8(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_8), (void*)value);
	}

	inline static int32_t get_offset_of_graphics_9() { return static_cast<int32_t>(offsetof(ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750, ___graphics_9)); }
	inline GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* get_graphics_9() const { return ___graphics_9; }
	inline GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE** get_address_of_graphics_9() { return &___graphics_9; }
	inline void set_graphics_9(GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* value)
	{
		___graphics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphics_9), (void*)value);
	}

	inline static int32_t get_offset_of_lastActiveType_10() { return static_cast<int32_t>(offsetof(ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750, ___lastActiveType_10)); }
	inline Type_t * get_lastActiveType_10() const { return ___lastActiveType_10; }
	inline Type_t ** get_address_of_lastActiveType_10() { return &___lastActiveType_10; }
	inline void set_lastActiveType_10(Type_t * value)
	{
		___lastActiveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastActiveType_10), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics
struct ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics::action
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___action_4;
	// System.Single UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics::_amplitude
	float ____amplitude_5;
	// System.Single UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics::_duration
	float ____duration_6;

public:
	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43, ___action_4)); }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * get_action_4() const { return ___action_4; }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}

	inline static int32_t get_offset_of__amplitude_5() { return static_cast<int32_t>(offsetof(ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43, ____amplitude_5)); }
	inline float get__amplitude_5() const { return ____amplitude_5; }
	inline float* get_address_of__amplitude_5() { return &____amplitude_5; }
	inline void set__amplitude_5(float value)
	{
		____amplitude_5 = value;
	}

	inline static int32_t get_offset_of__duration_6() { return static_cast<int32_t>(offsetof(ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43, ____duration_6)); }
	inline float get__duration_6() const { return ____duration_6; }
	inline float* get_address_of__duration_6() { return &____duration_6; }
	inline void set__duration_6(float value)
	{
		____duration_6 = value;
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX
struct ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::m_ActionReference
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_ActionReference_4;
	// UnityEngine.UI.Slider UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_5;
	// UnityEngine.UI.Graphic UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_6;
	// UnityEngine.UI.Graphic[] UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::graphics
	GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* ___graphics_7;

public:
	inline static int32_t get_offset_of_m_ActionReference_4() { return static_cast<int32_t>(offsetof(ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8, ___m_ActionReference_4)); }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * get_m_ActionReference_4() const { return ___m_ActionReference_4; }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E ** get_address_of_m_ActionReference_4() { return &___m_ActionReference_4; }
	inline void set_m_ActionReference_4(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * value)
	{
		___m_ActionReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8, ___slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_5() const { return ___slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}

	inline static int32_t get_offset_of_graphic_6() { return static_cast<int32_t>(offsetof(ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8, ___graphic_6)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_6() const { return ___graphic_6; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_6() { return &___graphic_6; }
	inline void set_graphic_6(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_6), (void*)value);
	}

	inline static int32_t get_offset_of_graphics_7() { return static_cast<int32_t>(offsetof(ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8, ___graphics_7)); }
	inline GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* get_graphics_7() const { return ___graphics_7; }
	inline GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE** get_address_of_graphics_7() { return &___graphics_7; }
	inline void set_graphics_7(GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* value)
	{
		___graphics_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphics_7), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX
struct ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::m_ActionReference
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_ActionReference_4;
	// UnityEngine.UI.Slider UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::xAxisSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___xAxisSlider_5;
	// UnityEngine.UI.Slider UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::yAxisSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___yAxisSlider_6;

public:
	inline static int32_t get_offset_of_m_ActionReference_4() { return static_cast<int32_t>(offsetof(ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1, ___m_ActionReference_4)); }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * get_m_ActionReference_4() const { return ___m_ActionReference_4; }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E ** get_address_of_m_ActionReference_4() { return &___m_ActionReference_4; }
	inline void set_m_ActionReference_4(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * value)
	{
		___m_ActionReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_xAxisSlider_5() { return static_cast<int32_t>(offsetof(ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1, ___xAxisSlider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_xAxisSlider_5() const { return ___xAxisSlider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_xAxisSlider_5() { return &___xAxisSlider_5; }
	inline void set_xAxisSlider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___xAxisSlider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xAxisSlider_5), (void*)value);
	}

	inline static int32_t get_offset_of_yAxisSlider_6() { return static_cast<int32_t>(offsetof(ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1, ___yAxisSlider_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_yAxisSlider_6() const { return ___yAxisSlider_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_yAxisSlider_6() { return &___yAxisSlider_6; }
	inline void set_yAxisSlider_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___yAxisSlider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yAxisSlider_6), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX
struct ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::m_ActionReference
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___m_ActionReference_4;
	// UnityEngine.GameObject UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::m_TargetGameobject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_TargetGameobject_5;

public:
	inline static int32_t get_offset_of_m_ActionReference_4() { return static_cast<int32_t>(offsetof(ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB, ___m_ActionReference_4)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_m_ActionReference_4() const { return ___m_ActionReference_4; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_m_ActionReference_4() { return &___m_ActionReference_4; }
	inline void set_m_ActionReference_4(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___m_ActionReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionReference_4))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionReference_4))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_TargetGameobject_5() { return static_cast<int32_t>(offsetof(ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB, ___m_TargetGameobject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_TargetGameobject_5() const { return ___m_TargetGameobject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_TargetGameobject_5() { return &___m_TargetGameobject_5; }
	inline void set_m_TargetGameobject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_TargetGameobject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGameobject_5), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger
struct AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::m_ChangeInterval
	float ___m_ChangeInterval_4;
	// System.Single UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::m_TimeRemainingTillChange
	float ___m_TimeRemainingTillChange_5;

public:
	inline static int32_t get_offset_of_m_ChangeInterval_4() { return static_cast<int32_t>(offsetof(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71, ___m_ChangeInterval_4)); }
	inline float get_m_ChangeInterval_4() const { return ___m_ChangeInterval_4; }
	inline float* get_address_of_m_ChangeInterval_4() { return &___m_ChangeInterval_4; }
	inline void set_m_ChangeInterval_4(float value)
	{
		___m_ChangeInterval_4 = value;
	}

	inline static int32_t get_offset_of_m_TimeRemainingTillChange_5() { return static_cast<int32_t>(offsetof(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71, ___m_TimeRemainingTillChange_5)); }
	inline float get_m_TimeRemainingTillChange_5() const { return ___m_TimeRemainingTillChange_5; }
	inline float* get_address_of_m_TimeRemainingTillChange_5() { return &___m_TimeRemainingTillChange_5; }
	inline void set_m_TimeRemainingTillChange_5(float value)
	{
		___m_TimeRemainingTillChange_5 = value;
	}
};

struct AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::s_InputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystems_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags> UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::s_SupportedTrackingOriginModes
	List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * ___s_SupportedTrackingOriginModes_7;

public:
	inline static int32_t get_offset_of_s_InputSubsystems_6() { return static_cast<int32_t>(offsetof(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields, ___s_InputSubsystems_6)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystems_6() const { return ___s_InputSubsystems_6; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystems_6() { return &___s_InputSubsystems_6; }
	inline void set_s_InputSubsystems_6(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportedTrackingOriginModes_7() { return static_cast<int32_t>(offsetof(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields, ___s_SupportedTrackingOriginModes_7)); }
	inline List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * get_s_SupportedTrackingOriginModes_7() const { return ___s_SupportedTrackingOriginModes_7; }
	inline List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 ** get_address_of_s_SupportedTrackingOriginModes_7() { return &___s_SupportedTrackingOriginModes_7; }
	inline void set_s_SupportedTrackingOriginModes_7(List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * value)
	{
		___s_SupportedTrackingOriginModes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SupportedTrackingOriginModes_7), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX
struct DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::m_Property
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___m_Property_4;
	// UnityEngine.GameObject UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::m_RootObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RootObject_5;
	// UnityEngine.UI.Text UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::m_TargetText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TargetText_6;

public:
	inline static int32_t get_offset_of_m_Property_4() { return static_cast<int32_t>(offsetof(DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E, ___m_Property_4)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_m_Property_4() const { return ___m_Property_4; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_m_Property_4() { return &___m_Property_4; }
	inline void set_m_Property_4(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___m_Property_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Property_4))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Property_4))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_RootObject_5() { return static_cast<int32_t>(offsetof(DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E, ___m_RootObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RootObject_5() const { return ___m_RootObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RootObject_5() { return &___m_RootObject_5; }
	inline void set_m_RootObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RootObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetText_6() { return static_cast<int32_t>(offsetof(DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E, ___m_TargetText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TargetText_6() const { return ___m_TargetText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TargetText_6() { return &___m_TargetText_6; }
	inline void set_m_TargetText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TargetText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetText_6), (void*)value);
	}
};


// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t8CBFA618763EEE2F991CDE5B76B34594051C8E56  : public InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_tC225688DB5DF321664CF12716C0F61F163CC64C1 * ___U3CtrackingStateU3Ek__BackingField_35;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * ___U3CisTrackedU3Ek__BackingField_36;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * ___U3CdevicePositionU3Ek__BackingField_37;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * ___U3CdeviceRotationU3Ek__BackingField_38;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(TrackedDevice_t8CBFA618763EEE2F991CDE5B76B34594051C8E56, ___U3CtrackingStateU3Ek__BackingField_35)); }
	inline IntegerControl_tC225688DB5DF321664CF12716C0F61F163CC64C1 * get_U3CtrackingStateU3Ek__BackingField_35() const { return ___U3CtrackingStateU3Ek__BackingField_35; }
	inline IntegerControl_tC225688DB5DF321664CF12716C0F61F163CC64C1 ** get_address_of_U3CtrackingStateU3Ek__BackingField_35() { return &___U3CtrackingStateU3Ek__BackingField_35; }
	inline void set_U3CtrackingStateU3Ek__BackingField_35(IntegerControl_tC225688DB5DF321664CF12716C0F61F163CC64C1 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(TrackedDevice_t8CBFA618763EEE2F991CDE5B76B34594051C8E56, ___U3CisTrackedU3Ek__BackingField_36)); }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * get_U3CisTrackedU3Ek__BackingField_36() const { return ___U3CisTrackedU3Ek__BackingField_36; }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F ** get_address_of_U3CisTrackedU3Ek__BackingField_36() { return &___U3CisTrackedU3Ek__BackingField_36; }
	inline void set_U3CisTrackedU3Ek__BackingField_36(ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * value)
	{
		___U3CisTrackedU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(TrackedDevice_t8CBFA618763EEE2F991CDE5B76B34594051C8E56, ___U3CdevicePositionU3Ek__BackingField_37)); }
	inline Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * get_U3CdevicePositionU3Ek__BackingField_37() const { return ___U3CdevicePositionU3Ek__BackingField_37; }
	inline Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 ** get_address_of_U3CdevicePositionU3Ek__BackingField_37() { return &___U3CdevicePositionU3Ek__BackingField_37; }
	inline void set_U3CdevicePositionU3Ek__BackingField_37(Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(TrackedDevice_t8CBFA618763EEE2F991CDE5B76B34594051C8E56, ___U3CdeviceRotationU3Ek__BackingField_38)); }
	inline QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * get_U3CdeviceRotationU3Ek__BackingField_38() const { return ___U3CdeviceRotationU3Ek__BackingField_38; }
	inline QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_38() { return &___U3CdeviceRotationU3Ek__BackingField_38; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_38(QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_38), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin
struct TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_RecenteredImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_RecenteredImage_4;
	// UnityEngine.Color UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_RecenteredOffColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_RecenteredOffColor_5;
	// UnityEngine.Color UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_RecenteredColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_RecenteredColor_6;
	// System.Single UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_RecenteredColorResetTime
	float ___m_RecenteredColorResetTime_7;
	// System.Single UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_LastRecenteredTime
	float ___m_LastRecenteredTime_8;
	// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_CurrentTrackingOriginMode
	int32_t ___m_CurrentTrackingOriginMode_9;
	// UnityEngine.UI.Text UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_CurrentTrackingOriginModeDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CurrentTrackingOriginModeDisplay_10;
	// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_DesiredTrackingOriginMode
	int32_t ___m_DesiredTrackingOriginMode_11;
	// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::m_SupportedTrackingOriginModes
	int32_t ___m_SupportedTrackingOriginModes_12;

public:
	inline static int32_t get_offset_of_m_RecenteredImage_4() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_RecenteredImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_RecenteredImage_4() const { return ___m_RecenteredImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_RecenteredImage_4() { return &___m_RecenteredImage_4; }
	inline void set_m_RecenteredImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_RecenteredImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RecenteredImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RecenteredOffColor_5() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_RecenteredOffColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_RecenteredOffColor_5() const { return ___m_RecenteredOffColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_RecenteredOffColor_5() { return &___m_RecenteredOffColor_5; }
	inline void set_m_RecenteredOffColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_RecenteredOffColor_5 = value;
	}

	inline static int32_t get_offset_of_m_RecenteredColor_6() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_RecenteredColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_RecenteredColor_6() const { return ___m_RecenteredColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_RecenteredColor_6() { return &___m_RecenteredColor_6; }
	inline void set_m_RecenteredColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_RecenteredColor_6 = value;
	}

	inline static int32_t get_offset_of_m_RecenteredColorResetTime_7() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_RecenteredColorResetTime_7)); }
	inline float get_m_RecenteredColorResetTime_7() const { return ___m_RecenteredColorResetTime_7; }
	inline float* get_address_of_m_RecenteredColorResetTime_7() { return &___m_RecenteredColorResetTime_7; }
	inline void set_m_RecenteredColorResetTime_7(float value)
	{
		___m_RecenteredColorResetTime_7 = value;
	}

	inline static int32_t get_offset_of_m_LastRecenteredTime_8() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_LastRecenteredTime_8)); }
	inline float get_m_LastRecenteredTime_8() const { return ___m_LastRecenteredTime_8; }
	inline float* get_address_of_m_LastRecenteredTime_8() { return &___m_LastRecenteredTime_8; }
	inline void set_m_LastRecenteredTime_8(float value)
	{
		___m_LastRecenteredTime_8 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTrackingOriginMode_9() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_CurrentTrackingOriginMode_9)); }
	inline int32_t get_m_CurrentTrackingOriginMode_9() const { return ___m_CurrentTrackingOriginMode_9; }
	inline int32_t* get_address_of_m_CurrentTrackingOriginMode_9() { return &___m_CurrentTrackingOriginMode_9; }
	inline void set_m_CurrentTrackingOriginMode_9(int32_t value)
	{
		___m_CurrentTrackingOriginMode_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTrackingOriginModeDisplay_10() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_CurrentTrackingOriginModeDisplay_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CurrentTrackingOriginModeDisplay_10() const { return ___m_CurrentTrackingOriginModeDisplay_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CurrentTrackingOriginModeDisplay_10() { return &___m_CurrentTrackingOriginModeDisplay_10; }
	inline void set_m_CurrentTrackingOriginModeDisplay_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CurrentTrackingOriginModeDisplay_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTrackingOriginModeDisplay_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_DesiredTrackingOriginMode_11() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_DesiredTrackingOriginMode_11)); }
	inline int32_t get_m_DesiredTrackingOriginMode_11() const { return ___m_DesiredTrackingOriginMode_11; }
	inline int32_t* get_address_of_m_DesiredTrackingOriginMode_11() { return &___m_DesiredTrackingOriginMode_11; }
	inline void set_m_DesiredTrackingOriginMode_11(int32_t value)
	{
		___m_DesiredTrackingOriginMode_11 = value;
	}

	inline static int32_t get_offset_of_m_SupportedTrackingOriginModes_12() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D, ___m_SupportedTrackingOriginModes_12)); }
	inline int32_t get_m_SupportedTrackingOriginModes_12() const { return ___m_SupportedTrackingOriginModes_12; }
	inline int32_t* get_address_of_m_SupportedTrackingOriginModes_12() { return &___m_SupportedTrackingOriginModes_12; }
	inline void set_m_SupportedTrackingOriginModes_12(int32_t value)
	{
		___m_SupportedTrackingOriginModes_12 = value;
	}
};

struct TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::s_InputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystems_13;

public:
	inline static int32_t get_offset_of_s_InputSubsystems_13() { return static_cast<int32_t>(offsetof(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields, ___s_InputSubsystems_13)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystems_13() const { return ___s_InputSubsystems_13; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystems_13() { return &___s_InputSubsystems_13; }
	inline void set_s_InputSubsystems_13(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystems_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystems_13), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.InputSystem.XR.XRController
struct XRController_t0A8294660E7FF47F237971E61D3CBD28C303A555  : public TrackedDevice_t8CBFA618763EEE2F991CDE5B76B34594051C8E56
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B  : public XRController_t0A8294660E7FF47F237971E61D3CBD28C303A555
{
public:

public:
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * m_Items[1];

public:
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_mDF6A47868DB1BD941C4278641B4D1F88C0BBA7D5_gshared_inline (ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0388CF3A4845763E6B15FB26190D88F8983EFF70_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1FB5B92E6491926F79FFC4A98B95B3AB580D2BA5_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32Enum>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyArray_1_get_Item_mE8DBD8668C97E73184809B9F8CD09A77D8E85365_gshared (ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_GetEnumerator_mAEEC68EF09B52103F64AB16AADF0F114B1D6FCBD_gshared (ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Graphic>()
inline GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::get_actionReference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3 (InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputAction::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_enabled_m0028541EE0640C24D1D3AE39A144ED262A1FCB35 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputAction::get_controls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  InputAction_get_controls_m3ACA0CED7721A99CA309B99F12FA1F8D022EDCD0 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>::get_Count()
inline int32_t ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_inline (ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E *, const RuntimeMethod*))ReadOnlyArray_1_get_Count_mDF6A47868DB1BD941C4278641B4D1F88C0BBA7D5_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToButtonISX_SetVisible_mFCE07DAF2CF1924B6687356F74277549B307CC4D (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, bool ___visible0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputAction::get_activeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * InputAction_get_activeControl_m7B38F0EC4622B9036F4E1770EB8AE732F4B55AEB (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Boolean>()
inline bool InputAction_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0388CF3A4845763E6B15FB26190D88F8983EFF70 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0388CF3A4845763E6B15FB26190D88F8983EFF70_gshared)(__this, method);
}
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_m21D09D41AA886DD0888BF47AFDFB089E1A73A022 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::get_device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRControllerWithRumble::SendImpulse(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRControllerWithRumble_SendImpulse_m3EC2DC7F7F11B2756558CF8D7D723D1A9C832442 (XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B * __this, float ___amplitude0, float ___duration1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::get_actionReference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToSliderISX_get_actionReference_mEAA99D1B803168005922BAA19B1412E1531B9495_inline (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToSliderISX_SetVisible_m09E9EFC16C8EEACB5FF0E1C0C58AF62EE83B5A9E (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, bool ___visible0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::get_actionReference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToVector2SliderISX_get_actionReference_mEFC3C1EB133F81728146E27F8AE2A4E3CECD2230_inline (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::SetVisible(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVector2SliderISX_SetVisible_m9DCB1EDC4C6CDB46870365322801AA91E2EF4C9A (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, bool ___visible1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7 (InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6 (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___subsystems0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::get_Item(System.Int32)
inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_inline (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::UpdateSupportedTrackingOriginModes(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger_UpdateSupportedTrackingOriginModes_mCDB207CC3DBDFA1F04A5E65894EB2C9FEDFD5C08 (AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71 * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___subsystem0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::SetToNextMode(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger_SetToNextMode_m24FF8C6B86BCDA1EC20CBBFBEE000C3BD12A0720 (AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71 * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___subsystem0, const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetSupportedTrackingOriginModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetSupportedTrackingOriginModes_m12EEA2E804FF03D9B82BCB2E64EA520AF0C03B36 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags>::Clear()
inline void List_1_Clear_mE7818FFAEC6C46C0F8E348C4F466F9F12055123F (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 *, const RuntimeMethod*))List_1_Clear_m1FB5B92E6491926F79FFC4A98B95B3AB580D2BA5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags>::Add(!0)
inline void List_1_Add_mFF1AC1DBB4D03150ACB30B316BCAD7507FB93C8A (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD1DB0B6E222DBBB4A6E4F9529F8C37374718649A_inline (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags>::get_Count()
inline int32_t List_1_get_Count_m578B7AEEE73AD1313179E5CB1A9418168C67D81F_inline (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 *, const RuntimeMethod*))List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, int32_t ___origin0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.TrackingOriginModeFlags>::.ctor()
inline void List_1__ctor_mBA43611562A4D66653708A0D13A63D209932A576 (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// UnityEngine.UI.Text UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::get_targetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * DisplayDeviceInfoFromActionISX_get_targetText_mC868BDD7988CB47566048E9AEA23C907EA23C690 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>::get_Item(System.Int32)
inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ReadOnlyArray_1_get_Item_m7CF26F2A142B9827C812C657CC6B37E4ECC9E123 (ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * (*) (ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E *, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_mE8DBD8668C97E73184809B9F8CD09A77D8E85365_gshared)(__this, ___index0, method);
}
// System.String UnityEngine.InputSystem.InputControl::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_name_m55FDB4FFA97DADC2A0BF3C7CCADC7B73796B04FF (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputDevice::get_deviceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputDevice_get_deviceId_mF7907B9D1FAFE1561D22636C9F30F5C98BC98375_inline (InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.InputControl::get_usages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  InputControl_get_usages_mFAA56CE0CBBD7A8FB1AA4B3D7196BC968E8F5080 (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString>::GetEnumerator()
inline RuntimeObject* ReadOnlyArray_1_GetEnumerator_mAEEC68EF09B52103F64AB16AADF0F114B1D6FCBD (ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E *, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mAEEC68EF09B52103F64AB16AADF0F114B1D6FCBD_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.XRInputSubsystem>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9 (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRInputSubsystem::add_trackingOriginUpdated(System.Action`1<UnityEngine.XR.XRInputSubsystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_add_trackingOriginUpdated_m8CD3F07F66759D7752621C40ED304E6782482392 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::get_Count()
inline int32_t List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.XRInputSubsystem::remove_trackingOriginUpdated(System.Action`1<UnityEngine.XR.XRInputSubsystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_remove_trackingOriginUpdated_m330F23CA8B04C50C56B120AF7387A2EA6B00E641 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::set_desiredTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin_set_desiredTrackingOriginMode_m89E7A69C3DC400E2E5C124998C03CEF2570AB5E0 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionAsset UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionAssetEnabler::get_actionAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ActionAssetEnabler_get_actionAsset_mCF7B8D6E3AEACBA29F8761818916EBE650E333BC (ActionAssetEnabler_t1B61D9FF68BA3C688E2D13954AC99EE332078F7B * __this, const RuntimeMethod* method)
{
	{
		// get => m_ActionAsset;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_m_ActionAsset_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionAssetEnabler::set_actionAsset(UnityEngine.InputSystem.InputActionAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionAssetEnabler_set_actionAsset_m71E5F983CFF7DC988D0CC27CC84ADB54FF4E75BC (ActionAssetEnabler_t1B61D9FF68BA3C688E2D13954AC99EE332078F7B * __this, InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ActionAsset = value;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = ___value0;
		__this->set_m_ActionAsset_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionAssetEnabler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionAssetEnabler_OnEnable_m45F78E93B4CFE266F0E6DA647B15520CADD2E691 (ActionAssetEnabler_t1B61D9FF68BA3C688E2D13954AC99EE332078F7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(m_ActionAsset != null)
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_m_ActionAsset_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// m_ActionAsset.Enable();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_3 = __this->get_m_ActionAsset_4();
		NullCheck(L_3);
		InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionAssetEnabler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionAssetEnabler__ctor_mCE8A817FBD570D18FC3DCEDD87AD12427F5724F3 (ActionAssetEnabler_t1B61D9FF68BA3C688E2D13954AC99EE332078F7B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::get_actionReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93 (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference ; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_m_ActionReference_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::set_actionReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToButtonISX_set_actionReference_m875810821483E5F21D46A05E47D02AD8518214A0 (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___value0, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference ; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = ___value0;
		__this->set_m_ActionReference_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToButtonISX_OnEnable_mFEAFB27F9FC744B25776A1C82DC1C4D4020BBD0D (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0571F5D1DEB0FE72E1AB264E0E626D71B3CE1024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (image == null)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_image_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning("ActionToButton Monobehaviour started without any associated image. This input will not be reported.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteral0571F5D1DEB0FE72E1AB264E0E626D71B3CE1024, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// graphic = gameObject.GetComponent<Graphic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_4;
		L_4 = GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9(L_3, /*hidden argument*/GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9_RuntimeMethod_var);
		__this->set_graphic_8(L_4);
		// graphics = gameObject.GetComponentsInChildren<Graphic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_6;
		L_6 = GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688(L_5, /*hidden argument*/GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688_RuntimeMethod_var);
		__this->set_graphics_9(L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToButtonISX_Update_mD8FF861C3C7600B45F6CDA6DD2D5D7590F1E99A4 (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0388CF3A4845763E6B15FB26190D88F8983EFF70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	int32_t G_B6_0 = 0;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B13_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B12_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B14_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B18_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B17_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B19_1 = NULL;
	{
		// if (actionReference != null && actionReference.action != null && image != null && actionReference.action.enabled && actionReference.action.controls.Count > 0)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0;
		L_0 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_2;
		L_2 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_3;
		L_3 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_image_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_6;
		L_6 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = InputAction_get_enabled_m0028541EE0640C24D1D3AE39A144ED262A1FCB35(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_9;
		L_9 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_10;
		L_10 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  L_11;
		L_11 = InputAction_get_controls_m3ACA0CED7721A99CA309B99F12FA1F8D022EDCD0(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12;
		L_12 = ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_inline((ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E *)(&V_1), /*hidden argument*/ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_RuntimeMethod_var);
		G_B6_0 = ((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B6_0 = 0;
	}

IL_005a:
	{
		V_0 = (bool)G_B6_0;
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_017b;
		}
	}
	{
		// SetVisible(true);
		ActionToButtonISX_SetVisible_mFCE07DAF2CF1924B6687356F74277549B307CC4D(__this, (bool)1, /*hidden argument*/NULL);
		// Type typeToUse = null;
		V_2 = (Type_t *)NULL;
		// if (actionReference.action.activeControl != null)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_14;
		L_14 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_15;
		L_15 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_16;
		L_16 = InputAction_get_activeControl_m7B38F0EC4622B9036F4E1770EB8AE732F4B55AEB(L_15, /*hidden argument*/NULL);
		V_3 = (bool)((!(((RuntimeObject*)(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_009d;
		}
	}
	{
		// typeToUse = actionReference.action.activeControl.valueType;
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_18;
		L_18 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_19;
		L_19 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_20;
		L_20 = InputAction_get_activeControl_m7B38F0EC4622B9036F4E1770EB8AE732F4B55AEB(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(4 /* System.Type UnityEngine.InputSystem.InputControl::get_valueType() */, L_20);
		V_2 = L_21;
		goto IL_00a6;
	}

IL_009d:
	{
		// typeToUse = lastActiveType;
		Type_t * L_22 = __this->get_lastActiveType_10();
		V_2 = L_22;
	}

IL_00a6:
	{
		// if(typeToUse == typeof(bool))
		Type_t * L_23 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_23, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_0100;
		}
	}
	{
		// lastActiveType = typeof(bool);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29;
		L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_28, /*hidden argument*/NULL);
		__this->set_lastActiveType_10(L_29);
		// bool value = actionReference.action.ReadValue<bool>();
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_30;
		L_30 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_31;
		L_31 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		bool L_32;
		L_32 = InputAction_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0388CF3A4845763E6B15FB26190D88F8983EFF70(L_31, /*hidden argument*/InputAction_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0388CF3A4845763E6B15FB26190D88F8983EFF70_RuntimeMethod_var);
		V_5 = L_32;
		// image.color = value ? enabledColor : disabledColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_image_7();
		bool L_34 = V_5;
		G_B12_0 = L_33;
		if (L_34)
		{
			G_B13_0 = L_33;
			goto IL_00f1;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35 = __this->get_disabledColor_6();
		G_B14_0 = L_35;
		G_B14_1 = G_B12_0;
		goto IL_00f7;
	}

IL_00f1:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36 = __this->get_enabledColor_5();
		G_B14_0 = L_36;
		G_B14_1 = G_B13_0;
	}

IL_00f7:
	{
		NullCheck(G_B14_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B14_1, G_B14_0);
		goto IL_0178;
	}

IL_0100:
	{
		// else if(typeToUse == typeof(float))
		Type_t * L_37 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		bool L_40;
		L_40 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_37, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		bool L_41 = V_6;
		if (!L_41)
		{
			goto IL_0164;
		}
	}
	{
		// lastActiveType = typeof(float);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		__this->set_lastActiveType_10(L_43);
		// float value = actionReference.action.ReadValue<float>();
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_44;
		L_44 = ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_45;
		L_45 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		float L_46;
		L_46 = InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88(L_45, /*hidden argument*/InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var);
		V_7 = L_46;
		// image.color = value > 0.5 ? enabledColor : disabledColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_image_7();
		float L_48 = V_7;
		G_B17_0 = L_47;
		if ((((double)((double)((double)L_48))) > ((double)(0.5))))
		{
			G_B18_0 = L_47;
			goto IL_0155;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = __this->get_disabledColor_6();
		G_B19_0 = L_49;
		G_B19_1 = G_B17_0;
		goto IL_015b;
	}

IL_0155:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50 = __this->get_enabledColor_5();
		G_B19_0 = L_50;
		G_B19_1 = G_B18_0;
	}

IL_015b:
	{
		NullCheck(G_B19_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B19_1, G_B19_0);
		goto IL_0178;
	}

IL_0164:
	{
		// image.color = disabledColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_51 = __this->get_image_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52 = __this->get_disabledColor_6();
		NullCheck(L_51);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_52);
	}

IL_0178:
	{
		goto IL_0185;
	}

IL_017b:
	{
		// SetVisible(false);
		ActionToButtonISX_SetVisible_mFCE07DAF2CF1924B6687356F74277549B307CC4D(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0185:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToButtonISX_SetVisible_mFCE07DAF2CF1924B6687356F74277549B307CC4D (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (graphic != null)
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_graphic_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// graphic.enabled = visible;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_3 = __this->get_graphic_8();
		bool L_4 = ___visible0;
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// for (int i = 0; i < graphics.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		// graphics[i].enabled = visible;
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_5 = __this->get_graphics_9();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9 = ___visible0;
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < graphics.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < graphics.Length; i++)
		int32_t L_11 = V_1;
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_12 = __this->get_graphics_9();
		NullCheck(L_12);
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToButtonISX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToButtonISX__ctor_m72A259D38A28EF3CEDAE4ECB47CACA19F2330007 (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Color enabledColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_enabledColor_5(L_0);
		// Color disabledColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_disabledColor_6(L_1);
		// Image image = null;
		__this->set_image_7((Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)NULL);
		// Graphic graphic = null;
		__this->set_graphic_8((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)NULL);
		// Graphic[] graphics = new Graphic[] { };
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_2 = (GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE*)(GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE*)SZArrayNew(GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_graphics_9(L_2);
		// Type lastActiveType = null;
		__this->set_lastActiveType_10((Type_t *)NULL);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToHaptics_Start_m57B51C13E5BA8F636795556DB69CB55639C863EB (ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionToHaptics_U3CStartU3Eb__3_0_mFCD1D54EAC61C033DECD1E6D2CCAA824F63290EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (action == null)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_action_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0041;
	}

IL_0013:
	{
		// action.action.Enable();
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_3 = __this->get_action_4();
		NullCheck(L_3);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		InputAction_Enable_m21D09D41AA886DD0888BF47AFDFB089E1A73A022(L_4, /*hidden argument*/NULL);
		// action.action.performed += (ctx) =>
		// {
		//     var control = action.action.activeControl;
		//     if (null == control)
		//         return;
		// 
		//     if (control.device is XRControllerWithRumble rumble)
		//         rumble.SendImpulse(_amplitude, _duration);
		// };
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_5 = __this->get_action_4();
		NullCheck(L_5);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_6;
		L_6 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_5, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_7 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_7, __this, (intptr_t)((intptr_t)ActionToHaptics_U3CStartU3Eb__3_0_mFCD1D54EAC61C033DECD1E6D2CCAA824F63290EE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_6);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToHaptics__ctor_m4F3F56C8E46A09EDE3140E5D123901E3B6007D5D (ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43 * __this, const RuntimeMethod* method)
{
	{
		// public float _amplitude = 1.0f;
		__this->set__amplitude_5((1.0f));
		// public float _duration = 0.1f;
		__this->set__duration_6((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToHaptics::<Start>b__3_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToHaptics_U3CStartU3Eb__3_0_mFCD1D54EAC61C033DECD1E6D2CCAA824F63290EE (ActionToHaptics_tB3C3F341139B31715AEF603C21BB6B7F3E6FBD43 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * V_0 = NULL;
	XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var control = action.action.activeControl;
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_action_4();
		NullCheck(L_0);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1;
		L_1 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_2;
		L_2 = InputAction_get_activeControl_m7B38F0EC4622B9036F4E1770EB8AE732F4B55AEB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (null == control)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_3 = V_0;
		V_2 = (bool)((((RuntimeObject*)(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0043;
	}

IL_001c:
	{
		// if (control.device is XRControllerWithRumble rumble)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_5 = V_0;
		NullCheck(L_5);
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_6;
		L_6 = InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline(L_5, /*hidden argument*/NULL);
		V_1 = ((XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B *)IsInstClass((RuntimeObject*)L_6, XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B_il2cpp_TypeInfo_var));
		XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B * L_7 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// rumble.SendImpulse(_amplitude, _duration);
		XRControllerWithRumble_t5A2688AB380EBE6E7625779CA0807318A02CAB4B * L_9 = V_1;
		float L_10 = __this->get__amplitude_5();
		float L_11 = __this->get__duration_6();
		NullCheck(L_9);
		XRControllerWithRumble_SendImpulse_m3EC2DC7F7F11B2756558CF8D7D723D1A9C832442(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::get_actionReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToSliderISX_get_actionReference_mEAA99D1B803168005922BAA19B1412E1531B9495 (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_m_ActionReference_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::set_actionReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToSliderISX_set_actionReference_m3880008E320FEDEDF99A07D1ED4780BFB99C765B (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___value0, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = ___value0;
		__this->set_m_ActionReference_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToSliderISX_OnEnable_mB7884F63005E5960DD2163D0BC6FCE56197C0132 (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD247A25733ACDBD81E5D8E60F931935A0373AEE3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (slider == null)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning("ActionToSlider Monobehaviour started without any associated slider. This input will not be reported.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteralD247A25733ACDBD81E5D8E60F931935A0373AEE3, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// graphic = gameObject.GetComponent<Graphic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_4;
		L_4 = GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9(L_3, /*hidden argument*/GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9_RuntimeMethod_var);
		__this->set_graphic_6(L_4);
		// graphics = gameObject.GetComponentsInChildren<Graphic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_6;
		L_6 = GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688(L_5, /*hidden argument*/GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688_RuntimeMethod_var);
		__this->set_graphics_7(L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToSliderISX_Update_m48A137044AA09E75025FEC25EB18D67B72AFADC9 (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (actionReference != null && actionReference.action != null && slider != null)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0;
		L_0 = ActionToSliderISX_get_actionReference_mEAA99D1B803168005922BAA19B1412E1531B9495_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_2;
		L_2 = ActionToSliderISX_get_actionReference_mEAA99D1B803168005922BAA19B1412E1531B9495_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_3;
		L_3 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_slider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		// if (actionReference.action.enabled)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_7;
		L_7 = ActionToSliderISX_get_actionReference_mEAA99D1B803168005922BAA19B1412E1531B9495_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_8;
		L_8 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = InputAction_get_enabled_m0028541EE0640C24D1D3AE39A144ED262A1FCB35(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// SetVisible(true);
		ActionToSliderISX_SetVisible_m09E9EFC16C8EEACB5FF0E1C0C58AF62EE83B5A9E(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// float value = actionReference.action.ReadValue<float>();
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_11;
		L_11 = ActionToSliderISX_get_actionReference_mEAA99D1B803168005922BAA19B1412E1531B9495_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88(L_12, /*hidden argument*/InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var);
		V_1 = L_13;
		// slider.value = value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_14 = __this->get_slider_5();
		float L_15 = V_1;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, L_15);
		goto IL_0079;
	}

IL_006f:
	{
		// SetVisible(false);
		ActionToSliderISX_SetVisible_m09E9EFC16C8EEACB5FF0E1C0C58AF62EE83B5A9E(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToSliderISX_SetVisible_m09E9EFC16C8EEACB5FF0E1C0C58AF62EE83B5A9E (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (graphic != null)
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_graphic_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// graphic.enabled = visible;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_3 = __this->get_graphic_6();
		bool L_4 = ___visible0;
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// for (int i = 0; i < graphics.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		// graphics[i].enabled = visible;
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_5 = __this->get_graphics_7();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9 = ___visible0;
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < graphics.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < graphics.Length; i++)
		int32_t L_11 = V_1;
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_12 = __this->get_graphics_7();
		NullCheck(L_12);
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToSliderISX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToSliderISX__ctor_mCDA220975518D9FE93F8136CF3944B0BDFA0AA68 (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Slider slider = null;
		__this->set_slider_5((Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A *)NULL);
		// Graphic graphic = null;
		__this->set_graphic_6((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)NULL);
		// Graphic[] graphics = new Graphic[]{ };
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_0 = (GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE*)(GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE*)SZArrayNew(GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_graphics_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::get_actionReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToVector2SliderISX_get_actionReference_mEFC3C1EB133F81728146E27F8AE2A4E3CECD2230 (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_m_ActionReference_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::set_actionReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVector2SliderISX_set_actionReference_mE35356DD7AFD8233C0F711AB8DC42E3933F22AF3 (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___value0, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = ___value0;
		__this->set_m_ActionReference_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVector2SliderISX_OnEnable_mA78B721C712B736958B6E8AACECC1FA6AEFEA147 (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0737B1ACDF8964B9F3EED1B9A7B1CA4CBB2E56F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F99F40B002E6812B3FC6B4018D04CB3B6BC23BF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (xAxisSlider == null)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_xAxisSlider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning("ActionToSlider Monobehaviour started without any associated X-axis slider.  This input won't be reported.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteral8F99F40B002E6812B3FC6B4018D04CB3B6BC23BF, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (yAxisSlider == null)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = __this->get_yAxisSlider_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogWarning("ActionToSlider Monobehaviour started without any associated Y-axis slider.  This input won't be reported.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteral0737B1ACDF8964B9F3EED1B9A7B1CA4CBB2E56F7, __this, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVector2SliderISX_Update_m4C9E449F7239A80630726B77586C745BC914E580 (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (actionReference != null && actionReference.action != null && xAxisSlider != null && yAxisSlider != null)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0;
		L_0 = ActionToVector2SliderISX_get_actionReference_mEFC3C1EB133F81728146E27F8AE2A4E3CECD2230_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_2;
		L_2 = ActionToVector2SliderISX_get_actionReference_mEFC3C1EB133F81728146E27F8AE2A4E3CECD2230_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_3;
		L_3 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_xAxisSlider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6 = __this->get_yAxisSlider_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 0;
	}

IL_0039:
	{
		V_0 = (bool)G_B5_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_009a;
		}
	}
	{
		// if (actionReference.action.enabled)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_9;
		L_9 = ActionToVector2SliderISX_get_actionReference_mEFC3C1EB133F81728146E27F8AE2A4E3CECD2230_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_10;
		L_10 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = InputAction_get_enabled_m0028541EE0640C24D1D3AE39A144ED262A1FCB35(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		// SetVisible(gameObject, true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		ActionToVector2SliderISX_SetVisible_m9DCB1EDC4C6CDB46870365322801AA91E2EF4C9A(__this, L_13, (bool)1, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// Vector2 value = actionReference.action.ReadValue<Vector2>();
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_14;
		L_14 = ActionToVector2SliderISX_get_actionReference_mEFC3C1EB133F81728146E27F8AE2A4E3CECD2230_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_15;
		L_15 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F(L_15, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		V_1 = L_16;
		// xAxisSlider.value = value.x;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_17 = __this->get_xAxisSlider_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_1;
		float L_19 = L_18.get_x_0();
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_17, L_19);
		// yAxisSlider.value = value.y;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_20 = __this->get_yAxisSlider_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_1;
		float L_22 = L_21.get_y_1();
		NullCheck(L_20);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_20, L_22);
		goto IL_00aa;
	}

IL_009a:
	{
		// SetVisible(gameObject, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		ActionToVector2SliderISX_SetVisible_m9DCB1EDC4C6CDB46870365322801AA91E2EF4C9A(__this, L_23, (bool)0, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::SetVisible(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVector2SliderISX_SetVisible_m9DCB1EDC4C6CDB46870365322801AA91E2EF4C9A (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, bool ___visible1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * V_0 = NULL;
	GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// Graphic graphic = go.GetComponent<Graphic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		NullCheck(L_0);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_1;
		L_1 = GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9(L_0, /*hidden argument*/GameObject_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mE7A79903120C84B333125F7728CA5176DE41AED9_RuntimeMethod_var);
		V_0 = L_1;
		// if (graphic != null)
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// graphic.enabled = visible;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_5 = V_0;
		bool L_6 = ___visible1;
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, L_6, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// Graphic[] graphics = go.GetComponentsInChildren<Graphic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ___go0;
		NullCheck(L_7);
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_8;
		L_8 = GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688(L_7, /*hidden argument*/GameObject_GetComponentsInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m2099AEA7011E18A5337E84933624C6B6F2676688_RuntimeMethod_var);
		V_1 = L_8;
		// for (int i = 0; i < graphics.Length; i++)
		V_3 = 0;
		goto IL_0036;
	}

IL_0026:
	{
		// graphics[i].enabled = visible;
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13 = ___visible1;
		NullCheck(L_12);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_12, L_13, /*hidden argument*/NULL);
		// for (int i = 0; i < graphics.Length; i++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i < graphics.Length; i++)
		int32_t L_15 = V_3;
		GraphicU5BU5D_tEDF81FF0D43730D71AD96AE0CA72AE637A5EABAE* L_16 = V_1;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVector2SliderISX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVector2SliderISX__ctor_m065FA191D89F13E475E6ABCCEAA2903C67089D6F (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, const RuntimeMethod* method)
{
	{
		// public Slider xAxisSlider = null;
		__this->set_xAxisSlider_5((Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A *)NULL);
		// public Slider yAxisSlider = null;
		__this->set_yAxisSlider_6((Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A *)NULL);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::get_actionReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ActionToVisibilityISX_get_actionReference_m2909E438A3D06009FC57D44DA02A20F368C09F48 (ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  L_0 = __this->get_m_ActionReference_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::set_actionReference(UnityEngine.InputSystem.InputActionProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVisibilityISX_set_actionReference_m72D5189F54B8068246060CF5B5602A771DCAB222 (ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB * __this, InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___value0, const RuntimeMethod* method)
{
	{
		// public InputActionProperty actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  L_0 = ___value0;
		__this->set_m_ActionReference_4(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::get_targetGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ActionToVisibilityISX_get_targetGameObject_m6E5A632647F53D61EE4A2E7736C2D7ED4CB2F269 (ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB * __this, const RuntimeMethod* method)
{
	{
		// public GameObject targetGameObject { get => m_TargetGameobject; set => m_TargetGameobject = value; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_TargetGameobject_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::set_targetGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVisibilityISX_set_targetGameObject_m70A5116BA03ED0A9AB0B57FFDF51883E654CE259 (ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject targetGameObject { get => m_TargetGameobject; set => m_TargetGameobject = value; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_TargetGameobject_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVisibilityISX_Start_m689D187055E4C2FC0ECEBE3856E029C24B32C67C (ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (m_ActionReference != null && m_ActionReference.action != null)
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  L_0 = __this->get_m_ActionReference_4();
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_1 = __this->get_address_of_m_ActionReference_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// m_ActionReference.action.Enable();
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_4 = __this->get_address_of_m_ActionReference_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_5;
		L_5 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		InputAction_Enable_m21D09D41AA886DD0888BF47AFDFB089E1A73A022(L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVisibilityISX_Update_mF28D54C6796E321092327C2FA43C6B6375791C4A (ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B6_0 = 0;
	{
		// if (m_TargetGameobject == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_TargetGameobject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0078;
	}

IL_0013:
	{
		// if (m_ActionReference != null
		//     && m_ActionReference.action != null
		//     && m_ActionReference.action.controls.Count > 0
		//     && m_ActionReference.action.enabled == true)
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  L_3 = __this->get_m_ActionReference_4();
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_4 = __this->get_address_of_m_ActionReference_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_5;
		L_5 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_6 = __this->get_address_of_m_ActionReference_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  L_8;
		L_8 = InputAction_get_controls_m3ACA0CED7721A99CA309B99F12FA1F8D022EDCD0(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9;
		L_9 = ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_inline((ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E *)(&V_2), /*hidden argument*/ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_10 = __this->get_address_of_m_ActionReference_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_11;
		L_11 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = InputAction_get_enabled_m0028541EE0640C24D1D3AE39A144ED262A1FCB35(L_11, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B6_0 = 0;
	}

IL_0055:
	{
		V_1 = (bool)G_B6_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// m_TargetGameobject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_m_TargetGameobject_5();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// return;
		goto IL_0078;
	}

IL_0069:
	{
		// m_TargetGameobject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_m_TargetGameobject_5();
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.ActionToVisibilityISX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionToVisibilityISX__ctor_m7737058FA3E4B18E018FEB60888F445F5C1D7A67 (ActionToVisibilityISX_t01B14680AF14D3E2009D77803FABE8FD078034AB * __this, const RuntimeMethod* method)
{
	{
		// GameObject m_TargetGameobject = null;
		__this->set_m_TargetGameobject_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger_OnEnable_mBCC058F40EB47DE380D02E3AC32D3028CDF5EDD6 (AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71 * __this, const RuntimeMethod* method)
{
	{
		// m_TimeRemainingTillChange = m_ChangeInterval;
		float L_0 = __this->get_m_ChangeInterval_4();
		__this->set_m_TimeRemainingTillChange_5(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger_Update_mD71C28C8F0A720751F4E83A9BB88BE25C2C08119 (AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * V_1 = NULL;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_2 = NULL;
	bool V_3 = false;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B4_0 = NULL;
	{
		// m_TimeRemainingTillChange -= Time.deltaTime;
		float L_0 = __this->get_m_TimeRemainingTillChange_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_TimeRemainingTillChange_5(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (m_TimeRemainingTillChange <= 0.0f)
		float L_2 = __this->get_m_TimeRemainingTillChange_5();
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// List<XRInputSubsystem> inputSubsystems = new List<XRInputSubsystem>();
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_4 = (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *)il2cpp_codegen_object_new(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C(L_4, /*hidden argument*/List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		V_1 = L_4;
		// SubsystemManager.GetInstances(inputSubsystems);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6(L_5, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		// XRInputSubsystem subsystem = inputSubsystems?[0];
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_6 = V_1;
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)(NULL));
		goto IL_0042;
	}

IL_003b:
	{
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_7 = V_1;
		NullCheck(L_7);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_8;
		L_8 = List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_inline(L_7, 0, /*hidden argument*/List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		G_B4_0 = L_8;
	}

IL_0042:
	{
		V_2 = G_B4_0;
		// if (subsystem != null)
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_9 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// UpdateSupportedTrackingOriginModes(subsystem);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_11 = V_2;
		AutomaticTrackingModeChanger_UpdateSupportedTrackingOriginModes_mCDB207CC3DBDFA1F04A5E65894EB2C9FEDFD5C08(__this, L_11, /*hidden argument*/NULL);
		// SetToNextMode(subsystem);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_12 = V_2;
		AutomaticTrackingModeChanger_SetToNextMode_m24FF8C6B86BCDA1EC20CBBFBEE000C3BD12A0720(__this, L_12, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// m_TimeRemainingTillChange += m_ChangeInterval;
		float L_13 = __this->get_m_TimeRemainingTillChange_5();
		float L_14 = __this->get_m_ChangeInterval_4();
		__this->set_m_TimeRemainingTillChange_5(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::UpdateSupportedTrackingOriginModes(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger_UpdateSupportedTrackingOriginModes_mCDB207CC3DBDFA1F04A5E65894EB2C9FEDFD5C08 (AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71 * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___subsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFF1AC1DBB4D03150ACB30B316BCAD7507FB93C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE7818FFAEC6C46C0F8E348C4F466F9F12055123F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// TrackingOriginModeFlags supportedOriginModes = subsystem.GetSupportedTrackingOriginModes();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = ___subsystem0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XRInputSubsystem_GetSupportedTrackingOriginModes_m12EEA2E804FF03D9B82BCB2E64EA520AF0C03B36(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// s_SupportedTrackingOriginModes.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * L_2 = ((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->get_s_SupportedTrackingOriginModes_7();
		NullCheck(L_2);
		List_1_Clear_mE7818FFAEC6C46C0F8E348C4F466F9F12055123F(L_2, /*hidden argument*/List_1_Clear_mE7818FFAEC6C46C0F8E348C4F466F9F12055123F_RuntimeMethod_var);
		// for (int i = 0; i < 31; i++)
		V_1 = 0;
		goto IL_003c;
	}

IL_0017:
	{
		// uint modeToCheck = 1u << i;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)))));
		// if ((modeToCheck & ((UInt32)supportedOriginModes)) != 0)
		uint32_t L_4 = V_2;
		int32_t L_5 = V_0;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// s_SupportedTrackingOriginModes.Add((TrackingOriginModeFlags)modeToCheck);
		IL2CPP_RUNTIME_CLASS_INIT(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * L_7 = ((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->get_s_SupportedTrackingOriginModes_7();
		uint32_t L_8 = V_2;
		NullCheck(L_7);
		List_1_Add_mFF1AC1DBB4D03150ACB30B316BCAD7507FB93C8A(L_7, L_8, /*hidden argument*/List_1_Add_mFF1AC1DBB4D03150ACB30B316BCAD7507FB93C8A_RuntimeMethod_var);
	}

IL_0037:
	{
		// for (int i = 0; i < 31; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = 0; i < 31; i++)
		int32_t L_10 = V_1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)31)))? 1 : 0);
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::SetToNextMode(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger_SetToNextMode_m24FF8C6B86BCDA1EC20CBBFBEE000C3BD12A0720 (AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71 * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___subsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m578B7AEEE73AD1313179E5CB1A9418168C67D81F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1DB0B6E222DBBB4A6E4F9529F8C37374718649A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// TrackingOriginModeFlags currentOriginMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = ___subsystem0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int i = 0; i < s_SupportedTrackingOriginModes.Count; i++)
		V_1 = 0;
		goto IL_0048;
	}

IL_000c:
	{
		// if (currentOriginMode == s_SupportedTrackingOriginModes[i])
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * L_3 = ((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->get_s_SupportedTrackingOriginModes_7();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_get_Item_mD1DB0B6E222DBBB4A6E4F9529F8C37374718649A_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mD1DB0B6E222DBBB4A6E4F9529F8C37374718649A_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// int nextModeIndex = (i + 1) % s_SupportedTrackingOriginModes.Count;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * L_8 = ((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->get_s_SupportedTrackingOriginModes_7();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m578B7AEEE73AD1313179E5CB1A9418168C67D81F_inline(L_8, /*hidden argument*/List_1_get_Count_m578B7AEEE73AD1313179E5CB1A9418168C67D81F_RuntimeMethod_var);
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))%(int32_t)L_9));
		// subsystem.TrySetTrackingOriginMode(s_SupportedTrackingOriginModes[nextModeIndex]);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_10 = ___subsystem0;
		List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * L_11 = ((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->get_s_SupportedTrackingOriginModes_7();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = List_1_get_Item_mD1DB0B6E222DBBB4A6E4F9529F8C37374718649A_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mD1DB0B6E222DBBB4A6E4F9529F8C37374718649A_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_14;
		L_14 = XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D(L_10, L_13, /*hidden argument*/NULL);
		// break;
		goto IL_005b;
	}

IL_0043:
	{
		// for (int i = 0; i < s_SupportedTrackingOriginModes.Count; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0048:
	{
		// for (int i = 0; i < s_SupportedTrackingOriginModes.Count; i++)
		int32_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * L_17 = ((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->get_s_SupportedTrackingOriginModes_7();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m578B7AEEE73AD1313179E5CB1A9418168C67D81F_inline(L_17, /*hidden argument*/List_1_get_Count_m578B7AEEE73AD1313179E5CB1A9418168C67D81F_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_4;
		if (L_19)
		{
			goto IL_000c;
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger__ctor_m97C30B995FDFFC9B23C64BED89AEAF0B0DE52A19 (AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71 * __this, const RuntimeMethod* method)
{
	{
		// float m_ChangeInterval = 5.0f;
		__this->set_m_ChangeInterval_4((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.AutomaticTrackingModeChanger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticTrackingModeChanger__cctor_m247305FE3528520E9073466DCAC79AFF671E4322 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBA43611562A4D66653708A0D13A63D209932A576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XRInputSubsystem> s_InputSubsystems = new List<XRInputSubsystem>();
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *)il2cpp_codegen_object_new(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C(L_0, /*hidden argument*/List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->set_s_InputSubsystems_6(L_0);
		// static List<TrackingOriginModeFlags> s_SupportedTrackingOriginModes = new List<TrackingOriginModeFlags>();
		List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 * L_1 = (List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76 *)il2cpp_codegen_object_new(List_1_tBE79400429FFCCCF1FACE8EB7264FD05C2FD6D76_il2cpp_TypeInfo_var);
		List_1__ctor_mBA43611562A4D66653708A0D13A63D209932A576(L_1, /*hidden argument*/List_1__ctor_mBA43611562A4D66653708A0D13A63D209932A576_RuntimeMethod_var);
		((AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_StaticFields*)il2cpp_codegen_static_fields_for(AutomaticTrackingModeChanger_tE72D1314EAA649AFC4E152AB55AE3E462E436F71_il2cpp_TypeInfo_var))->set_s_SupportedTrackingOriginModes_7(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::get_property()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  DisplayDeviceInfoFromActionISX_get_property_mE18E19A9ADCFEB9FC683F1D44B54C012FC64DF8F (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty property { get => m_Property; set => m_Property = value; }
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  L_0 = __this->get_m_Property_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::set_property(UnityEngine.InputSystem.InputActionProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayDeviceInfoFromActionISX_set_property_mC01D890F1432E91F4522B17B2904482BE82A86D3 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___value0, const RuntimeMethod* method)
{
	{
		// public InputActionProperty property { get => m_Property; set => m_Property = value; }
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  L_0 = ___value0;
		__this->set_m_Property_4(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::get_rootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * DisplayDeviceInfoFromActionISX_get_rootObject_mA21011310381DC56D6B7C9251462D1CBE29FA7F0 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// public GameObject rootObject { get { return m_RootObject; } set { m_RootObject = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_RootObject_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public GameObject rootObject { get { return m_RootObject; } set { m_RootObject = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::set_rootObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayDeviceInfoFromActionISX_set_rootObject_m8D43CC968D16BEA69AEDCEDE0445875A6388AFB3 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject rootObject { get { return m_RootObject; } set { m_RootObject = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_RootObject_5(L_0);
		// public GameObject rootObject { get { return m_RootObject; } set { m_RootObject = value; } }
		return;
	}
}
// UnityEngine.UI.Text UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::get_targetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * DisplayDeviceInfoFromActionISX_get_targetText_mC868BDD7988CB47566048E9AEA23C907EA23C690 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, const RuntimeMethod* method)
{
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_0 = NULL;
	{
		// public Text targetText { get { return m_TargetText; } set { m_TargetText = value; } }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_TargetText_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Text targetText { get { return m_TargetText; } set { m_TargetText = value; } }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::set_targetText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayDeviceInfoFromActionISX_set_targetText_m7729E6AB04D5747DC0734AEEDD1C6E135003B0F7 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Text targetText { get { return m_TargetText; } set { m_TargetText = value; } }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___value0;
		__this->set_m_TargetText_6(L_0);
		// public Text targetText { get { return m_TargetText; } set { m_TargetText = value; } }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayDeviceInfoFromActionISX_OnEnable_mF719F712CAC6AA3D1FBD64964A6C6442D9014296 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDF950C7FD6FD60A8F4D9D41F8D39DC465CF3ADB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (targetText == null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = DisplayDeviceInfoFromActionISX_get_targetText_mC868BDD7988CB47566048E9AEA23C907EA23C690(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogWarning("DisplayDeviceInfo Monobehaviour has no Target Text set. No information will be displayed.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralEDF950C7FD6FD60A8F4D9D41F8D39DC465CF3ADB, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayDeviceInfoFromActionISX_Update_m071BEF2443478AF09A7A1E1892C0862A16D852D2 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tFE6297375FF339F2A21BE3B2B1E139A5A440D734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_GetEnumerator_mAEEC68EF09B52103F64AB16AADF0F114B1D6FCBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m7CF26F2A142B9827C812C657CC6B37E4ECC9E123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D41BC2C5861CAFFF94AE651644ADF3FD72C2B5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEE28C18494D794852D03319FBBEB5AF85D7B86E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8784EC976A4B025737B3623D61D326A638E6522);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		// if(m_Property != null && m_Property.action != null && m_Property.action.controls.Count > 0)
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  L_0 = __this->get_m_Property_4();
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_1 = __this->get_address_of_m_Property_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_3 = __this->get_address_of_m_Property_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  L_5;
		L_5 = InputAction_get_controls_m3ACA0CED7721A99CA309B99F12FA1F8D022EDCD0(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_inline((ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E *)(&V_1), /*hidden argument*/ReadOnlyArray_1_get_Count_m46BBF59271BC3425206747A0DEFBA462A792CE6A_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B3_0 = 0;
	}

IL_0033:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0155;
		}
	}
	{
		// if (m_RootObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_m_RootObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// m_RootObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_m_RootObject_5();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// var device = m_Property.action.controls[0].device;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_12 = __this->get_address_of_m_Property_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_13;
		L_13 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E  L_14;
		L_14 = InputAction_get_controls_m3ACA0CED7721A99CA309B99F12FA1F8D022EDCD0(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_15;
		L_15 = ReadOnlyArray_1_get_Item_m7CF26F2A142B9827C812C657CC6B37E4ECC9E123((ReadOnlyArray_1_t4C9AD8F35DAADBA510E15BCB084E52040292471E *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m7CF26F2A142B9827C812C657CC6B37E4ECC9E123_RuntimeMethod_var);
		NullCheck(L_15);
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_16;
		L_16 = InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// if (targetText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17;
		L_17 = DisplayDeviceInfoFromActionISX_get_targetText_mC868BDD7988CB47566048E9AEA23C907EA23C690(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0153;
		}
	}
	{
		// m_TargetText.text = $"{device.name}\n{device.deviceId}\n";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_m_TargetText_6();
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InputControl_get_name_m55FDB4FFA97DADC2A0BF3C7CCADC7B73796B04FF(L_21, /*hidden argument*/NULL);
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InputDevice_get_deviceId_mF7907B9D1FAFE1561D22636C9F30F5C98BC98375_inline(L_23, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralDEE28C18494D794852D03319FBBEB5AF85D7B86E, L_22, L_26, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_27);
		// bool useComma = false;
		V_5 = (bool)0;
		// foreach(var usg in device.usages)
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_28 = V_2;
		NullCheck(L_28);
		ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  L_29;
		L_29 = InputControl_get_usages_mFAA56CE0CBBD7A8FB1AA4B3D7196BC968E8F5080(L_28, /*hidden argument*/NULL);
		V_7 = L_29;
		RuntimeObject* L_30;
		L_30 = ReadOnlyArray_1_GetEnumerator_mAEEC68EF09B52103F64AB16AADF0F114B1D6FCBD((ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E *)(&V_7), /*hidden argument*/ReadOnlyArray_1_GetEnumerator_mAEEC68EF09B52103F64AB16AADF0F114B1D6FCBD_RuntimeMethod_var);
		V_6 = L_30;
	}

IL_00c9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013a;
		}

IL_00cb:
		{
			// foreach(var usg in device.usages)
			RuntimeObject* L_31 = V_6;
			NullCheck(L_31);
			InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_32;
			L_32 = InterfaceFuncInvoker0< InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>::get_Current() */, IEnumerator_1_tFE6297375FF339F2A21BE3B2B1E139A5A440D734_il2cpp_TypeInfo_var, L_31);
			V_8 = L_32;
			// if (!useComma)
			bool L_33 = V_5;
			V_9 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
			bool L_34 = V_9;
			if (!L_34)
			{
				goto IL_010f;
			}
		}

IL_00e0:
		{
			// useComma = true;
			V_5 = (bool)1;
			// m_TargetText.text += $"{usg}";
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35 = __this->get_m_TargetText_6();
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = L_35;
			NullCheck(L_36);
			String_t* L_37;
			L_37 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_36);
			InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_38 = V_8;
			InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_39 = L_38;
			RuntimeObject * L_40 = Box(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_il2cpp_TypeInfo_var, &L_39);
			String_t* L_41;
			L_41 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_40, /*hidden argument*/NULL);
			String_t* L_42;
			L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_37, L_41, /*hidden argument*/NULL);
			NullCheck(L_36);
			VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_42);
			goto IL_0139;
		}

IL_010f:
		{
			// m_TargetText.text += $"{usg},";
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_43 = __this->get_m_TargetText_6();
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_44 = L_43;
			NullCheck(L_44);
			String_t* L_45;
			L_45 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_44);
			InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_46 = V_8;
			InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_47 = L_46;
			RuntimeObject * L_48 = Box(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_il2cpp_TypeInfo_var, &L_47);
			String_t* L_49;
			L_49 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7D41BC2C5861CAFFF94AE651644ADF3FD72C2B5F, L_48, /*hidden argument*/NULL);
			String_t* L_50;
			L_50 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_45, L_49, /*hidden argument*/NULL);
			NullCheck(L_44);
			VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_50);
		}

IL_0139:
		{
		}

IL_013a:
		{
			// foreach(var usg in device.usages)
			RuntimeObject* L_51 = V_6;
			NullCheck(L_51);
			bool L_52;
			L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_00cb;
			}
		}

IL_0143:
		{
			IL2CPP_LEAVE(0x152, FINALLY_0145);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0145;
	}

FINALLY_0145:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_53 = V_6;
			if (!L_53)
			{
				goto IL_0151;
			}
		}

IL_0149:
		{
			RuntimeObject* L_54 = V_6;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_54);
		}

IL_0151:
		{
			IL2CPP_END_FINALLY(325)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(325)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x152, IL_0152)
	}

IL_0152:
	{
	}

IL_0153:
	{
		// return;
		goto IL_0199;
	}

IL_0155:
	{
		// if (m_RootObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_m_RootObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_55, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_10 = L_56;
		bool L_57 = V_10;
		if (!L_57)
		{
			goto IL_0175;
		}
	}
	{
		// m_RootObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_m_RootObject_5();
		NullCheck(L_58);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_58, (bool)0, /*hidden argument*/NULL);
	}

IL_0175:
	{
		// if (m_TargetText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_59 = __this->get_m_TargetText_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_59, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_60;
		bool L_61 = V_11;
		if (!L_61)
		{
			goto IL_0198;
		}
	}
	{
		// m_TargetText.text = "<No Device Connected>";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_62 = __this->get_m_TargetText_6();
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_62, _stringLiteralE8784EC976A4B025737B3623D61D326A638E6522);
	}

IL_0198:
	{
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.DisplayDeviceInfoFromActionISX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayDeviceInfoFromActionISX__ctor_mDEED65D4F071A9F4EB6BB24A27000A89A57F8F70 (DisplayDeviceInfoFromActionISX_t7616CCDF689C9E2265D7CDA039D0D94E56FDBD9E * __this, const RuntimeMethod* method)
{
	{
		// GameObject m_RootObject = null;
		__this->set_m_RootObject_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::get_currentTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackingModeOrigin_get_currentTrackingOriginMode_m9AB2E476F452DE94F6241CF64F74A699F0384A20 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public TrackingOriginModeFlags currentTrackingOriginMode { get { return m_CurrentTrackingOriginMode; } }
		int32_t L_0 = __this->get_m_CurrentTrackingOriginMode_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public TrackingOriginModeFlags currentTrackingOriginMode { get { return m_CurrentTrackingOriginMode; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::get_desiredTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackingModeOrigin_get_desiredTrackingOriginMode_m802420BAB04D074F925CF54758BC98159E003896 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public TrackingOriginModeFlags desiredTrackingOriginMode { get { return m_DesiredTrackingOriginMode; } set { m_DesiredTrackingOriginMode = value; } }
		int32_t L_0 = __this->get_m_DesiredTrackingOriginMode_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public TrackingOriginModeFlags desiredTrackingOriginMode { get { return m_DesiredTrackingOriginMode; } set { m_DesiredTrackingOriginMode = value; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::set_desiredTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin_set_desiredTrackingOriginMode_m89E7A69C3DC400E2E5C124998C03CEF2570AB5E0 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags desiredTrackingOriginMode { get { return m_DesiredTrackingOriginMode; } set { m_DesiredTrackingOriginMode = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_DesiredTrackingOriginMode_11(L_0);
		// public TrackingOriginModeFlags desiredTrackingOriginMode { get { return m_DesiredTrackingOriginMode; } set { m_DesiredTrackingOriginMode = value; } }
		return;
	}
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::get_supportedTrackingOriginModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackingModeOrigin_get_supportedTrackingOriginModes_m4D2C794C8C8BE025BEC1DF444A80530D553434D0 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public TrackingOriginModeFlags supportedTrackingOriginModes { get { return m_SupportedTrackingOriginModes; } }
		int32_t L_0 = __this->get_m_SupportedTrackingOriginModes_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public TrackingOriginModeFlags supportedTrackingOriginModes { get { return m_SupportedTrackingOriginModes; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin_OnEnable_mF6911517313855426E380D65001220DAB1E897FD (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingModeOrigin_TrackingOriginUpdated_m1DDC026BEE0F5C403701E2AFC01418D458647CE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// SubsystemManager.GetInstances(s_InputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6(L_0, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		// s_InputSubsystems[i].trackingOriginUpdated += TrackingOriginUpdated;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_1 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_3;
		L_3 = List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_4 = (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)il2cpp_codegen_object_new(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9(L_4, __this, (intptr_t)((intptr_t)TrackingModeOrigin_TrackingOriginUpdated_m1DDC026BEE0F5C403701E2AFC01418D458647CE0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		NullCheck(L_3);
		XRInputSubsystem_add_trackingOriginUpdated_m8CD3F07F66759D7752621C40ED304E6782482392(L_3, L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_7 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline(L_7, /*hidden argument*/List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin_OnDisable_m5EB70F6C530F52751394E09D649E04ACC7C3CD8E (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingModeOrigin_TrackingOriginUpdated_m1DDC026BEE0F5C403701E2AFC01418D458647CE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// SubsystemManager.GetInstances(s_InputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6(L_0, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		// s_InputSubsystems[i].trackingOriginUpdated -= TrackingOriginUpdated;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_1 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_3;
		L_3 = List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_4 = (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)il2cpp_codegen_object_new(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9(L_4, __this, (intptr_t)((intptr_t)TrackingModeOrigin_TrackingOriginUpdated_m1DDC026BEE0F5C403701E2AFC01418D458647CE0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		NullCheck(L_3);
		XRInputSubsystem_remove_trackingOriginUpdated_m330F23CA8B04C50C56B120AF7387A2EA6B00E641(L_3, L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_7 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline(L_7, /*hidden argument*/List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::OnDesiredSelectionChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin_OnDesiredSelectionChanged_m430602D7EFCE59757A1DDDD03E7513D476123F77 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, int32_t ___newValue0, const RuntimeMethod* method)
{
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B2_0 = NULL;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B3_1 = NULL;
	{
		// desiredTrackingOriginMode  = (TrackingOriginModeFlags)(newValue == 0 ? 0 : (1 << (newValue - 1)));
		int32_t L_0 = ___newValue0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___newValue0;
		G_B3_0 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))&(int32_t)((int32_t)31)))));
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		TrackingModeOrigin_set_desiredTrackingOriginMode_m89E7A69C3DC400E2E5C124998C03CEF2570AB5E0(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::TrackingOriginUpdated(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin_TrackingOriginUpdated_m1DDC026BEE0F5C403701E2AFC01418D458647CE0 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___obj0, const RuntimeMethod* method)
{
	{
		// m_LastRecenteredTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_m_LastRecenteredTime_8(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin_Update_mFB5869839C10873CDA56C0B09F1F283AEE7A6943 (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B4_0 = NULL;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B5_1 = NULL;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B12_0 = NULL;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * G_B13_1 = NULL;
	{
		// XRInputSubsystem subsystem = null;
		V_0 = (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)NULL;
		// SubsystemManager.GetInstances(s_InputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6(L_0, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		// if(s_InputSubsystems.Count > 0)
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_1 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline(L_1, /*hidden argument*/List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// subsystem = s_InputSubsystems[0];
		IL2CPP_RUNTIME_CLASS_INIT(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_4 = ((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_4);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_5;
		L_5 = List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_inline(L_4, 0, /*hidden argument*/List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_002d:
	{
		// m_SupportedTrackingOriginModes = subsystem?.GetSupportedTrackingOriginModes() ?? TrackingOriginModeFlags.Unknown;
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_6 = V_0;
		G_B3_0 = __this;
		if (L_6)
		{
			G_B4_0 = __this;
			goto IL_0034;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_003a;
	}

IL_0034:
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = XRInputSubsystem_GetSupportedTrackingOriginModes_m12EEA2E804FF03D9B82BCB2E64EA520AF0C03B36(L_7, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		G_B5_1 = G_B4_0;
	}

IL_003a:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_m_SupportedTrackingOriginModes_12(G_B5_0);
		// if(m_CurrentTrackingOriginMode != m_DesiredTrackingOriginMode & m_DesiredTrackingOriginMode != TrackingOriginModeFlags.Unknown)
		int32_t L_9 = __this->get_m_CurrentTrackingOriginMode_9();
		int32_t L_10 = __this->get_m_DesiredTrackingOriginMode_11();
		int32_t L_11 = __this->get_m_DesiredTrackingOriginMode_11();
		V_2 = (bool)((int32_t)((int32_t)((((int32_t)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)((!(((uint32_t)L_11) <= ((uint32_t)0)))? 1 : 0)));
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// subsystem?.TrySetTrackingOriginMode(m_DesiredTrackingOriginMode);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_13 = V_0;
		if (L_13)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0071;
	}

IL_0064:
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_14 = V_0;
		int32_t L_15 = __this->get_m_DesiredTrackingOriginMode_11();
		NullCheck(L_14);
		bool L_16;
		L_16 = XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0071:
	{
	}

IL_0072:
	{
		// m_CurrentTrackingOriginMode = subsystem?.GetTrackingOriginMode() ?? TrackingOriginModeFlags.Unknown;
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_17 = V_0;
		G_B11_0 = __this;
		if (L_17)
		{
			G_B12_0 = __this;
			goto IL_0079;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		goto IL_007f;
	}

IL_0079:
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_18, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		G_B13_1 = G_B12_0;
	}

IL_007f:
	{
		NullCheck(G_B13_1);
		G_B13_1->set_m_CurrentTrackingOriginMode_9(G_B13_0);
		// if (m_CurrentTrackingOriginModeDisplay != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_m_CurrentTrackingOriginModeDisplay_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_21;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00b1;
		}
	}
	{
		// m_CurrentTrackingOriginModeDisplay.text = m_CurrentTrackingOriginMode.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_m_CurrentTrackingOriginModeDisplay_10();
		int32_t* L_24 = __this->get_address_of_m_CurrentTrackingOriginMode_9();
		RuntimeObject * L_25 = Box(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		*L_24 = *(int32_t*)UnBox(L_25);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
	}

IL_00b1:
	{
		// if(m_RecenteredImage != null)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_m_RecenteredImage_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_28;
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		// float lerp = (Time.time - m_LastRecenteredTime) / m_RecenteredColorResetTime;
		float L_30;
		L_30 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_31 = __this->get_m_LastRecenteredTime_8();
		float L_32 = __this->get_m_RecenteredColorResetTime_7();
		V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_31))/(float)L_32));
		// lerp = Mathf.Clamp(lerp, 0.0f, 1.0f);
		float L_33 = V_5;
		float L_34;
		L_34 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_33, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_5 = L_34;
		// m_RecenteredImage.color = Color.Lerp(m_RecenteredColor, m_RecenteredOffColor, lerp);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_m_RecenteredImage_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36 = __this->get_m_RecenteredColor_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = __this->get_m_RecenteredOffColor_5();
		float L_38 = V_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39;
		L_39 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_36, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_39);
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin__ctor_m1A7184215D2F72CCE1F52FAD0D6D202BDB0A123A (TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D * __this, const RuntimeMethod* method)
{
	{
		// Image m_RecenteredImage = null;
		__this->set_m_RecenteredImage_4((Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)NULL);
		// Color m_RecenteredOffColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_m_RecenteredOffColor_5(L_0);
		// Color m_RecenteredColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_m_RecenteredColor_6(L_1);
		// float m_RecenteredColorResetTime = 1.0f;
		__this->set_m_RecenteredColorResetTime_7((1.0f));
		// float m_LastRecenteredTime = 0.0f;
		__this->set_m_LastRecenteredTime_8((0.0f));
		// Text m_CurrentTrackingOriginModeDisplay = null;
		__this->set_m_CurrentTrackingOriginModeDisplay_10((Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)NULL);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.ControllerSample.TrackingModeOrigin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingModeOrigin__cctor_mEF19C75E1FCB4ECCB361353239C3FBFFABE85E6C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XRInputSubsystem> s_InputSubsystems = new List<XRInputSubsystem>();
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *)il2cpp_codegen_object_new(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C(L_0, /*hidden argument*/List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		((TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_StaticFields*)il2cpp_codegen_static_fields_for(TrackingModeOrigin_t2BA8A727DAAD0615173B980F56D18F78D6E7AD1D_il2cpp_TypeInfo_var))->set_s_InputSubsystems_13(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToButtonISX_get_actionReference_mD76424A518B5BB22B5D8F5B7BF90012E9171CA93_inline (ActionToButtonISX_tB174F495C5D7A0F1E528EE698AACD460F6B45750 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference ; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_m_ActionReference_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method)
{
	{
		// public InputDevice device => m_Device;
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_0 = __this->get_m_Device_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToSliderISX_get_actionReference_mEAA99D1B803168005922BAA19B1412E1531B9495_inline (ActionToSliderISX_t2F48064A1538A38F6E15911CC1D4B292CB61C4A8 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_m_ActionReference_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ActionToVector2SliderISX_get_actionReference_mEFC3C1EB133F81728146E27F8AE2A4E3CECD2230_inline (ActionToVector2SliderISX_tAF0684670F08A7C3A491044C8194A1EF89B75ED1 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionReference actionReference { get => m_ActionReference; set => m_ActionReference = value; }
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_m_ActionReference_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputDevice_get_deviceId_mF7907B9D1FAFE1561D22636C9F30F5C98BC98375_inline (InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * __this, const RuntimeMethod* method)
{
	{
		// public int deviceId => m_DeviceId;
		int32_t L_0 = __this->get_m_DeviceId_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_mDF6A47868DB1BD941C4278641B4D1F88C0BBA7D5_gshared_inline (ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975 * __this, const RuntimeMethod* method)
{
	{
		// public int Count => m_Length;
		int32_t L_0 = (int32_t)__this->get_m_Length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_2 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
