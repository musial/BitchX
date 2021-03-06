/*
 * This file was generated by orbit-idl - DO NOT EDIT!
 */

#include <glib.h>
#define ORBIT_IDL_SERIAL 9
#include <orb/orbit.h>

#ifndef europa_H
#define europa_H 1
#ifdef __cplusplus
extern "C"
{
#endif				/* __cplusplus */

/** typedefs **/
#if !defined(ORBIT_DECL_EuropaAI_Europa) && !defined(_EuropaAI_Europa_defined)
#define ORBIT_DECL_EuropaAI_Europa 1
#define _EuropaAI_Europa_defined 1
#define EuropaAI_Europa__free CORBA_Object__free
   typedef CORBA_Object EuropaAI_Europa;
   extern CORBA_unsigned_long EuropaAI_Europa__classid;
#endif

/** POA structures **/
   typedef struct
   {
      void *_private;
      void (*inputChat) (PortableServer_Servant _servant, CORBA_char * text,
			 CORBA_Environment * ev);
   }
   POA_EuropaAI_Europa__epv;
   typedef struct
   {
      PortableServer_ServantBase__epv *_base_epv;
      POA_EuropaAI_Europa__epv *EuropaAI_Europa_epv;
   }
   POA_EuropaAI_Europa__vepv;
   typedef struct
   {
      void *_private;
      POA_EuropaAI_Europa__vepv *vepv;
   }
   POA_EuropaAI_Europa;
   extern void POA_EuropaAI_Europa__init(PortableServer_Servant servant,
					 CORBA_Environment * ev);
   extern void POA_EuropaAI_Europa__fini(PortableServer_Servant servant,
					 CORBA_Environment * ev);

/** prototypes **/
   void EuropaAI_Europa_inputChat(EuropaAI_Europa _obj, CORBA_char * text,
				  CORBA_Environment * ev);

   void _ORBIT_skel_EuropaAI_Europa_inputChat(POA_EuropaAI_Europa *
					      _ORBIT_servant,
					      GIOPRecvBuffer *
					      _ORBIT_recv_buffer,
					      CORBA_Environment * ev,
					      void (*_impl_inputChat)
					      (PortableServer_Servant
					       _servant, CORBA_char * text,
					       CORBA_Environment * ev));
#ifdef __cplusplus
}
#endif				/* __cplusplus */

#endif
#undef ORBIT_IDL_SERIAL
