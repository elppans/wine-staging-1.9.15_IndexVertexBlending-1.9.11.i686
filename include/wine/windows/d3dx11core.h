/*** Autogenerated by WIDL 1.9.15 from d3dx11core.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __d3dx11core_h__
#define __d3dx11core_h__

/* Forward declarations */

#ifndef __ID3DX11DataLoader_FWD_DEFINED__
#define __ID3DX11DataLoader_FWD_DEFINED__
typedef interface ID3DX11DataLoader ID3DX11DataLoader;
#ifdef __cplusplus
interface ID3DX11DataLoader;
#endif /* __cplusplus */
#endif

#ifndef __ID3DX11DataProcessor_FWD_DEFINED__
#define __ID3DX11DataProcessor_FWD_DEFINED__
typedef interface ID3DX11DataProcessor ID3DX11DataProcessor;
#ifdef __cplusplus
interface ID3DX11DataProcessor;
#endif /* __cplusplus */
#endif

#ifndef __ID3DX11ThreadPump_FWD_DEFINED__
#define __ID3DX11ThreadPump_FWD_DEFINED__
typedef interface ID3DX11ThreadPump ID3DX11ThreadPump;
#ifdef __cplusplus
interface ID3DX11ThreadPump;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <dxgi.h>
#include <d3dcommon.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * ID3DX11DataLoader interface
 */
#ifndef __ID3DX11DataLoader_INTERFACE_DEFINED__
#define __ID3DX11DataLoader_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
interface ID3DX11DataLoader
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE Load(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Decompress(
        void **data,
        SIZE_T *bytes) = 0;

    virtual HRESULT STDMETHODCALLTYPE Destroy(
        ) = 0;

    END_INTERFACE

};
#else
typedef struct ID3DX11DataLoaderVtbl {
    BEGIN_INTERFACE

    /*** ID3DX11DataLoader methods ***/
    HRESULT (STDMETHODCALLTYPE *Load)(
        ID3DX11DataLoader *This);

    HRESULT (STDMETHODCALLTYPE *Decompress)(
        ID3DX11DataLoader *This,
        void **data,
        SIZE_T *bytes);

    HRESULT (STDMETHODCALLTYPE *Destroy)(
        ID3DX11DataLoader *This);

    END_INTERFACE
} ID3DX11DataLoaderVtbl;

interface ID3DX11DataLoader {
    CONST_VTBL ID3DX11DataLoaderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** ID3DX11DataLoader methods ***/
#define ID3DX11DataLoader_Load(This) (This)->lpVtbl->Load(This)
#define ID3DX11DataLoader_Decompress(This,data,bytes) (This)->lpVtbl->Decompress(This,data,bytes)
#define ID3DX11DataLoader_Destroy(This) (This)->lpVtbl->Destroy(This)
#else
/*** ID3DX11DataLoader methods ***/
static FORCEINLINE HRESULT ID3DX11DataLoader_Load(ID3DX11DataLoader* This) {
    return This->lpVtbl->Load(This);
}
static FORCEINLINE HRESULT ID3DX11DataLoader_Decompress(ID3DX11DataLoader* This,void **data,SIZE_T *bytes) {
    return This->lpVtbl->Decompress(This,data,bytes);
}
static FORCEINLINE HRESULT ID3DX11DataLoader_Destroy(ID3DX11DataLoader* This) {
    return This->lpVtbl->Destroy(This);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ID3DX11DataLoader_Load_Proxy(
    ID3DX11DataLoader* This);
void __RPC_STUB ID3DX11DataLoader_Load_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11DataLoader_Decompress_Proxy(
    ID3DX11DataLoader* This,
    void **data,
    SIZE_T *bytes);
void __RPC_STUB ID3DX11DataLoader_Decompress_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11DataLoader_Destroy_Proxy(
    ID3DX11DataLoader* This);
void __RPC_STUB ID3DX11DataLoader_Destroy_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ID3DX11DataLoader_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ID3DX11DataProcessor interface
 */
#ifndef __ID3DX11DataProcessor_INTERFACE_DEFINED__
#define __ID3DX11DataProcessor_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
interface ID3DX11DataProcessor
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE Process(
        void *data,
        SIZE_T bytes) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateDeviceObject(
        void **data_object) = 0;

    virtual HRESULT STDMETHODCALLTYPE Destroy(
        ) = 0;

    END_INTERFACE

};
#else
typedef struct ID3DX11DataProcessorVtbl {
    BEGIN_INTERFACE

    /*** ID3DX11DataProcessor methods ***/
    HRESULT (STDMETHODCALLTYPE *Process)(
        ID3DX11DataProcessor *This,
        void *data,
        SIZE_T bytes);

    HRESULT (STDMETHODCALLTYPE *CreateDeviceObject)(
        ID3DX11DataProcessor *This,
        void **data_object);

    HRESULT (STDMETHODCALLTYPE *Destroy)(
        ID3DX11DataProcessor *This);

    END_INTERFACE
} ID3DX11DataProcessorVtbl;

interface ID3DX11DataProcessor {
    CONST_VTBL ID3DX11DataProcessorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** ID3DX11DataProcessor methods ***/
#define ID3DX11DataProcessor_Process(This,data,bytes) (This)->lpVtbl->Process(This,data,bytes)
#define ID3DX11DataProcessor_CreateDeviceObject(This,data_object) (This)->lpVtbl->CreateDeviceObject(This,data_object)
#define ID3DX11DataProcessor_Destroy(This) (This)->lpVtbl->Destroy(This)
#else
/*** ID3DX11DataProcessor methods ***/
static FORCEINLINE HRESULT ID3DX11DataProcessor_Process(ID3DX11DataProcessor* This,void *data,SIZE_T bytes) {
    return This->lpVtbl->Process(This,data,bytes);
}
static FORCEINLINE HRESULT ID3DX11DataProcessor_CreateDeviceObject(ID3DX11DataProcessor* This,void **data_object) {
    return This->lpVtbl->CreateDeviceObject(This,data_object);
}
static FORCEINLINE HRESULT ID3DX11DataProcessor_Destroy(ID3DX11DataProcessor* This) {
    return This->lpVtbl->Destroy(This);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ID3DX11DataProcessor_Process_Proxy(
    ID3DX11DataProcessor* This,
    void *data,
    SIZE_T bytes);
void __RPC_STUB ID3DX11DataProcessor_Process_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11DataProcessor_CreateDeviceObject_Proxy(
    ID3DX11DataProcessor* This,
    void **data_object);
void __RPC_STUB ID3DX11DataProcessor_CreateDeviceObject_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11DataProcessor_Destroy_Proxy(
    ID3DX11DataProcessor* This);
void __RPC_STUB ID3DX11DataProcessor_Destroy_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ID3DX11DataProcessor_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ID3DX11ThreadPump interface
 */
#ifndef __ID3DX11ThreadPump_INTERFACE_DEFINED__
#define __ID3DX11ThreadPump_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID3DX11ThreadPump, 0xc93fecfa, 0x6967, 0x478a, 0xab,0xbc, 0x40,0x2d,0x90,0x62,0x1f,0xcb);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c93fecfa-6967-478a-abbc-402d90621fcb")
ID3DX11ThreadPump : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AddWorkItem(
        ID3DX11DataLoader *loader,
        ID3DX11DataProcessor *processor,
        HRESULT *hresult,
        void **device_object) = 0;

    virtual UINT STDMETHODCALLTYPE GetWorkItemCount(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WaitForAllItems(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessDeviceWorkItems(
        UINT count) = 0;

    virtual HRESULT STDMETHODCALLTYPE PurgeAllItems(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetQueueStatus(
        UINT *io_queue,
        UINT *process_queue,
        UINT *device_queue) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ID3DX11ThreadPump, 0xc93fecfa, 0x6967, 0x478a, 0xab,0xbc, 0x40,0x2d,0x90,0x62,0x1f,0xcb)
#endif
#else
typedef struct ID3DX11ThreadPumpVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ID3DX11ThreadPump *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ID3DX11ThreadPump *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ID3DX11ThreadPump *This);

    /*** ID3DX11ThreadPump methods ***/
    HRESULT (STDMETHODCALLTYPE *AddWorkItem)(
        ID3DX11ThreadPump *This,
        ID3DX11DataLoader *loader,
        ID3DX11DataProcessor *processor,
        HRESULT *hresult,
        void **device_object);

    UINT (STDMETHODCALLTYPE *GetWorkItemCount)(
        ID3DX11ThreadPump *This);

    HRESULT (STDMETHODCALLTYPE *WaitForAllItems)(
        ID3DX11ThreadPump *This);

    HRESULT (STDMETHODCALLTYPE *ProcessDeviceWorkItems)(
        ID3DX11ThreadPump *This,
        UINT count);

    HRESULT (STDMETHODCALLTYPE *PurgeAllItems)(
        ID3DX11ThreadPump *This);

    HRESULT (STDMETHODCALLTYPE *GetQueueStatus)(
        ID3DX11ThreadPump *This,
        UINT *io_queue,
        UINT *process_queue,
        UINT *device_queue);

    END_INTERFACE
} ID3DX11ThreadPumpVtbl;

interface ID3DX11ThreadPump {
    CONST_VTBL ID3DX11ThreadPumpVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ID3DX11ThreadPump_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ID3DX11ThreadPump_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ID3DX11ThreadPump_Release(This) (This)->lpVtbl->Release(This)
/*** ID3DX11ThreadPump methods ***/
#define ID3DX11ThreadPump_AddWorkItem(This,loader,processor,hresult,device_object) (This)->lpVtbl->AddWorkItem(This,loader,processor,hresult,device_object)
#define ID3DX11ThreadPump_GetWorkItemCount(This) (This)->lpVtbl->GetWorkItemCount(This)
#define ID3DX11ThreadPump_WaitForAllItems(This) (This)->lpVtbl->WaitForAllItems(This)
#define ID3DX11ThreadPump_ProcessDeviceWorkItems(This,count) (This)->lpVtbl->ProcessDeviceWorkItems(This,count)
#define ID3DX11ThreadPump_PurgeAllItems(This) (This)->lpVtbl->PurgeAllItems(This)
#define ID3DX11ThreadPump_GetQueueStatus(This,io_queue,process_queue,device_queue) (This)->lpVtbl->GetQueueStatus(This,io_queue,process_queue,device_queue)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ID3DX11ThreadPump_QueryInterface(ID3DX11ThreadPump* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ID3DX11ThreadPump_AddRef(ID3DX11ThreadPump* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ID3DX11ThreadPump_Release(ID3DX11ThreadPump* This) {
    return This->lpVtbl->Release(This);
}
/*** ID3DX11ThreadPump methods ***/
static FORCEINLINE HRESULT ID3DX11ThreadPump_AddWorkItem(ID3DX11ThreadPump* This,ID3DX11DataLoader *loader,ID3DX11DataProcessor *processor,HRESULT *hresult,void **device_object) {
    return This->lpVtbl->AddWorkItem(This,loader,processor,hresult,device_object);
}
static FORCEINLINE UINT ID3DX11ThreadPump_GetWorkItemCount(ID3DX11ThreadPump* This) {
    return This->lpVtbl->GetWorkItemCount(This);
}
static FORCEINLINE HRESULT ID3DX11ThreadPump_WaitForAllItems(ID3DX11ThreadPump* This) {
    return This->lpVtbl->WaitForAllItems(This);
}
static FORCEINLINE HRESULT ID3DX11ThreadPump_ProcessDeviceWorkItems(ID3DX11ThreadPump* This,UINT count) {
    return This->lpVtbl->ProcessDeviceWorkItems(This,count);
}
static FORCEINLINE HRESULT ID3DX11ThreadPump_PurgeAllItems(ID3DX11ThreadPump* This) {
    return This->lpVtbl->PurgeAllItems(This);
}
static FORCEINLINE HRESULT ID3DX11ThreadPump_GetQueueStatus(ID3DX11ThreadPump* This,UINT *io_queue,UINT *process_queue,UINT *device_queue) {
    return This->lpVtbl->GetQueueStatus(This,io_queue,process_queue,device_queue);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ID3DX11ThreadPump_AddWorkItem_Proxy(
    ID3DX11ThreadPump* This,
    ID3DX11DataLoader *loader,
    ID3DX11DataProcessor *processor,
    HRESULT *hresult,
    void **device_object);
void __RPC_STUB ID3DX11ThreadPump_AddWorkItem_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
UINT STDMETHODCALLTYPE ID3DX11ThreadPump_GetWorkItemCount_Proxy(
    ID3DX11ThreadPump* This);
void __RPC_STUB ID3DX11ThreadPump_GetWorkItemCount_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11ThreadPump_WaitForAllItems_Proxy(
    ID3DX11ThreadPump* This);
void __RPC_STUB ID3DX11ThreadPump_WaitForAllItems_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11ThreadPump_ProcessDeviceWorkItems_Proxy(
    ID3DX11ThreadPump* This,
    UINT count);
void __RPC_STUB ID3DX11ThreadPump_ProcessDeviceWorkItems_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11ThreadPump_PurgeAllItems_Proxy(
    ID3DX11ThreadPump* This);
void __RPC_STUB ID3DX11ThreadPump_PurgeAllItems_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DX11ThreadPump_GetQueueStatus_Proxy(
    ID3DX11ThreadPump* This,
    UINT *io_queue,
    UINT *process_queue,
    UINT *device_queue);
void __RPC_STUB ID3DX11ThreadPump_GetQueueStatus_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ID3DX11ThreadPump_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __d3dx11core_h__ */
