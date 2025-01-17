/*
 * IDENTIFICATION:
 * stub generated Mon Mar 22 18:02:35 2021
 * with a MiG generated by bootstrap_cmds-117
 * OPTIONS: 
 *	KernelUser
 */
#define	__MIG_check__Reply__atm_notification_subsystem__ 1

#include "atm_notification.h"

/* TODO: #include <mach/mach.h> */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
extern void mach_msg_destroy(mach_msg_header_t *);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif

#ifndef	__MachMsgErrorWithTimeout
#define	__MachMsgErrorWithTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	case MACH_SEND_TIMED_OUT: \
	case MACH_RCV_TIMED_OUT: \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithTimeout */

#ifndef	__MachMsgErrorWithoutTimeout
#define	__MachMsgErrorWithoutTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithoutTimeout */

#ifndef	__DeclareSendRpc
#define	__DeclareSendRpc(_NUM_, _NAME_)
#endif	/* __DeclareSendRpc */

#ifndef	__BeforeSendRpc
#define	__BeforeSendRpc(_NUM_, _NAME_)
#endif	/* __BeforeSendRpc */

#ifndef	__AfterSendRpc
#define	__AfterSendRpc(_NUM_, _NAME_)
#endif	/* __AfterSendRpc */

#ifndef	__DeclareSendSimple
#define	__DeclareSendSimple(_NUM_, _NAME_)
#endif	/* __DeclareSendSimple */

#ifndef	__BeforeSendSimple
#define	__BeforeSendSimple(_NUM_, _NAME_)
#endif	/* __BeforeSendSimple */

#ifndef	__AfterSendSimple
#define	__AfterSendSimple(_NUM_, _NAME_)
#endif	/* __AfterSendSimple */

#define msgh_request_port	msgh_remote_port
#define msgh_reply_port		msgh_local_port



/* SimpleRoutine atm_collect_trace_info */
mig_external kern_return_t atm_collect_trace_info
(
	mach_port_t atm_port,
	atm_aid_t activity_trace_id,
	mach_atm_subaid_t sub_activity_id,
	uint32_t flags,
	atm_memory_descriptor_array_t memory_buffers,
	mach_msg_type_number_t memory_buffersCnt,
	atm_memory_size_array_t buffer_sizes,
	mach_msg_type_number_t buffer_sizesCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t memory_buffers[512];
		/* end of the kernel processed data */
		NDR_record_t NDR;
		atm_aid_t activity_trace_id;
		mach_atm_subaid_t sub_activity_id;
		uint32_t flags;
		mach_msg_type_number_t memory_buffersCnt;
		mach_msg_type_number_t buffer_sizesCnt;
		uint64_t buffer_sizes[512];
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union atm_collect_trace_infoMessU {
		Request In;
	} *Mess = (union atm_collect_trace_infoMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__atm_collect_trace_info_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__atm_collect_trace_info_t__defined */

	__DeclareSendSimple(11500, "atm_collect_trace_info")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t memory_buffersTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 512;
	{
	    mach_msg_port_descriptor_t	*ptr;
	    int	i;

	    ptr = &InP->memory_buffers[0];
	    if (memory_buffersCnt > 512)
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return MIG_ARRAY_TOO_LARGE; }
	    for (i = 0; i < memory_buffersCnt; ptr++, i++) {
#if	UseStaticTemplates
		*ptr = memory_buffersTemplate;
		ptr->name = memory_buffers[i];
#else	/* UseStaticTemplates */
		ptr->name = memory_buffers[i];
		ptr->disposition = 19;
		ptr->type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */
	    }
	    for (i = memory_buffersCnt; i < 512; ptr++, i++) {
#if	UseStaticTemplates
		*ptr = memory_buffersTemplate;
#else	/* UseStaticTemplates */
		ptr->name = MACH_PORT_NULL;
		ptr->type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */
	    }
	}

	InP->NDR = NDR_record;

	InP->activity_trace_id = activity_trace_id;

	InP->sub_activity_id = sub_activity_id;

	InP->flags = flags;

	InP->memory_buffersCnt = memory_buffersCnt;

	if (buffer_sizesCnt > 512) {
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->buffer_sizes, (const char *) buffer_sizes, 8 * buffer_sizesCnt);

	InP->buffer_sizesCnt = buffer_sizesCnt;

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4096) + ((8 * buffer_sizesCnt));
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(17, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = atm_port;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 11500;
	InP->Head.msgh_reserved = 0;

	__BeforeSendSimple(11500, "atm_collect_trace_info")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, msgh_size);
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(11500, "atm_collect_trace_info")
	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return msg_result; }
}

/* SimpleRoutine atm_inspect_process_buffer */
mig_external kern_return_t atm_inspect_process_buffer
(
	mach_port_t atm_port,
	uint32_t proc_pid,
	uint64_t proc_uniqueid,
	uint64_t buffer_size,
	mach_port_t trace_buffer
)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t trace_buffer;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t proc_pid;
		uint64_t proc_uniqueid;
		uint64_t buffer_size;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
	} Mess;

	Request *InP = &Mess.In;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__atm_inspect_process_buffer_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__atm_inspect_process_buffer_t__defined */

	__DeclareSendSimple(11501, "atm_inspect_process_buffer")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t trace_bufferTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->trace_buffer = trace_bufferTemplate;
	InP->trace_buffer.name = trace_buffer;
#else	/* UseStaticTemplates */
	InP->trace_buffer.name = trace_buffer;
	InP->trace_buffer.disposition = 19;
	InP->trace_buffer.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->proc_pid = proc_pid;

	InP->proc_uniqueid = proc_uniqueid;

	InP->buffer_size = buffer_size;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(17, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = atm_port;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 11501;
	InP->Head.msgh_reserved = 0;

	__BeforeSendSimple(11501, "atm_inspect_process_buffer")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(11501, "atm_inspect_process_buffer")
	return msg_result;
}
