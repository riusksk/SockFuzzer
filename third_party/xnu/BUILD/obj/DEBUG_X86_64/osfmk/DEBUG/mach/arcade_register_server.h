#ifndef	_arcade_register_server_
#define	_arcade_register_server_

/* Module arcade_register */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN MIG_STRNCPY_ZEROFILL CODE */

#if defined(__has_include)
#if __has_include(<mach/mig_strncpy_zerofill_support.h>)
#ifndef USING_MIG_STRNCPY_ZEROFILL
#define USING_MIG_STRNCPY_ZEROFILL
#endif
#ifndef __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern int mig_strncpy_zerofill(char *dest, const char *src, int len) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif /* __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ */
#endif /* __has_include(<mach/mig_strncpy_zerofill_support.h>) */
#endif /* __has_include */
	
/* END MIG_STRNCPY_ZEROFILL CODE */


#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	arcade_register_MSG_COUNT
#define	arcade_register_MSG_COUNT	1
#endif	/* arcade_register_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <ipc/ipc_voucher.h>
#include <kern/ipc_kobject.h>
#include <kern/ipc_tt.h>
#include <kern/ipc_host.h>
#include <kern/ipc_sync.h>
#include <kern/ledger.h>
#include <kern/processor.h>
#include <kern/sync_lock.h>
#include <kern/sync_sema.h>
#include <ipc/ipc_eventlink.h>
#include <vm/memory_object.h>
#include <vm/vm_map.h>
#include <kern/arcade.h>
#include <kern/ipc_mig.h>
#include <kern/suid_cred.h>
#include <mach/mig.h>
#include <mach/mach_types.h>

#ifdef __BeforeMigServerHeader
__BeforeMigServerHeader
#endif /* __BeforeMigServerHeader */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif


/* Routine arcade_register_new_upcall */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t arcade_register_new_upcall
(
	arcade_register_t arcade_register,
	mach_port_t arcade_upcall
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t arcade_register_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
mig_routine_t arcade_register_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
extern const struct arcade_register_subsystem {
	mig_server_routine_t	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[1];
} arcade_register_subsystem;

/* typedefs for all requests */

#ifndef __Request__arcade_register_subsystem__defined
#define __Request__arcade_register_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t arcade_upcall;
		/* end of the kernel processed data */
	} __Request__arcade_register_new_upcall_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Request__arcade_register_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion__arcade_register_subsystem__defined
#define __RequestUnion__arcade_register_subsystem__defined
union __RequestUnion__arcade_register_subsystem {
	__Request__arcade_register_new_upcall_t Request_arcade_register_new_upcall;
};
#endif /* __RequestUnion__arcade_register_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__arcade_register_subsystem__defined
#define __Reply__arcade_register_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__arcade_register_new_upcall_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Reply__arcade_register_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__arcade_register_subsystem__defined
#define __ReplyUnion__arcade_register_subsystem__defined
union __ReplyUnion__arcade_register_subsystem {
	__Reply__arcade_register_new_upcall_t Reply_arcade_register_new_upcall;
};
#endif /* __ReplyUnion__arcade_register_subsystem__defined */

#ifndef subsystem_to_name_map_arcade_register
#define subsystem_to_name_map_arcade_register \
    { "arcade_register_new_upcall", 51471 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _arcade_register_server_ */
