#ifndef	_mach_voucher_server_
#define	_mach_voucher_server_

/* Module mach_voucher */

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

#ifndef	mach_voucher_MSG_COUNT
#define	mach_voucher_MSG_COUNT	5
#endif	/* mach_voucher_MSG_COUNT */

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


/* Routine mach_voucher_extract_attr_content */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t mach_voucher_extract_attr_content
(
	ipc_voucher_t voucher,
	mach_voucher_attr_key_t key,
	mach_voucher_attr_content_t content,
	mach_msg_type_number_t *contentCnt
);

/* Routine mach_voucher_extract_attr_recipe */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t mach_voucher_extract_attr_recipe
(
	ipc_voucher_t voucher,
	mach_voucher_attr_key_t key,
	mach_voucher_attr_raw_recipe_t recipe,
	mach_msg_type_number_t *recipeCnt
);

/* Routine mach_voucher_extract_all_attr_recipes */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t mach_voucher_extract_all_attr_recipes
(
	ipc_voucher_t voucher,
	mach_voucher_attr_raw_recipe_array_t recipes,
	mach_msg_type_number_t *recipesCnt
);

/* Routine mach_voucher_attr_command */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t mach_voucher_attr_command
(
	ipc_voucher_t voucher,
	mach_voucher_attr_key_t key,
	mach_voucher_attr_command_t command,
	mach_voucher_attr_content_t in_content,
	mach_msg_type_number_t in_contentCnt,
	mach_voucher_attr_content_t out_content,
	mach_msg_type_number_t *out_contentCnt
);

/* Routine mach_voucher_debug_info */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t mach_voucher_debug_info
(
	ipc_space_t task,
	mach_port_name_t voucher_name,
	mach_voucher_attr_raw_recipe_array_t recipes,
	mach_msg_type_number_t *recipesCnt
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t mach_voucher_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
mig_routine_t mach_voucher_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
extern const struct mach_voucher_subsystem {
	mig_server_routine_t	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[5];
} mach_voucher_subsystem;

/* typedefs for all requests */

#ifndef __Request__mach_voucher_subsystem__defined
#define __Request__mach_voucher_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_voucher_attr_key_t key;
		mach_msg_type_number_t contentCnt;
	} __Request__mach_voucher_extract_attr_content_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_voucher_attr_key_t key;
		mach_msg_type_number_t recipeCnt;
	} __Request__mach_voucher_extract_attr_recipe_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t recipesCnt;
	} __Request__mach_voucher_extract_all_attr_recipes_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_voucher_attr_key_t key;
		mach_voucher_attr_command_t command;
		mach_msg_type_number_t in_contentCnt;
		uint8_t in_content[4096];
		mach_msg_type_number_t out_contentCnt;
	} __Request__mach_voucher_attr_command_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t voucher_name;
		mach_msg_type_number_t recipesCnt;
	} __Request__mach_voucher_debug_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Request__mach_voucher_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion__mach_voucher_subsystem__defined
#define __RequestUnion__mach_voucher_subsystem__defined
union __RequestUnion__mach_voucher_subsystem {
	__Request__mach_voucher_extract_attr_content_t Request_mach_voucher_extract_attr_content;
	__Request__mach_voucher_extract_attr_recipe_t Request_mach_voucher_extract_attr_recipe;
	__Request__mach_voucher_extract_all_attr_recipes_t Request_mach_voucher_extract_all_attr_recipes;
	__Request__mach_voucher_attr_command_t Request_mach_voucher_attr_command;
	__Request__mach_voucher_debug_info_t Request_mach_voucher_debug_info;
};
#endif /* __RequestUnion__mach_voucher_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__mach_voucher_subsystem__defined
#define __Reply__mach_voucher_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t contentCnt;
		uint8_t content[4096];
	} __Reply__mach_voucher_extract_attr_content_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t recipeCnt;
		uint8_t recipe[4096];
	} __Reply__mach_voucher_extract_attr_recipe_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t recipesCnt;
		uint8_t recipes[5120];
	} __Reply__mach_voucher_extract_all_attr_recipes_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t out_contentCnt;
		uint8_t out_content[4096];
	} __Reply__mach_voucher_attr_command_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t recipesCnt;
		uint8_t recipes[5120];
	} __Reply__mach_voucher_debug_info_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Reply__mach_voucher_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__mach_voucher_subsystem__defined
#define __ReplyUnion__mach_voucher_subsystem__defined
union __ReplyUnion__mach_voucher_subsystem {
	__Reply__mach_voucher_extract_attr_content_t Reply_mach_voucher_extract_attr_content;
	__Reply__mach_voucher_extract_attr_recipe_t Reply_mach_voucher_extract_attr_recipe;
	__Reply__mach_voucher_extract_all_attr_recipes_t Reply_mach_voucher_extract_all_attr_recipes;
	__Reply__mach_voucher_attr_command_t Reply_mach_voucher_attr_command;
	__Reply__mach_voucher_debug_info_t Reply_mach_voucher_debug_info;
};
#endif /* __ReplyUnion__mach_voucher_subsystem__defined */

#ifndef subsystem_to_name_map_mach_voucher
#define subsystem_to_name_map_mach_voucher \
    { "mach_voucher_extract_attr_content", 5400 },\
    { "mach_voucher_extract_attr_recipe", 5401 },\
    { "mach_voucher_extract_all_attr_recipes", 5402 },\
    { "mach_voucher_attr_command", 5403 },\
    { "mach_voucher_debug_info", 5404 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _mach_voucher_server_ */
