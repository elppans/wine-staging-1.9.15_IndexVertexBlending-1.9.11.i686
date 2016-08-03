/*** Autogenerated by WIDL 1.9.15 from downloadmgr.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __downloadmgr_h__
#define __downloadmgr_h__

/* Forward declarations */

#ifndef __IDownloadManager_FWD_DEFINED__
#define __IDownloadManager_FWD_DEFINED__
typedef interface IDownloadManager IDownloadManager;
#ifdef __cplusplus
interface IDownloadManager;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <ocidl.h>
#include <oleidl.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IDownloadManager interface
 */
#ifndef __IDownloadManager_INTERFACE_DEFINED__
#define __IDownloadManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDownloadManager, 0x988934a4, 0x064b, 0x11d3, 0xbb,0x80, 0x00,0x10,0x4b,0x35,0xe7,0xf9);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("988934a4-064b-11d3-bb80-00104b35e7f9")
IDownloadManager : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Download(
        IMoniker *pmk,
        IBindCtx *pbc,
        DWORD dwBindVerb,
        LONG grfBINDF,
        BINDINFO *pBindInfo,
        LPCOLESTR pszHeaders,
        LPCOLESTR pszRedir,
        UINT uiCP) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDownloadManager, 0x988934a4, 0x064b, 0x11d3, 0xbb,0x80, 0x00,0x10,0x4b,0x35,0xe7,0xf9)
#endif
#else
typedef struct IDownloadManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDownloadManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDownloadManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDownloadManager *This);

    /*** IDownloadManager methods ***/
    HRESULT (STDMETHODCALLTYPE *Download)(
        IDownloadManager *This,
        IMoniker *pmk,
        IBindCtx *pbc,
        DWORD dwBindVerb,
        LONG grfBINDF,
        BINDINFO *pBindInfo,
        LPCOLESTR pszHeaders,
        LPCOLESTR pszRedir,
        UINT uiCP);

    END_INTERFACE
} IDownloadManagerVtbl;

interface IDownloadManager {
    CONST_VTBL IDownloadManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDownloadManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDownloadManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDownloadManager_Release(This) (This)->lpVtbl->Release(This)
/*** IDownloadManager methods ***/
#define IDownloadManager_Download(This,pmk,pbc,dwBindVerb,grfBINDF,pBindInfo,pszHeaders,pszRedir,uiCP) (This)->lpVtbl->Download(This,pmk,pbc,dwBindVerb,grfBINDF,pBindInfo,pszHeaders,pszRedir,uiCP)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDownloadManager_QueryInterface(IDownloadManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDownloadManager_AddRef(IDownloadManager* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDownloadManager_Release(IDownloadManager* This) {
    return This->lpVtbl->Release(This);
}
/*** IDownloadManager methods ***/
static FORCEINLINE HRESULT IDownloadManager_Download(IDownloadManager* This,IMoniker *pmk,IBindCtx *pbc,DWORD dwBindVerb,LONG grfBINDF,BINDINFO *pBindInfo,LPCOLESTR pszHeaders,LPCOLESTR pszRedir,UINT uiCP) {
    return This->lpVtbl->Download(This,pmk,pbc,dwBindVerb,grfBINDF,pBindInfo,pszHeaders,pszRedir,uiCP);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IDownloadManager_Download_Proxy(
    IDownloadManager* This,
    IMoniker *pmk,
    IBindCtx *pbc,
    DWORD dwBindVerb,
    LONG grfBINDF,
    BINDINFO *pBindInfo,
    LPCOLESTR pszHeaders,
    LPCOLESTR pszRedir,
    UINT uiCP);
void __RPC_STUB IDownloadManager_Download_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDownloadManager_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __downloadmgr_h__ */
