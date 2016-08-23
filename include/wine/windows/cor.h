/*** Autogenerated by WIDL 1.9.15 from cor.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __cor_h__
#define __cor_h__

/* Forward declarations */

#ifndef __IMetaDataDispenser_FWD_DEFINED__
#define __IMetaDataDispenser_FWD_DEFINED__
typedef interface IMetaDataDispenser IMetaDataDispenser;
#ifdef __cplusplus
interface IMetaDataDispenser;
#endif /* __cplusplus */
#endif

#ifndef __IMetaDataDispenserEx_FWD_DEFINED__
#define __IMetaDataDispenserEx_FWD_DEFINED__
typedef interface IMetaDataDispenserEx IMetaDataDispenserEx;
#ifdef __cplusplus
interface IMetaDataDispenserEx;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <propidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <ole2.h>
#include <corerror.h>
#include <corhdr.h>
DEFINE_GUID(CLSID_CorMetaDataDispenser, 0xe5cb7a31,0x7512,0x11d2,0x89,0xce,0x00,0x80,0xc7,0x92,0xe5,0xd8);
DEFINE_GUID(CLSID_CorMetaDataDispenserRuntime, 0x1ec2de53,0x75cc,0x11d2,0x97,0x75,0x00,0xa0,0xc9,0xb4,0xd5,0x0c);
/*****************************************************************************
 * IMetaDataDispenser interface
 */
#ifndef __IMetaDataDispenser_INTERFACE_DEFINED__
#define __IMetaDataDispenser_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMetaDataDispenser, 0x809c652e, 0x7396, 0x11d2, 0x97,0x71, 0x00,0xa0,0xc9,0xb4,0xd5,0x0c);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("809c652e-7396-11d2-9771-00a0c9b4d50c")
IMetaDataDispenser : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE DefineScope(
        REFCLSID rclsid,
        DWORD dwCreateFlags,
        REFIID riid,
        IUnknown **ppIUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenScope(
        LPCWSTR szScope,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenScopeOnMemory(
        const void *pData,
        ULONG cbData,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMetaDataDispenser, 0x809c652e, 0x7396, 0x11d2, 0x97,0x71, 0x00,0xa0,0xc9,0xb4,0xd5,0x0c)
#endif
#else
typedef struct IMetaDataDispenserVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMetaDataDispenser *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMetaDataDispenser *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMetaDataDispenser *This);

    /*** IMetaDataDispenser methods ***/
    HRESULT (STDMETHODCALLTYPE *DefineScope)(
        IMetaDataDispenser *This,
        REFCLSID rclsid,
        DWORD dwCreateFlags,
        REFIID riid,
        IUnknown **ppIUnk);

    HRESULT (STDMETHODCALLTYPE *OpenScope)(
        IMetaDataDispenser *This,
        LPCWSTR szScope,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk);

    HRESULT (STDMETHODCALLTYPE *OpenScopeOnMemory)(
        IMetaDataDispenser *This,
        const void *pData,
        ULONG cbData,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk);

    END_INTERFACE
} IMetaDataDispenserVtbl;

interface IMetaDataDispenser {
    CONST_VTBL IMetaDataDispenserVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMetaDataDispenser_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMetaDataDispenser_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMetaDataDispenser_Release(This) (This)->lpVtbl->Release(This)
/*** IMetaDataDispenser methods ***/
#define IMetaDataDispenser_DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk) (This)->lpVtbl->DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk)
#define IMetaDataDispenser_OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk) (This)->lpVtbl->OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk)
#define IMetaDataDispenser_OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk) (This)->lpVtbl->OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMetaDataDispenser_QueryInterface(IMetaDataDispenser* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMetaDataDispenser_AddRef(IMetaDataDispenser* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMetaDataDispenser_Release(IMetaDataDispenser* This) {
    return This->lpVtbl->Release(This);
}
/*** IMetaDataDispenser methods ***/
static FORCEINLINE HRESULT IMetaDataDispenser_DefineScope(IMetaDataDispenser* This,REFCLSID rclsid,DWORD dwCreateFlags,REFIID riid,IUnknown **ppIUnk) {
    return This->lpVtbl->DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk);
}
static FORCEINLINE HRESULT IMetaDataDispenser_OpenScope(IMetaDataDispenser* This,LPCWSTR szScope,DWORD dwOpenFlags,REFIID riid,IUnknown **ppIUnk) {
    return This->lpVtbl->OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk);
}
static FORCEINLINE HRESULT IMetaDataDispenser_OpenScopeOnMemory(IMetaDataDispenser* This,const void *pData,ULONG cbData,DWORD dwOpenFlags,REFIID riid,IUnknown **ppIUnk) {
    return This->lpVtbl->OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IMetaDataDispenser_DefineScope_Proxy(
    IMetaDataDispenser* This,
    REFCLSID rclsid,
    DWORD dwCreateFlags,
    REFIID riid,
    IUnknown **ppIUnk);
void __RPC_STUB IMetaDataDispenser_DefineScope_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMetaDataDispenser_OpenScope_Proxy(
    IMetaDataDispenser* This,
    LPCWSTR szScope,
    DWORD dwOpenFlags,
    REFIID riid,
    IUnknown **ppIUnk);
void __RPC_STUB IMetaDataDispenser_OpenScope_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMetaDataDispenser_OpenScopeOnMemory_Proxy(
    IMetaDataDispenser* This,
    const void *pData,
    ULONG cbData,
    DWORD dwOpenFlags,
    REFIID riid,
    IUnknown **ppIUnk);
void __RPC_STUB IMetaDataDispenser_OpenScopeOnMemory_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMetaDataDispenser_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMetaDataDispenserEx interface
 */
#ifndef __IMetaDataDispenserEx_INTERFACE_DEFINED__
#define __IMetaDataDispenserEx_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMetaDataDispenserEx, 0x31bcfce2, 0xdafb, 0x11d2, 0x9f,0x81, 0x00,0xc0,0x4f,0x79,0xa0,0xa3);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("31bcfce2-dafb-11d2-9f81-00c04f79a0a3")
IMetaDataDispenserEx : public IMetaDataDispenser
{
    virtual HRESULT STDMETHODCALLTYPE SetOption(
        REFGUID optionid,
        const VARIANT *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOption(
        REFGUID optionid,
        VARIANT *pvalue) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenScopeOnITypeInfo(
        ITypeInfo *pITI,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCORSystemDirectory(
        LPWSTR szBuffer,
        DWORD cchBuffer,
        DWORD *pchBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindAssembly(
        LPCWSTR szAppBase,
        LPCWSTR szPrivateBin,
        LPCWSTR szGlobalBin,
        LPCWSTR szAssemblyName,
        LPWSTR szName,
        ULONG cchName,
        ULONG *pcName) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindAssemblyModule(
        LPCWSTR szAppBase,
        LPCWSTR szPrivateBin,
        LPCWSTR szGlobalBin,
        LPCWSTR szAssemblyName,
        LPCWSTR szModuleName,
        LPWSTR szName,
        ULONG cchName,
        ULONG *pcName) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMetaDataDispenserEx, 0x31bcfce2, 0xdafb, 0x11d2, 0x9f,0x81, 0x00,0xc0,0x4f,0x79,0xa0,0xa3)
#endif
#else
typedef struct IMetaDataDispenserExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMetaDataDispenserEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMetaDataDispenserEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMetaDataDispenserEx *This);

    /*** IMetaDataDispenser methods ***/
    HRESULT (STDMETHODCALLTYPE *DefineScope)(
        IMetaDataDispenserEx *This,
        REFCLSID rclsid,
        DWORD dwCreateFlags,
        REFIID riid,
        IUnknown **ppIUnk);

    HRESULT (STDMETHODCALLTYPE *OpenScope)(
        IMetaDataDispenserEx *This,
        LPCWSTR szScope,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk);

    HRESULT (STDMETHODCALLTYPE *OpenScopeOnMemory)(
        IMetaDataDispenserEx *This,
        const void *pData,
        ULONG cbData,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk);

    /*** IMetaDataDispenserEx methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOption)(
        IMetaDataDispenserEx *This,
        REFGUID optionid,
        const VARIANT *value);

    HRESULT (STDMETHODCALLTYPE *GetOption)(
        IMetaDataDispenserEx *This,
        REFGUID optionid,
        VARIANT *pvalue);

    HRESULT (STDMETHODCALLTYPE *OpenScopeOnITypeInfo)(
        IMetaDataDispenserEx *This,
        ITypeInfo *pITI,
        DWORD dwOpenFlags,
        REFIID riid,
        IUnknown **ppIUnk);

    HRESULT (STDMETHODCALLTYPE *GetCORSystemDirectory)(
        IMetaDataDispenserEx *This,
        LPWSTR szBuffer,
        DWORD cchBuffer,
        DWORD *pchBuffer);

    HRESULT (STDMETHODCALLTYPE *FindAssembly)(
        IMetaDataDispenserEx *This,
        LPCWSTR szAppBase,
        LPCWSTR szPrivateBin,
        LPCWSTR szGlobalBin,
        LPCWSTR szAssemblyName,
        LPWSTR szName,
        ULONG cchName,
        ULONG *pcName);

    HRESULT (STDMETHODCALLTYPE *FindAssemblyModule)(
        IMetaDataDispenserEx *This,
        LPCWSTR szAppBase,
        LPCWSTR szPrivateBin,
        LPCWSTR szGlobalBin,
        LPCWSTR szAssemblyName,
        LPCWSTR szModuleName,
        LPWSTR szName,
        ULONG cchName,
        ULONG *pcName);

    END_INTERFACE
} IMetaDataDispenserExVtbl;

interface IMetaDataDispenserEx {
    CONST_VTBL IMetaDataDispenserExVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMetaDataDispenserEx_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMetaDataDispenserEx_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMetaDataDispenserEx_Release(This) (This)->lpVtbl->Release(This)
/*** IMetaDataDispenser methods ***/
#define IMetaDataDispenserEx_DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk) (This)->lpVtbl->DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk)
#define IMetaDataDispenserEx_OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk) (This)->lpVtbl->OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk)
#define IMetaDataDispenserEx_OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk) (This)->lpVtbl->OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk)
/*** IMetaDataDispenserEx methods ***/
#define IMetaDataDispenserEx_SetOption(This,optionid,value) (This)->lpVtbl->SetOption(This,optionid,value)
#define IMetaDataDispenserEx_GetOption(This,optionid,pvalue) (This)->lpVtbl->GetOption(This,optionid,pvalue)
#define IMetaDataDispenserEx_OpenScopeOnITypeInfo(This,pITI,dwOpenFlags,riid,ppIUnk) (This)->lpVtbl->OpenScopeOnITypeInfo(This,pITI,dwOpenFlags,riid,ppIUnk)
#define IMetaDataDispenserEx_GetCORSystemDirectory(This,szBuffer,cchBuffer,pchBuffer) (This)->lpVtbl->GetCORSystemDirectory(This,szBuffer,cchBuffer,pchBuffer)
#define IMetaDataDispenserEx_FindAssembly(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szName,cchName,pcName) (This)->lpVtbl->FindAssembly(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szName,cchName,pcName)
#define IMetaDataDispenserEx_FindAssemblyModule(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szModuleName,szName,cchName,pcName) (This)->lpVtbl->FindAssemblyModule(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szModuleName,szName,cchName,pcName)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMetaDataDispenserEx_QueryInterface(IMetaDataDispenserEx* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMetaDataDispenserEx_AddRef(IMetaDataDispenserEx* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMetaDataDispenserEx_Release(IMetaDataDispenserEx* This) {
    return This->lpVtbl->Release(This);
}
/*** IMetaDataDispenser methods ***/
static FORCEINLINE HRESULT IMetaDataDispenserEx_DefineScope(IMetaDataDispenserEx* This,REFCLSID rclsid,DWORD dwCreateFlags,REFIID riid,IUnknown **ppIUnk) {
    return This->lpVtbl->DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk);
}
static FORCEINLINE HRESULT IMetaDataDispenserEx_OpenScope(IMetaDataDispenserEx* This,LPCWSTR szScope,DWORD dwOpenFlags,REFIID riid,IUnknown **ppIUnk) {
    return This->lpVtbl->OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk);
}
static FORCEINLINE HRESULT IMetaDataDispenserEx_OpenScopeOnMemory(IMetaDataDispenserEx* This,const void *pData,ULONG cbData,DWORD dwOpenFlags,REFIID riid,IUnknown **ppIUnk) {
    return This->lpVtbl->OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk);
}
/*** IMetaDataDispenserEx methods ***/
static FORCEINLINE HRESULT IMetaDataDispenserEx_SetOption(IMetaDataDispenserEx* This,REFGUID optionid,const VARIANT *value) {
    return This->lpVtbl->SetOption(This,optionid,value);
}
static FORCEINLINE HRESULT IMetaDataDispenserEx_GetOption(IMetaDataDispenserEx* This,REFGUID optionid,VARIANT *pvalue) {
    return This->lpVtbl->GetOption(This,optionid,pvalue);
}
static FORCEINLINE HRESULT IMetaDataDispenserEx_OpenScopeOnITypeInfo(IMetaDataDispenserEx* This,ITypeInfo *pITI,DWORD dwOpenFlags,REFIID riid,IUnknown **ppIUnk) {
    return This->lpVtbl->OpenScopeOnITypeInfo(This,pITI,dwOpenFlags,riid,ppIUnk);
}
static FORCEINLINE HRESULT IMetaDataDispenserEx_GetCORSystemDirectory(IMetaDataDispenserEx* This,LPWSTR szBuffer,DWORD cchBuffer,DWORD *pchBuffer) {
    return This->lpVtbl->GetCORSystemDirectory(This,szBuffer,cchBuffer,pchBuffer);
}
static FORCEINLINE HRESULT IMetaDataDispenserEx_FindAssembly(IMetaDataDispenserEx* This,LPCWSTR szAppBase,LPCWSTR szPrivateBin,LPCWSTR szGlobalBin,LPCWSTR szAssemblyName,LPWSTR szName,ULONG cchName,ULONG *pcName) {
    return This->lpVtbl->FindAssembly(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szName,cchName,pcName);
}
static FORCEINLINE HRESULT IMetaDataDispenserEx_FindAssemblyModule(IMetaDataDispenserEx* This,LPCWSTR szAppBase,LPCWSTR szPrivateBin,LPCWSTR szGlobalBin,LPCWSTR szAssemblyName,LPCWSTR szModuleName,LPWSTR szName,ULONG cchName,ULONG *pcName) {
    return This->lpVtbl->FindAssemblyModule(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szModuleName,szName,cchName,pcName);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IMetaDataDispenserEx_SetOption_Proxy(
    IMetaDataDispenserEx* This,
    REFGUID optionid,
    const VARIANT *value);
void __RPC_STUB IMetaDataDispenserEx_SetOption_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMetaDataDispenserEx_GetOption_Proxy(
    IMetaDataDispenserEx* This,
    REFGUID optionid,
    VARIANT *pvalue);
void __RPC_STUB IMetaDataDispenserEx_GetOption_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMetaDataDispenserEx_OpenScopeOnITypeInfo_Proxy(
    IMetaDataDispenserEx* This,
    ITypeInfo *pITI,
    DWORD dwOpenFlags,
    REFIID riid,
    IUnknown **ppIUnk);
void __RPC_STUB IMetaDataDispenserEx_OpenScopeOnITypeInfo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMetaDataDispenserEx_GetCORSystemDirectory_Proxy(
    IMetaDataDispenserEx* This,
    LPWSTR szBuffer,
    DWORD cchBuffer,
    DWORD *pchBuffer);
void __RPC_STUB IMetaDataDispenserEx_GetCORSystemDirectory_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMetaDataDispenserEx_FindAssembly_Proxy(
    IMetaDataDispenserEx* This,
    LPCWSTR szAppBase,
    LPCWSTR szPrivateBin,
    LPCWSTR szGlobalBin,
    LPCWSTR szAssemblyName,
    LPWSTR szName,
    ULONG cchName,
    ULONG *pcName);
void __RPC_STUB IMetaDataDispenserEx_FindAssembly_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMetaDataDispenserEx_FindAssemblyModule_Proxy(
    IMetaDataDispenserEx* This,
    LPCWSTR szAppBase,
    LPCWSTR szPrivateBin,
    LPCWSTR szGlobalBin,
    LPCWSTR szAssemblyName,
    LPCWSTR szModuleName,
    LPWSTR szName,
    ULONG cchName,
    ULONG *pcName);
void __RPC_STUB IMetaDataDispenserEx_FindAssemblyModule_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMetaDataDispenserEx_INTERFACE_DEFINED__ */

BOOL        WINAPI _CorDllMain(HINSTANCE,DWORD,LPVOID);
__int32     WINAPI _CorExeMain(void);
__int32     WINAPI _CorExeMain2(PBYTE,DWORD,LPWSTR,LPWSTR,LPWSTR);
VOID        WINAPI _CorImageUnloading(PVOID);
HRESULT     WINAPI _CorValidateImage(PVOID*,LPCWSTR);
HRESULT     WINAPI CoInitializeCor(DWORD);
void        WINAPI CoUninitializeCor(void);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __cor_h__ */
