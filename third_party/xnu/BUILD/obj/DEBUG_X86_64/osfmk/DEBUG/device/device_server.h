#ifndef	_iokit_server_
#define	_iokit_server_

/* Module iokit */

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

#ifndef	iokit_MSG_COUNT
#define	iokit_MSG_COUNT	90
#endif	/* iokit_MSG_COUNT */

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
#include <mach/mach_types.h>
#include <device/device_types.h>

#ifdef __BeforeMigServerHeader
__BeforeMigServerHeader
#endif /* __BeforeMigServerHeader */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif


/* Routine io_object_get_class */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_object_get_class
(
	io_object_t object,
	io_name_t className
);

/* Routine io_object_conforms_to */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_object_conforms_to
(
	io_object_t object,
	io_name_t className,
	boolean_t *conforms
);

/* Routine io_iterator_next */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_iterator_next
(
	io_object_t iterator,
	io_object_t *object
);

/* Routine io_iterator_reset */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_iterator_reset
(
	io_object_t iterator
);

/* Routine io_service_get_matching_services */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_matching_services
(
	mach_port_t master_port,
	io_string_t matching,
	io_object_t *existing
);

/* Routine io_registry_entry_get_property */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_property
(
	io_object_t registry_entry,
	io_name_t property_name,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
);

/* Routine io_registry_create_iterator */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_create_iterator
(
	mach_port_t master_port,
	io_name_t plane,
	uint32_t options,
	io_object_t *iterator
);

/* Routine io_registry_iterator_enter_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_iterator_enter_entry
(
	io_object_t iterator
);

/* Routine io_registry_iterator_exit_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_iterator_exit_entry
(
	io_object_t iterator
);

/* Routine io_registry_entry_from_path */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_from_path
(
	mach_port_t master_port,
	io_string_t path,
	io_object_t *registry_entry
);

/* Routine io_registry_entry_get_name */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_name
(
	io_object_t registry_entry,
	io_name_t name
);

/* Routine io_registry_entry_get_properties */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_properties
(
	io_object_t registry_entry,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
);

/* Routine io_registry_entry_get_property_bytes */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_property_bytes
(
	io_object_t registry_entry,
	io_name_t property_name,
	io_struct_inband_t data,
	mach_msg_type_number_t *dataCnt
);

/* Routine io_registry_entry_get_child_iterator */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_child_iterator
(
	io_object_t registry_entry,
	io_name_t plane,
	io_object_t *iterator
);

/* Routine io_registry_entry_get_parent_iterator */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_parent_iterator
(
	io_object_t registry_entry,
	io_name_t plane,
	io_object_t *iterator
);

/* Routine io_service_close */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_close
(
	io_connect_t connection
);

/* Routine io_connect_get_service */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_get_service
(
	io_connect_t connection,
	io_object_t *service
);

/* Routine io_connect_set_notification_port */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_set_notification_port
(
	io_connect_t connection,
	uint32_t notification_type,
	mach_port_t port,
	uint32_t reference
);

/* Routine io_connect_map_memory */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_map_memory
(
	io_connect_t connection,
	uint32_t memory_type,
	task_t into_task,
	uint32_t *address,
	uint32_t *size,
	uint32_t flags
);

/* Routine io_connect_add_client */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_add_client
(
	io_connect_t connection,
	io_connect_t connect_to
);

/* Routine io_connect_set_properties */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_set_properties
(
	io_connect_t connection,
	io_buf_ptr_t properties,
	mach_msg_type_number_t propertiesCnt,
	kern_return_t *result
);

/* Routine io_connect_method_scalarI_scalarO */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_method_scalarI_scalarO
(
	io_connect_t connection,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_scalar_inband_t output,
	mach_msg_type_number_t *outputCnt
);

/* Routine io_connect_method_scalarI_structureO */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_method_scalarI_structureO
(
	io_connect_t connection,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
);

/* Routine io_connect_method_scalarI_structureI */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_method_scalarI_structureI
(
	io_connect_t connection,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t inputStruct,
	mach_msg_type_number_t inputStructCnt
);

/* Routine io_connect_method_structureI_structureO */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_method_structureI_structureO
(
	io_connect_t connection,
	uint32_t selector,
	io_struct_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
);

/* Routine io_registry_entry_get_path */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_path
(
	io_object_t registry_entry,
	io_name_t plane,
	io_string_t path
);

/* Routine io_registry_get_root_entry */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_get_root_entry
(
	mach_port_t master_port,
	io_object_t *root
);

/* Routine io_registry_entry_set_properties */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_set_properties
(
	io_object_t registry_entry,
	io_buf_ptr_t properties,
	mach_msg_type_number_t propertiesCnt,
	kern_return_t *result
);

/* Routine io_registry_entry_in_plane */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_in_plane
(
	io_object_t registry_entry,
	io_name_t plane,
	boolean_t *inPlane
);

/* Routine io_object_get_retain_count */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_object_get_retain_count
(
	io_object_t object,
	uint32_t *retainCount
);

/* Routine io_service_get_busy_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_busy_state
(
	io_object_t service,
	uint32_t *busyState
);

/* Routine io_service_wait_quiet */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_wait_quiet
(
	io_object_t service,
	mach_timespec_t wait_time
);

/* Routine io_registry_entry_create_iterator */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_create_iterator
(
	io_object_t registry_entry,
	io_name_t plane,
	uint32_t options,
	io_object_t *iterator
);

/* Routine io_iterator_is_valid */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_iterator_is_valid
(
	io_object_t iterator,
	boolean_t *is_valid
);

/* Routine io_catalog_send_data */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_catalog_send_data
(
	mach_port_t master_port,
	uint32_t flag,
	io_buf_ptr_t inData,
	mach_msg_type_number_t inDataCnt,
	kern_return_t *result
);

/* Routine io_catalog_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_catalog_terminate
(
	mach_port_t master_port,
	uint32_t flag,
	io_name_t name
);

/* Routine io_catalog_get_data */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_catalog_get_data
(
	mach_port_t master_port,
	uint32_t flag,
	io_buf_ptr_t *outData,
	mach_msg_type_number_t *outDataCnt
);

/* Routine io_catalog_get_gen_count */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_catalog_get_gen_count
(
	mach_port_t master_port,
	uint32_t *genCount
);

/* Routine io_catalog_module_loaded */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_catalog_module_loaded
(
	mach_port_t master_port,
	io_name_t name
);

/* Routine io_catalog_reset */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_catalog_reset
(
	mach_port_t master_port,
	uint32_t flag
);

/* Routine io_service_request_probe */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_request_probe
(
	io_object_t service,
	uint32_t options
);

/* Routine io_registry_entry_get_name_in_plane */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_name_in_plane
(
	io_object_t registry_entry,
	io_name_t plane,
	io_name_t name
);

/* Routine io_service_match_property_table */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_match_property_table
(
	io_object_t service,
	io_string_t matching,
	boolean_t *matches
);

/* Routine io_async_method_scalarI_scalarO */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_async_method_scalarI_scalarO
(
	io_connect_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_scalar_inband_t output,
	mach_msg_type_number_t *outputCnt
);

/* Routine io_async_method_scalarI_structureO */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_async_method_scalarI_structureO
(
	io_connect_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
);

/* Routine io_async_method_scalarI_structureI */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_async_method_scalarI_structureI
(
	io_connect_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t inputStruct,
	mach_msg_type_number_t inputStructCnt
);

/* Routine io_async_method_structureI_structureO */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_async_method_structureI_structureO
(
	io_connect_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_struct_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
);

/* Routine io_service_add_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_notification
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_string_t matching,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	io_object_t *notification
);

/* Routine io_service_add_interest_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_interest_notification
(
	io_object_t service,
	io_name_t type_of_interest,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	io_object_t *notification
);

/* Routine io_service_acknowledge_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_acknowledge_notification
(
	io_object_t service,
	natural_t notify_ref,
	natural_t response
);

/* Routine io_connect_get_notification_semaphore */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_get_notification_semaphore
(
	io_connect_t connection,
	natural_t notification_type,
	semaphore_t *semaphore
);

/* Routine io_connect_unmap_memory */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_unmap_memory
(
	io_connect_t connection,
	uint32_t memory_type,
	task_t into_task,
	uint32_t address
);

/* Routine io_registry_entry_get_location_in_plane */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_location_in_plane
(
	io_object_t registry_entry,
	io_name_t plane,
	io_name_t location
);

/* Routine io_registry_entry_get_property_recursively */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_property_recursively
(
	io_object_t registry_entry,
	io_name_t plane,
	io_name_t property_name,
	uint32_t options,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
);

/* Routine io_service_get_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_state
(
	io_object_t service,
	uint64_t *state,
	uint32_t *busy_state,
	uint64_t *accumulated_busy_time
);

/* Routine io_service_get_matching_services_ool */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_matching_services_ool
(
	mach_port_t master_port,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	kern_return_t *result,
	io_object_t *existing
);

/* Routine io_service_match_property_table_ool */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_match_property_table_ool
(
	io_object_t service,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	kern_return_t *result,
	boolean_t *matches
);

/* Routine io_service_add_notification_ool */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_notification_ool
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	kern_return_t *result,
	io_object_t *notification
);

/* Routine io_object_get_superclass */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_object_get_superclass
(
	mach_port_t master_port,
	io_name_t obj_name,
	io_name_t class_name
);

/* Routine io_object_get_bundle_identifier */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_object_get_bundle_identifier
(
	mach_port_t master_port,
	io_name_t obj_name,
	io_name_t class_name
);

/* Routine io_service_open_extended */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_open_extended
(
	io_object_t service,
	task_t owningTask,
	uint32_t connect_type,
	NDR_record_t ndr,
	io_buf_ptr_t properties,
	mach_msg_type_number_t propertiesCnt,
	kern_return_t *result,
	io_connect_t *connection
);

/* Routine io_connect_map_memory_into_task */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_map_memory_into_task
(
	io_connect_t connection,
	uint32_t memory_type,
	task_t into_task,
	mach_vm_address_t *address,
	mach_vm_size_t *size,
	uint32_t flags
);

/* Routine io_connect_unmap_memory_from_task */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_unmap_memory_from_task
(
	io_connect_t connection,
	uint32_t memory_type,
	task_t from_task,
	mach_vm_address_t address
);

/* Routine io_connect_method */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_method
(
	io_connect_t connection,
	uint32_t selector,
	io_scalar_inband64_t scalar_input,
	mach_msg_type_number_t scalar_inputCnt,
	io_struct_inband_t inband_input,
	mach_msg_type_number_t inband_inputCnt,
	mach_vm_address_t ool_input,
	mach_vm_size_t ool_input_size,
	io_struct_inband_t inband_output,
	mach_msg_type_number_t *inband_outputCnt,
	io_scalar_inband64_t scalar_output,
	mach_msg_type_number_t *scalar_outputCnt,
	mach_vm_address_t ool_output,
	mach_vm_size_t *ool_output_size
);

/* Routine io_connect_async_method */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_async_method
(
	io_connect_t connection,
	mach_port_t wake_port,
	io_async_ref64_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband64_t scalar_input,
	mach_msg_type_number_t scalar_inputCnt,
	io_struct_inband_t inband_input,
	mach_msg_type_number_t inband_inputCnt,
	mach_vm_address_t ool_input,
	mach_vm_size_t ool_input_size,
	io_struct_inband_t inband_output,
	mach_msg_type_number_t *inband_outputCnt,
	io_scalar_inband64_t scalar_output,
	mach_msg_type_number_t *scalar_outputCnt,
	mach_vm_address_t ool_output,
	mach_vm_size_t *ool_output_size
);

/* Routine io_connect_set_notification_port_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_set_notification_port_64
(
	io_connect_t connection,
	uint32_t notification_type,
	mach_port_t port,
	io_user_reference_t reference
);

/* Routine io_service_add_notification_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_notification_64
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_string_t matching,
	mach_port_t wake_port,
	io_async_ref64_t reference,
	mach_msg_type_number_t referenceCnt,
	io_object_t *notification
);

/* Routine io_service_add_interest_notification_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_interest_notification_64
(
	io_object_t service,
	io_name_t type_of_interest,
	mach_port_t wake_port,
	io_async_ref64_t reference,
	mach_msg_type_number_t referenceCnt,
	io_object_t *notification
);

/* Routine io_service_add_notification_ool_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_notification_ool_64
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	mach_port_t wake_port,
	io_async_ref64_t reference,
	mach_msg_type_number_t referenceCnt,
	kern_return_t *result,
	io_object_t *notification
);

/* Routine io_registry_entry_get_registry_entry_id */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_registry_entry_id
(
	io_object_t registry_entry,
	uint64_t *entry_id
);

/* Routine io_connect_method_var_output */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_connect_method_var_output
(
	io_connect_t connection,
	uint32_t selector,
	io_scalar_inband64_t scalar_input,
	mach_msg_type_number_t scalar_inputCnt,
	io_struct_inband_t inband_input,
	mach_msg_type_number_t inband_inputCnt,
	mach_vm_address_t ool_input,
	mach_vm_size_t ool_input_size,
	io_struct_inband_t inband_output,
	mach_msg_type_number_t *inband_outputCnt,
	io_scalar_inband64_t scalar_output,
	mach_msg_type_number_t *scalar_outputCnt,
	io_buf_ptr_t *var_output,
	mach_msg_type_number_t *var_outputCnt
);

/* Routine io_service_get_matching_service */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_matching_service
(
	mach_port_t master_port,
	io_string_t matching,
	io_object_t *service
);

/* Routine io_service_get_matching_service_ool */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_matching_service_ool
(
	mach_port_t master_port,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	kern_return_t *result,
	io_object_t *service
);

/* Routine io_service_get_authorization_id */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_authorization_id
(
	io_object_t service,
	uint64_t *authorization_id
);

/* Routine io_service_set_authorization_id */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_set_authorization_id
(
	io_object_t service,
	uint64_t authorization_id
);

/* Routine io_server_version */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_server_version
(
	mach_port_t master_port,
	uint64_t *version
);

/* Routine io_registry_entry_get_properties_bin */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_properties_bin
(
	io_object_t registry_entry,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
);

/* Routine io_registry_entry_get_property_bin */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_property_bin
(
	io_object_t registry_entry,
	io_name_t plane,
	io_name_t property_name,
	uint32_t options,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
);

/* Routine io_service_get_matching_service_bin */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_matching_service_bin
(
	mach_port_t master_port,
	io_struct_inband_t matching,
	mach_msg_type_number_t matchingCnt,
	io_object_t *service
);

/* Routine io_service_get_matching_services_bin */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_get_matching_services_bin
(
	mach_port_t master_port,
	io_struct_inband_t matching,
	mach_msg_type_number_t matchingCnt,
	io_object_t *existing
);

/* Routine io_service_match_property_table_bin */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_match_property_table_bin
(
	io_object_t service,
	io_struct_inband_t matching,
	mach_msg_type_number_t matchingCnt,
	boolean_t *matches
);

/* Routine io_service_add_notification_bin */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_notification_bin
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_struct_inband_t matching,
	mach_msg_type_number_t matchingCnt,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	io_object_t *notification
);

/* Routine io_service_add_notification_bin_64 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_service_add_notification_bin_64
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_struct_inband_t matching,
	mach_msg_type_number_t matchingCnt,
	mach_port_t wake_port,
	io_async_ref64_t reference,
	mach_msg_type_number_t referenceCnt,
	io_object_t *notification
);

/* Routine io_registry_entry_get_path_ool */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_path_ool
(
	io_object_t registry_entry,
	io_name_t plane,
	io_string_inband_t path,
	io_buf_ptr_t *path_ool,
	mach_msg_type_number_t *path_oolCnt
);

/* Routine io_registry_entry_from_path_ool */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_from_path_ool
(
	mach_port_t master_port,
	io_string_inband_t path,
	io_buf_ptr_t path_ool,
	mach_msg_type_number_t path_oolCnt,
	kern_return_t *result,
	io_object_t *registry_entry
);

/* Routine io_device_tree_entry_exists_with_name */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_device_tree_entry_exists_with_name
(
	mach_port_t master_port,
	io_name_t name,
	boolean_t *exists
);

/* Routine io_registry_entry_get_properties_bin_buf */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_properties_bin_buf
(
	io_object_t registry_entry,
	mach_vm_address_t buf,
	mach_vm_size_t *bufsize,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
);

/* Routine io_registry_entry_get_property_bin_buf */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t is_io_registry_entry_get_property_bin_buf
(
	io_object_t registry_entry,
	io_name_t plane,
	io_name_t property_name,
	uint32_t options,
	mach_vm_address_t buf,
	mach_vm_size_t *bufsize,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t iokit_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
mig_routine_t iokit_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
extern const struct is_iokit_subsystem {
	mig_server_routine_t	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[90];
} is_iokit_subsystem;

/* typedefs for all requests */

#ifndef __Request__iokit_subsystem__defined
#define __Request__iokit_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_object_get_class_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t classNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t classNameCnt;
		char className[128];
	} __Request__io_object_conforms_to_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_iterator_next_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_iterator_reset_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
	} __Request__io_service_get_matching_services_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
	} __Request__io_registry_entry_get_property_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		uint32_t options;
	} __Request__io_registry_create_iterator_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_registry_iterator_enter_entry_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_registry_iterator_exit_entry_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[512];
	} __Request__io_registry_entry_from_path_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_registry_entry_get_name_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_registry_entry_get_properties_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		mach_msg_type_number_t dataCnt;
	} __Request__io_registry_entry_get_property_bytes_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} __Request__io_registry_entry_get_child_iterator_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} __Request__io_registry_entry_get_parent_iterator_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_service_close_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_connect_get_service_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t notification_type;
		uint32_t reference;
	} __Request__io_connect_set_notification_port_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		uint32_t address;
		uint32_t size;
		uint32_t flags;
	} __Request__io_connect_map_memory_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connect_to;
		/* end of the kernel processed data */
	} __Request__io_connect_add_client_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Request__io_connect_set_properties_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
	} __Request__io_connect_method_scalarI_scalarO_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
	} __Request__io_connect_method_scalarI_structureO_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t inputStructCnt;
		char inputStruct[4096];
	} __Request__io_connect_method_scalarI_structureI_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		char input[4096];
		mach_msg_type_number_t outputCnt;
	} __Request__io_connect_method_structureI_structureO_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} __Request__io_registry_entry_get_path_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_registry_get_root_entry_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Request__io_registry_entry_set_properties_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} __Request__io_registry_entry_in_plane_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_object_get_retain_count_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_service_get_busy_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_timespec_t wait_time;
	} __Request__io_service_wait_quiet_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		uint32_t options;
	} __Request__io_registry_entry_create_iterator_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_iterator_is_valid_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t inData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t flag;
		mach_msg_type_number_t inDataCnt;
	} __Request__io_catalog_send_data_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t flag;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} __Request__io_catalog_terminate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t flag;
	} __Request__io_catalog_get_data_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_catalog_get_gen_count_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} __Request__io_catalog_module_loaded_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t flag;
	} __Request__io_catalog_reset_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t options;
	} __Request__io_service_request_probe_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} __Request__io_registry_entry_get_name_in_plane_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
	} __Request__io_service_match_property_table_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
	} __Request__io_async_method_scalarI_scalarO_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
	} __Request__io_async_method_scalarI_structureO_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t inputStructCnt;
		char inputStruct[4096];
	} __Request__io_async_method_scalarI_structureI_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		char input[4096];
		mach_msg_type_number_t outputCnt;
	} __Request__io_async_method_structureI_structureO_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
	} __Request__io_service_add_notification_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t type_of_interestOffset; /* MiG doesn't use it */
		mach_msg_type_number_t type_of_interestCnt;
		char type_of_interest[128];
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
	} __Request__io_service_add_interest_notification_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		natural_t notify_ref;
		natural_t response;
	} __Request__io_service_acknowledge_notification_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		natural_t notification_type;
	} __Request__io_connect_get_notification_semaphore_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		uint32_t address;
	} __Request__io_connect_unmap_memory_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} __Request__io_registry_entry_get_location_in_plane_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		uint32_t options;
	} __Request__io_registry_entry_get_property_recursively_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_service_get_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
	} __Request__io_service_get_matching_services_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
	} __Request__io_service_match_property_table_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingCnt;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
	} __Request__io_service_add_notification_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t obj_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t obj_nameCnt;
		char obj_name[128];
	} __Request__io_object_get_superclass_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t obj_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t obj_nameCnt;
		char obj_name[128];
	} __Request__io_object_get_bundle_identifier_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t owningTask;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t connect_type;
		NDR_record_t ndr;
		mach_msg_type_number_t propertiesCnt;
	} __Request__io_service_open_extended_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		mach_vm_address_t address;
		mach_vm_size_t size;
		uint32_t flags;
	} __Request__io_connect_map_memory_into_task_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t from_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		mach_vm_address_t address;
	} __Request__io_connect_unmap_memory_from_task_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t scalar_inputCnt;
		io_user_scalar_t scalar_input[16];
		mach_msg_type_number_t inband_inputCnt;
		char inband_input[4096];
		mach_vm_address_t ool_input;
		mach_vm_size_t ool_input_size;
		mach_msg_type_number_t inband_outputCnt;
		mach_msg_type_number_t scalar_outputCnt;
		mach_vm_address_t ool_output;
		mach_vm_size_t ool_output_size;
	} __Request__io_connect_method_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t scalar_inputCnt;
		io_user_scalar_t scalar_input[16];
		mach_msg_type_number_t inband_inputCnt;
		char inband_input[4096];
		mach_vm_address_t ool_input;
		mach_vm_size_t ool_input_size;
		mach_msg_type_number_t inband_outputCnt;
		mach_msg_type_number_t scalar_outputCnt;
		mach_vm_address_t ool_output;
		mach_vm_size_t ool_output_size;
	} __Request__io_connect_async_method_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t notification_type;
		io_user_reference_t reference;
	} __Request__io_connect_set_notification_port_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
	} __Request__io_service_add_notification_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t type_of_interestOffset; /* MiG doesn't use it */
		mach_msg_type_number_t type_of_interestCnt;
		char type_of_interest[128];
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
	} __Request__io_service_add_interest_notification_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingCnt;
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
	} __Request__io_service_add_notification_ool_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_registry_entry_get_registry_entry_id_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t scalar_inputCnt;
		io_user_scalar_t scalar_input[16];
		mach_msg_type_number_t inband_inputCnt;
		char inband_input[4096];
		mach_vm_address_t ool_input;
		mach_vm_size_t ool_input_size;
		mach_msg_type_number_t inband_outputCnt;
		mach_msg_type_number_t scalar_outputCnt;
	} __Request__io_connect_method_var_output_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
	} __Request__io_service_get_matching_service_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
	} __Request__io_service_get_matching_service_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_service_get_authorization_id_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t authorization_id;
	} __Request__io_service_set_authorization_id_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_server_version_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_registry_entry_get_properties_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		uint32_t options;
	} __Request__io_registry_entry_get_property_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
		char matching[4096];
	} __Request__io_service_get_matching_service_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
		char matching[4096];
	} __Request__io_service_get_matching_services_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
		char matching[4096];
	} __Request__io_service_match_property_table_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingCnt;
		char matching[4096];
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
	} __Request__io_service_add_notification_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingCnt;
		char matching[4096];
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
	} __Request__io_service_add_notification_bin_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} __Request__io_registry_entry_get_path_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t path_ool;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[4096];
		mach_msg_type_number_t path_oolCnt;
	} __Request__io_registry_entry_from_path_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} __Request__io_device_tree_entry_exists_with_name_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_vm_address_t buf;
		mach_vm_size_t bufsize;
	} __Request__io_registry_entry_get_properties_bin_buf_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		uint32_t options;
		mach_vm_address_t buf;
		mach_vm_size_t bufsize;
	} __Request__io_registry_entry_get_property_bin_buf_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Request__iokit_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion__is_iokit_subsystem__defined
#define __RequestUnion__is_iokit_subsystem__defined
union __RequestUnion__is_iokit_subsystem {
	__Request__io_object_get_class_t Request_io_object_get_class;
	__Request__io_object_conforms_to_t Request_io_object_conforms_to;
	__Request__io_iterator_next_t Request_io_iterator_next;
	__Request__io_iterator_reset_t Request_io_iterator_reset;
	__Request__io_service_get_matching_services_t Request_io_service_get_matching_services;
	__Request__io_registry_entry_get_property_t Request_io_registry_entry_get_property;
	__Request__io_registry_create_iterator_t Request_io_registry_create_iterator;
	__Request__io_registry_iterator_enter_entry_t Request_io_registry_iterator_enter_entry;
	__Request__io_registry_iterator_exit_entry_t Request_io_registry_iterator_exit_entry;
	__Request__io_registry_entry_from_path_t Request_io_registry_entry_from_path;
	__Request__io_registry_entry_get_name_t Request_io_registry_entry_get_name;
	__Request__io_registry_entry_get_properties_t Request_io_registry_entry_get_properties;
	__Request__io_registry_entry_get_property_bytes_t Request_io_registry_entry_get_property_bytes;
	__Request__io_registry_entry_get_child_iterator_t Request_io_registry_entry_get_child_iterator;
	__Request__io_registry_entry_get_parent_iterator_t Request_io_registry_entry_get_parent_iterator;
	__Request__io_service_close_t Request_io_service_close;
	__Request__io_connect_get_service_t Request_io_connect_get_service;
	__Request__io_connect_set_notification_port_t Request_io_connect_set_notification_port;
	__Request__io_connect_map_memory_t Request_io_connect_map_memory;
	__Request__io_connect_add_client_t Request_io_connect_add_client;
	__Request__io_connect_set_properties_t Request_io_connect_set_properties;
	__Request__io_connect_method_scalarI_scalarO_t Request_io_connect_method_scalarI_scalarO;
	__Request__io_connect_method_scalarI_structureO_t Request_io_connect_method_scalarI_structureO;
	__Request__io_connect_method_scalarI_structureI_t Request_io_connect_method_scalarI_structureI;
	__Request__io_connect_method_structureI_structureO_t Request_io_connect_method_structureI_structureO;
	__Request__io_registry_entry_get_path_t Request_io_registry_entry_get_path;
	__Request__io_registry_get_root_entry_t Request_io_registry_get_root_entry;
	__Request__io_registry_entry_set_properties_t Request_io_registry_entry_set_properties;
	__Request__io_registry_entry_in_plane_t Request_io_registry_entry_in_plane;
	__Request__io_object_get_retain_count_t Request_io_object_get_retain_count;
	__Request__io_service_get_busy_state_t Request_io_service_get_busy_state;
	__Request__io_service_wait_quiet_t Request_io_service_wait_quiet;
	__Request__io_registry_entry_create_iterator_t Request_io_registry_entry_create_iterator;
	__Request__io_iterator_is_valid_t Request_io_iterator_is_valid;
	__Request__io_catalog_send_data_t Request_io_catalog_send_data;
	__Request__io_catalog_terminate_t Request_io_catalog_terminate;
	__Request__io_catalog_get_data_t Request_io_catalog_get_data;
	__Request__io_catalog_get_gen_count_t Request_io_catalog_get_gen_count;
	__Request__io_catalog_module_loaded_t Request_io_catalog_module_loaded;
	__Request__io_catalog_reset_t Request_io_catalog_reset;
	__Request__io_service_request_probe_t Request_io_service_request_probe;
	__Request__io_registry_entry_get_name_in_plane_t Request_io_registry_entry_get_name_in_plane;
	__Request__io_service_match_property_table_t Request_io_service_match_property_table;
	__Request__io_async_method_scalarI_scalarO_t Request_io_async_method_scalarI_scalarO;
	__Request__io_async_method_scalarI_structureO_t Request_io_async_method_scalarI_structureO;
	__Request__io_async_method_scalarI_structureI_t Request_io_async_method_scalarI_structureI;
	__Request__io_async_method_structureI_structureO_t Request_io_async_method_structureI_structureO;
	__Request__io_service_add_notification_t Request_io_service_add_notification;
	__Request__io_service_add_interest_notification_t Request_io_service_add_interest_notification;
	__Request__io_service_acknowledge_notification_t Request_io_service_acknowledge_notification;
	__Request__io_connect_get_notification_semaphore_t Request_io_connect_get_notification_semaphore;
	__Request__io_connect_unmap_memory_t Request_io_connect_unmap_memory;
	__Request__io_registry_entry_get_location_in_plane_t Request_io_registry_entry_get_location_in_plane;
	__Request__io_registry_entry_get_property_recursively_t Request_io_registry_entry_get_property_recursively;
	__Request__io_service_get_state_t Request_io_service_get_state;
	__Request__io_service_get_matching_services_ool_t Request_io_service_get_matching_services_ool;
	__Request__io_service_match_property_table_ool_t Request_io_service_match_property_table_ool;
	__Request__io_service_add_notification_ool_t Request_io_service_add_notification_ool;
	__Request__io_object_get_superclass_t Request_io_object_get_superclass;
	__Request__io_object_get_bundle_identifier_t Request_io_object_get_bundle_identifier;
	__Request__io_service_open_extended_t Request_io_service_open_extended;
	__Request__io_connect_map_memory_into_task_t Request_io_connect_map_memory_into_task;
	__Request__io_connect_unmap_memory_from_task_t Request_io_connect_unmap_memory_from_task;
	__Request__io_connect_method_t Request_io_connect_method;
	__Request__io_connect_async_method_t Request_io_connect_async_method;
	__Request__io_connect_set_notification_port_64_t Request_io_connect_set_notification_port_64;
	__Request__io_service_add_notification_64_t Request_io_service_add_notification_64;
	__Request__io_service_add_interest_notification_64_t Request_io_service_add_interest_notification_64;
	__Request__io_service_add_notification_ool_64_t Request_io_service_add_notification_ool_64;
	__Request__io_registry_entry_get_registry_entry_id_t Request_io_registry_entry_get_registry_entry_id;
	__Request__io_connect_method_var_output_t Request_io_connect_method_var_output;
	__Request__io_service_get_matching_service_t Request_io_service_get_matching_service;
	__Request__io_service_get_matching_service_ool_t Request_io_service_get_matching_service_ool;
	__Request__io_service_get_authorization_id_t Request_io_service_get_authorization_id;
	__Request__io_service_set_authorization_id_t Request_io_service_set_authorization_id;
	__Request__io_server_version_t Request_io_server_version;
	__Request__io_registry_entry_get_properties_bin_t Request_io_registry_entry_get_properties_bin;
	__Request__io_registry_entry_get_property_bin_t Request_io_registry_entry_get_property_bin;
	__Request__io_service_get_matching_service_bin_t Request_io_service_get_matching_service_bin;
	__Request__io_service_get_matching_services_bin_t Request_io_service_get_matching_services_bin;
	__Request__io_service_match_property_table_bin_t Request_io_service_match_property_table_bin;
	__Request__io_service_add_notification_bin_t Request_io_service_add_notification_bin;
	__Request__io_service_add_notification_bin_64_t Request_io_service_add_notification_bin_64;
	__Request__io_registry_entry_get_path_ool_t Request_io_registry_entry_get_path_ool;
	__Request__io_registry_entry_from_path_ool_t Request_io_registry_entry_from_path_ool;
	__Request__io_device_tree_entry_exists_with_name_t Request_io_device_tree_entry_exists_with_name;
	__Request__io_registry_entry_get_properties_bin_buf_t Request_io_registry_entry_get_properties_bin_buf;
	__Request__io_registry_entry_get_property_bin_buf_t Request_io_registry_entry_get_property_bin_buf;
};
#endif /* __RequestUnion__is_iokit_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__iokit_subsystem__defined
#define __Reply__iokit_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t classNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t classNameCnt;
		char className[128];
	} __Reply__io_object_get_class_t __attribute__((unused));
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
		boolean_t conforms;
	} __Reply__io_object_conforms_to_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t object;
		/* end of the kernel processed data */
	} __Reply__io_iterator_next_t __attribute__((unused));
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
	} __Reply__io_iterator_reset_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t existing;
		/* end of the kernel processed data */
	} __Reply__io_service_get_matching_services_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply__io_registry_entry_get_property_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply__io_registry_create_iterator_t __attribute__((unused));
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
	} __Reply__io_registry_iterator_enter_entry_t __attribute__((unused));
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
	} __Reply__io_registry_iterator_exit_entry_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t registry_entry;
		/* end of the kernel processed data */
	} __Reply__io_registry_entry_from_path_t __attribute__((unused));
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
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} __Reply__io_registry_entry_get_name_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply__io_registry_entry_get_properties_t __attribute__((unused));
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
		mach_msg_type_number_t dataCnt;
		char data[4096];
	} __Reply__io_registry_entry_get_property_bytes_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply__io_registry_entry_get_child_iterator_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply__io_registry_entry_get_parent_iterator_t __attribute__((unused));
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
	} __Reply__io_service_close_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t service;
		/* end of the kernel processed data */
	} __Reply__io_connect_get_service_t __attribute__((unused));
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
	} __Reply__io_connect_set_notification_port_t __attribute__((unused));
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
		uint32_t address;
		uint32_t size;
	} __Reply__io_connect_map_memory_t __attribute__((unused));
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
	} __Reply__io_connect_add_client_t __attribute__((unused));
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
		kern_return_t result;
	} __Reply__io_connect_set_properties_t __attribute__((unused));
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
		mach_msg_type_number_t outputCnt;
		int output[16];
	} __Reply__io_connect_method_scalarI_scalarO_t __attribute__((unused));
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
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply__io_connect_method_scalarI_structureO_t __attribute__((unused));
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
	} __Reply__io_connect_method_scalarI_structureI_t __attribute__((unused));
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
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply__io_connect_method_structureI_structureO_t __attribute__((unused));
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
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[512];
	} __Reply__io_registry_entry_get_path_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t root;
		/* end of the kernel processed data */
	} __Reply__io_registry_get_root_entry_t __attribute__((unused));
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
		kern_return_t result;
	} __Reply__io_registry_entry_set_properties_t __attribute__((unused));
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
		boolean_t inPlane;
	} __Reply__io_registry_entry_in_plane_t __attribute__((unused));
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
		uint32_t retainCount;
	} __Reply__io_object_get_retain_count_t __attribute__((unused));
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
		uint32_t busyState;
	} __Reply__io_service_get_busy_state_t __attribute__((unused));
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
	} __Reply__io_service_wait_quiet_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply__io_registry_entry_create_iterator_t __attribute__((unused));
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
		boolean_t is_valid;
	} __Reply__io_iterator_is_valid_t __attribute__((unused));
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
		kern_return_t result;
	} __Reply__io_catalog_send_data_t __attribute__((unused));
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
	} __Reply__io_catalog_terminate_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t outData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t outDataCnt;
	} __Reply__io_catalog_get_data_t __attribute__((unused));
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
		uint32_t genCount;
	} __Reply__io_catalog_get_gen_count_t __attribute__((unused));
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
	} __Reply__io_catalog_module_loaded_t __attribute__((unused));
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
	} __Reply__io_catalog_reset_t __attribute__((unused));
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
	} __Reply__io_service_request_probe_t __attribute__((unused));
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
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} __Reply__io_registry_entry_get_name_in_plane_t __attribute__((unused));
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
		boolean_t matches;
	} __Reply__io_service_match_property_table_t __attribute__((unused));
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
		mach_msg_type_number_t outputCnt;
		int output[16];
	} __Reply__io_async_method_scalarI_scalarO_t __attribute__((unused));
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
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply__io_async_method_scalarI_structureO_t __attribute__((unused));
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
	} __Reply__io_async_method_scalarI_structureI_t __attribute__((unused));
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
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply__io_async_method_structureI_structureO_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply__io_service_add_notification_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply__io_service_add_interest_notification_t __attribute__((unused));
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
	} __Reply__io_service_acknowledge_notification_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t semaphore;
		/* end of the kernel processed data */
	} __Reply__io_connect_get_notification_semaphore_t __attribute__((unused));
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
	} __Reply__io_connect_unmap_memory_t __attribute__((unused));
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
		mach_msg_type_number_t locationOffset; /* MiG doesn't use it */
		mach_msg_type_number_t locationCnt;
		char location[128];
	} __Reply__io_registry_entry_get_location_in_plane_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply__io_registry_entry_get_property_recursively_t __attribute__((unused));
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
		uint64_t state;
		uint32_t busy_state;
		uint64_t accumulated_busy_time;
	} __Reply__io_service_get_state_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t existing;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply__io_service_get_matching_services_ool_t __attribute__((unused));
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
		kern_return_t result;
		boolean_t matches;
	} __Reply__io_service_match_property_table_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply__io_service_add_notification_ool_t __attribute__((unused));
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
		mach_msg_type_number_t class_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t class_nameCnt;
		char class_name[128];
	} __Reply__io_object_get_superclass_t __attribute__((unused));
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
		mach_msg_type_number_t class_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t class_nameCnt;
		char class_name[128];
	} __Reply__io_object_get_bundle_identifier_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connection;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply__io_service_open_extended_t __attribute__((unused));
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
		mach_vm_address_t address;
		mach_vm_size_t size;
	} __Reply__io_connect_map_memory_into_task_t __attribute__((unused));
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
	} __Reply__io_connect_unmap_memory_from_task_t __attribute__((unused));
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
		mach_msg_type_number_t inband_outputCnt;
		char inband_output[4096];
		mach_msg_type_number_t scalar_outputCnt;
		io_user_scalar_t scalar_output[16];
		mach_vm_size_t ool_output_size;
	} __Reply__io_connect_method_t __attribute__((unused));
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
		mach_msg_type_number_t inband_outputCnt;
		char inband_output[4096];
		mach_msg_type_number_t scalar_outputCnt;
		io_user_scalar_t scalar_output[16];
		mach_vm_size_t ool_output_size;
	} __Reply__io_connect_async_method_t __attribute__((unused));
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
	} __Reply__io_connect_set_notification_port_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply__io_service_add_notification_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply__io_service_add_interest_notification_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply__io_service_add_notification_ool_64_t __attribute__((unused));
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
		uint64_t entry_id;
	} __Reply__io_registry_entry_get_registry_entry_id_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t var_output;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t inband_outputCnt;
		char inband_output[4096];
		mach_msg_type_number_t scalar_outputCnt;
		io_user_scalar_t scalar_output[16];
		mach_msg_type_number_t var_outputCnt;
	} __Reply__io_connect_method_var_output_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t service;
		/* end of the kernel processed data */
	} __Reply__io_service_get_matching_service_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t service;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply__io_service_get_matching_service_ool_t __attribute__((unused));
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
		uint64_t authorization_id;
	} __Reply__io_service_get_authorization_id_t __attribute__((unused));
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
	} __Reply__io_service_set_authorization_id_t __attribute__((unused));
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
		uint64_t version;
	} __Reply__io_server_version_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply__io_registry_entry_get_properties_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply__io_registry_entry_get_property_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t service;
		/* end of the kernel processed data */
	} __Reply__io_service_get_matching_service_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t existing;
		/* end of the kernel processed data */
	} __Reply__io_service_get_matching_services_bin_t __attribute__((unused));
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
		boolean_t matches;
	} __Reply__io_service_match_property_table_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply__io_service_add_notification_bin_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply__io_service_add_notification_bin_64_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t path_ool;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[4096];
		mach_msg_type_number_t path_oolCnt;
	} __Reply__io_registry_entry_get_path_ool_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t registry_entry;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply__io_registry_entry_from_path_ool_t __attribute__((unused));
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
		boolean_t exists;
	} __Reply__io_device_tree_entry_exists_with_name_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_vm_size_t bufsize;
		mach_msg_type_number_t propertiesCnt;
	} __Reply__io_registry_entry_get_properties_bin_buf_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_vm_size_t bufsize;
		mach_msg_type_number_t propertiesCnt;
	} __Reply__io_registry_entry_get_property_bin_buf_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Reply__iokit_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__is_iokit_subsystem__defined
#define __ReplyUnion__is_iokit_subsystem__defined
union __ReplyUnion__is_iokit_subsystem {
	__Reply__io_object_get_class_t Reply_io_object_get_class;
	__Reply__io_object_conforms_to_t Reply_io_object_conforms_to;
	__Reply__io_iterator_next_t Reply_io_iterator_next;
	__Reply__io_iterator_reset_t Reply_io_iterator_reset;
	__Reply__io_service_get_matching_services_t Reply_io_service_get_matching_services;
	__Reply__io_registry_entry_get_property_t Reply_io_registry_entry_get_property;
	__Reply__io_registry_create_iterator_t Reply_io_registry_create_iterator;
	__Reply__io_registry_iterator_enter_entry_t Reply_io_registry_iterator_enter_entry;
	__Reply__io_registry_iterator_exit_entry_t Reply_io_registry_iterator_exit_entry;
	__Reply__io_registry_entry_from_path_t Reply_io_registry_entry_from_path;
	__Reply__io_registry_entry_get_name_t Reply_io_registry_entry_get_name;
	__Reply__io_registry_entry_get_properties_t Reply_io_registry_entry_get_properties;
	__Reply__io_registry_entry_get_property_bytes_t Reply_io_registry_entry_get_property_bytes;
	__Reply__io_registry_entry_get_child_iterator_t Reply_io_registry_entry_get_child_iterator;
	__Reply__io_registry_entry_get_parent_iterator_t Reply_io_registry_entry_get_parent_iterator;
	__Reply__io_service_close_t Reply_io_service_close;
	__Reply__io_connect_get_service_t Reply_io_connect_get_service;
	__Reply__io_connect_set_notification_port_t Reply_io_connect_set_notification_port;
	__Reply__io_connect_map_memory_t Reply_io_connect_map_memory;
	__Reply__io_connect_add_client_t Reply_io_connect_add_client;
	__Reply__io_connect_set_properties_t Reply_io_connect_set_properties;
	__Reply__io_connect_method_scalarI_scalarO_t Reply_io_connect_method_scalarI_scalarO;
	__Reply__io_connect_method_scalarI_structureO_t Reply_io_connect_method_scalarI_structureO;
	__Reply__io_connect_method_scalarI_structureI_t Reply_io_connect_method_scalarI_structureI;
	__Reply__io_connect_method_structureI_structureO_t Reply_io_connect_method_structureI_structureO;
	__Reply__io_registry_entry_get_path_t Reply_io_registry_entry_get_path;
	__Reply__io_registry_get_root_entry_t Reply_io_registry_get_root_entry;
	__Reply__io_registry_entry_set_properties_t Reply_io_registry_entry_set_properties;
	__Reply__io_registry_entry_in_plane_t Reply_io_registry_entry_in_plane;
	__Reply__io_object_get_retain_count_t Reply_io_object_get_retain_count;
	__Reply__io_service_get_busy_state_t Reply_io_service_get_busy_state;
	__Reply__io_service_wait_quiet_t Reply_io_service_wait_quiet;
	__Reply__io_registry_entry_create_iterator_t Reply_io_registry_entry_create_iterator;
	__Reply__io_iterator_is_valid_t Reply_io_iterator_is_valid;
	__Reply__io_catalog_send_data_t Reply_io_catalog_send_data;
	__Reply__io_catalog_terminate_t Reply_io_catalog_terminate;
	__Reply__io_catalog_get_data_t Reply_io_catalog_get_data;
	__Reply__io_catalog_get_gen_count_t Reply_io_catalog_get_gen_count;
	__Reply__io_catalog_module_loaded_t Reply_io_catalog_module_loaded;
	__Reply__io_catalog_reset_t Reply_io_catalog_reset;
	__Reply__io_service_request_probe_t Reply_io_service_request_probe;
	__Reply__io_registry_entry_get_name_in_plane_t Reply_io_registry_entry_get_name_in_plane;
	__Reply__io_service_match_property_table_t Reply_io_service_match_property_table;
	__Reply__io_async_method_scalarI_scalarO_t Reply_io_async_method_scalarI_scalarO;
	__Reply__io_async_method_scalarI_structureO_t Reply_io_async_method_scalarI_structureO;
	__Reply__io_async_method_scalarI_structureI_t Reply_io_async_method_scalarI_structureI;
	__Reply__io_async_method_structureI_structureO_t Reply_io_async_method_structureI_structureO;
	__Reply__io_service_add_notification_t Reply_io_service_add_notification;
	__Reply__io_service_add_interest_notification_t Reply_io_service_add_interest_notification;
	__Reply__io_service_acknowledge_notification_t Reply_io_service_acknowledge_notification;
	__Reply__io_connect_get_notification_semaphore_t Reply_io_connect_get_notification_semaphore;
	__Reply__io_connect_unmap_memory_t Reply_io_connect_unmap_memory;
	__Reply__io_registry_entry_get_location_in_plane_t Reply_io_registry_entry_get_location_in_plane;
	__Reply__io_registry_entry_get_property_recursively_t Reply_io_registry_entry_get_property_recursively;
	__Reply__io_service_get_state_t Reply_io_service_get_state;
	__Reply__io_service_get_matching_services_ool_t Reply_io_service_get_matching_services_ool;
	__Reply__io_service_match_property_table_ool_t Reply_io_service_match_property_table_ool;
	__Reply__io_service_add_notification_ool_t Reply_io_service_add_notification_ool;
	__Reply__io_object_get_superclass_t Reply_io_object_get_superclass;
	__Reply__io_object_get_bundle_identifier_t Reply_io_object_get_bundle_identifier;
	__Reply__io_service_open_extended_t Reply_io_service_open_extended;
	__Reply__io_connect_map_memory_into_task_t Reply_io_connect_map_memory_into_task;
	__Reply__io_connect_unmap_memory_from_task_t Reply_io_connect_unmap_memory_from_task;
	__Reply__io_connect_method_t Reply_io_connect_method;
	__Reply__io_connect_async_method_t Reply_io_connect_async_method;
	__Reply__io_connect_set_notification_port_64_t Reply_io_connect_set_notification_port_64;
	__Reply__io_service_add_notification_64_t Reply_io_service_add_notification_64;
	__Reply__io_service_add_interest_notification_64_t Reply_io_service_add_interest_notification_64;
	__Reply__io_service_add_notification_ool_64_t Reply_io_service_add_notification_ool_64;
	__Reply__io_registry_entry_get_registry_entry_id_t Reply_io_registry_entry_get_registry_entry_id;
	__Reply__io_connect_method_var_output_t Reply_io_connect_method_var_output;
	__Reply__io_service_get_matching_service_t Reply_io_service_get_matching_service;
	__Reply__io_service_get_matching_service_ool_t Reply_io_service_get_matching_service_ool;
	__Reply__io_service_get_authorization_id_t Reply_io_service_get_authorization_id;
	__Reply__io_service_set_authorization_id_t Reply_io_service_set_authorization_id;
	__Reply__io_server_version_t Reply_io_server_version;
	__Reply__io_registry_entry_get_properties_bin_t Reply_io_registry_entry_get_properties_bin;
	__Reply__io_registry_entry_get_property_bin_t Reply_io_registry_entry_get_property_bin;
	__Reply__io_service_get_matching_service_bin_t Reply_io_service_get_matching_service_bin;
	__Reply__io_service_get_matching_services_bin_t Reply_io_service_get_matching_services_bin;
	__Reply__io_service_match_property_table_bin_t Reply_io_service_match_property_table_bin;
	__Reply__io_service_add_notification_bin_t Reply_io_service_add_notification_bin;
	__Reply__io_service_add_notification_bin_64_t Reply_io_service_add_notification_bin_64;
	__Reply__io_registry_entry_get_path_ool_t Reply_io_registry_entry_get_path_ool;
	__Reply__io_registry_entry_from_path_ool_t Reply_io_registry_entry_from_path_ool;
	__Reply__io_device_tree_entry_exists_with_name_t Reply_io_device_tree_entry_exists_with_name;
	__Reply__io_registry_entry_get_properties_bin_buf_t Reply_io_registry_entry_get_properties_bin_buf;
	__Reply__io_registry_entry_get_property_bin_buf_t Reply_io_registry_entry_get_property_bin_buf;
};
#endif /* __ReplyUnion__is_iokit_subsystem__defined */

#ifndef subsystem_to_name_map_iokit
#define subsystem_to_name_map_iokit \
    { "io_object_get_class", 2800 },\
    { "io_object_conforms_to", 2801 },\
    { "io_iterator_next", 2802 },\
    { "io_iterator_reset", 2803 },\
    { "io_service_get_matching_services", 2804 },\
    { "io_registry_entry_get_property", 2805 },\
    { "io_registry_create_iterator", 2806 },\
    { "io_registry_iterator_enter_entry", 2807 },\
    { "io_registry_iterator_exit_entry", 2808 },\
    { "io_registry_entry_from_path", 2809 },\
    { "io_registry_entry_get_name", 2810 },\
    { "io_registry_entry_get_properties", 2811 },\
    { "io_registry_entry_get_property_bytes", 2812 },\
    { "io_registry_entry_get_child_iterator", 2813 },\
    { "io_registry_entry_get_parent_iterator", 2814 },\
    { "io_service_close", 2816 },\
    { "io_connect_get_service", 2817 },\
    { "io_connect_set_notification_port", 2818 },\
    { "io_connect_map_memory", 2819 },\
    { "io_connect_add_client", 2820 },\
    { "io_connect_set_properties", 2821 },\
    { "io_connect_method_scalarI_scalarO", 2822 },\
    { "io_connect_method_scalarI_structureO", 2823 },\
    { "io_connect_method_scalarI_structureI", 2824 },\
    { "io_connect_method_structureI_structureO", 2825 },\
    { "io_registry_entry_get_path", 2826 },\
    { "io_registry_get_root_entry", 2827 },\
    { "io_registry_entry_set_properties", 2828 },\
    { "io_registry_entry_in_plane", 2829 },\
    { "io_object_get_retain_count", 2830 },\
    { "io_service_get_busy_state", 2831 },\
    { "io_service_wait_quiet", 2832 },\
    { "io_registry_entry_create_iterator", 2833 },\
    { "io_iterator_is_valid", 2834 },\
    { "io_catalog_send_data", 2836 },\
    { "io_catalog_terminate", 2837 },\
    { "io_catalog_get_data", 2838 },\
    { "io_catalog_get_gen_count", 2839 },\
    { "io_catalog_module_loaded", 2840 },\
    { "io_catalog_reset", 2841 },\
    { "io_service_request_probe", 2842 },\
    { "io_registry_entry_get_name_in_plane", 2843 },\
    { "io_service_match_property_table", 2844 },\
    { "io_async_method_scalarI_scalarO", 2845 },\
    { "io_async_method_scalarI_structureO", 2846 },\
    { "io_async_method_scalarI_structureI", 2847 },\
    { "io_async_method_structureI_structureO", 2848 },\
    { "io_service_add_notification", 2849 },\
    { "io_service_add_interest_notification", 2850 },\
    { "io_service_acknowledge_notification", 2851 },\
    { "io_connect_get_notification_semaphore", 2852 },\
    { "io_connect_unmap_memory", 2853 },\
    { "io_registry_entry_get_location_in_plane", 2854 },\
    { "io_registry_entry_get_property_recursively", 2855 },\
    { "io_service_get_state", 2856 },\
    { "io_service_get_matching_services_ool", 2857 },\
    { "io_service_match_property_table_ool", 2858 },\
    { "io_service_add_notification_ool", 2859 },\
    { "io_object_get_superclass", 2860 },\
    { "io_object_get_bundle_identifier", 2861 },\
    { "io_service_open_extended", 2862 },\
    { "io_connect_map_memory_into_task", 2863 },\
    { "io_connect_unmap_memory_from_task", 2864 },\
    { "io_connect_method", 2865 },\
    { "io_connect_async_method", 2866 },\
    { "io_connect_set_notification_port_64", 2867 },\
    { "io_service_add_notification_64", 2868 },\
    { "io_service_add_interest_notification_64", 2869 },\
    { "io_service_add_notification_ool_64", 2870 },\
    { "io_registry_entry_get_registry_entry_id", 2871 },\
    { "io_connect_method_var_output", 2872 },\
    { "io_service_get_matching_service", 2873 },\
    { "io_service_get_matching_service_ool", 2874 },\
    { "io_service_get_authorization_id", 2875 },\
    { "io_service_set_authorization_id", 2876 },\
    { "io_server_version", 2877 },\
    { "io_registry_entry_get_properties_bin", 2878 },\
    { "io_registry_entry_get_property_bin", 2879 },\
    { "io_service_get_matching_service_bin", 2880 },\
    { "io_service_get_matching_services_bin", 2881 },\
    { "io_service_match_property_table_bin", 2882 },\
    { "io_service_add_notification_bin", 2883 },\
    { "io_service_add_notification_bin_64", 2884 },\
    { "io_registry_entry_get_path_ool", 2885 },\
    { "io_registry_entry_from_path_ool", 2886 },\
    { "io_device_tree_entry_exists_with_name", 2887 },\
    { "io_registry_entry_get_properties_bin_buf", 2888 },\
    { "io_registry_entry_get_property_bin_buf", 2889 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _iokit_server_ */
