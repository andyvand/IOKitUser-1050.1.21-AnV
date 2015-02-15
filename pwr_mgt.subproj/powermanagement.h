#ifndef	_powermanagement_user_
#define	_powermanagement_user_

/* Module powermanagement */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN VOUCHER CODE */

#ifndef KERNEL
#if defined(__has_include)
#if __has_include(<mach/mig_voucher_support.h>)
#ifndef USING_VOUCHERS
#define USING_VOUCHERS
#endif
#ifndef __VOUCHER_FORWARD_TYPE_DECLS__
#define __VOUCHER_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern boolean_t voucher_mach_msg_set(mach_msg_header_t *msg) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif // __VOUCHER_FORWARD_TYPE_DECLS__
#endif // __has_include(<mach/mach_voucher_types.h>)
#endif // __has_include
#endif // !KERNEL
	
/* END VOUCHER CODE */


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

#ifndef	powermanagement_MSG_COUNT
#define	powermanagement_MSG_COUNT	38
#endif	/* powermanagement_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include <IOKit/pwr_mgt/powermanagement_mig.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine io_pm_get_value_int */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_get_value_int
(
	mach_port_t server,
	int selector,
	int *value
);

/* Routine io_pm_set_value_int */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_set_value_int
(
	mach_port_t server,
	int selector,
	int value,
	int *return_val
);

/* Routine io_pm_force_active_settings */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_force_active_settings
(
	mach_port_t server,
	vm_offset_t profiles,
	mach_msg_type_number_t profilesCnt,
	int *return_val
);

/* Routine io_pm_set_active_profile */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_set_active_profile
(
	mach_port_t server,
	vm_offset_t profiles,
	mach_msg_type_number_t profilesCnt,
	int *return_val
);

/* Routine io_pm_schedule_power_event */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_schedule_power_event
(
	mach_port_t server,
	vm_offset_t package,
	mach_msg_type_number_t packageCnt,
	int action,
	int *return_val
);

/* Routine io_pm_schedule_repeat_event */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_schedule_repeat_event
(
	mach_port_t server,
	vm_offset_t package,
	mach_msg_type_number_t packageCnt,
	int action,
	int *return_val
);

/* Routine io_pm_cancel_repeat_events */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_cancel_repeat_events
(
	mach_port_t server,
	int *return_val
);

/* Routine io_pm_last_wake_time */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_last_wake_time
(
	mach_port_t server,
	vm_offset_t *wakeData,
	mach_msg_type_number_t *wakeDataCnt,
	vm_offset_t *deltaData,
	mach_msg_type_number_t *deltaDataCnt,
	int *return_val
);

/* Routine io_pm_assertion_create */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_assertion_create
(
	mach_port_t server,
	vm_offset_t props,
	mach_msg_type_number_t propsCnt,
	int *assertion_id,
	int *disableAppSleep,
	int *return_code
);

/* Routine io_pm_assertion_set_properties */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_assertion_set_properties
(
	mach_port_t server,
	int assertion_id,
	vm_offset_t props,
	mach_msg_type_number_t propsCnt,
	int *disableAppSleep,
	int *enableAppSleep,
	int *return_code
);

/* Routine io_pm_assertion_retain_release */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_assertion_retain_release
(
	mach_port_t server,
	int assertion_id,
	int action,
	int *disableAppSleep,
	int *enableAppSleep,
	int *return_code
);

/* Routine io_pm_assertion_copy_details */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_assertion_copy_details
(
	mach_port_t server,
	int assertion_id,
	int whichData,
	vm_offset_t *assertions,
	mach_msg_type_number_t *assertionsCnt,
	int *return_val
);

/* Routine io_pm_declare_system_active */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_declare_system_active
(
	mach_port_t server,
	int *state,
	vm_offset_t props,
	mach_msg_type_number_t propsCnt,
	int *assertion_id,
	int *return_code
);

/* Routine io_pm_declare_user_active */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_declare_user_active
(
	mach_port_t server,
	int user_type,
	vm_offset_t props,
	mach_msg_type_number_t propsCnt,
	int *assertion_id,
	int *disableAppSleep,
	int *return_code
);

/* Routine io_pm_declare_network_client_active */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_declare_network_client_active
(
	mach_port_t server,
	vm_offset_t props,
	mach_msg_type_number_t propsCnt,
	int *assertion_id,
	int *disableAppSleep,
	int *return_code
);

/* Routine io_pm_get_uuid */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_get_uuid
(
	mach_port_t server,
	int selector,
	string_t out_uuid,
	int *return_val
);

/* Routine io_pm_connection_create */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_connection_create
(
	mach_port_t server,
	mach_port_t task_in,
	string_t name,
	int interests,
	uint32_t *connection_id,
	int *return_code
);

/* Routine io_pm_connection_schedule_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_connection_schedule_notification
(
	mach_port_t server,
	uint32_t connection_id,
	mach_port_t notify_port,
	int disable,
	int *return_code
);

/* Routine io_pm_connection_release */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_connection_release
(
	mach_port_t server,
	uint32_t connection_id,
	int *return_code
);

/* Routine io_pm_connection_acknowledge_event */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_connection_acknowledge_event
(
	mach_port_t server,
	uint32_t connection_id,
	int messageToken,
	vm_offset_t options,
	mach_msg_type_number_t optionsCnt,
	int *return_code
);

/* Routine io_pm_connection_copy_status */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_connection_copy_status
(
	mach_port_t server,
	int status_index,
	vm_offset_t *status_data,
	mach_msg_type_number_t *status_dataCnt,
	int *return_val
);

/* Routine io_ps_new_pspowersource */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_ps_new_pspowersource
(
	mach_port_t server,
	int *psid,
	int *return_code
);

/* Routine io_ps_update_pspowersource */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_ps_update_pspowersource
(
	mach_port_t server,
	int psid,
	vm_offset_t psdetails,
	mach_msg_type_number_t psdetailsCnt,
	int *return_code
);

/* Routine io_ps_release_pspowersource */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_ps_release_pspowersource
(
	mach_port_t server,
	int psid
);

/* Routine io_ps_copy_powersources_info */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_ps_copy_powersources_info
(
	mach_port_t server,
	vm_offset_t *powersources,
	mach_msg_type_number_t *powersourcesCnt,
	int *return_code
);

/* Routine io_ps_copy_chargelog */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_ps_copy_chargelog
(
	mach_port_t server,
	double time,
	vm_offset_t *log,
	mach_msg_type_number_t *logCnt,
	int *return_code
);

/* Routine io_pm_hid_event_report_activity */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_hid_event_report_activity
(
	mach_port_t server,
	int _action,
	int *allow
);

/* Routine io_pm_hid_event_copy_history */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_hid_event_copy_history
(
	mach_port_t server,
	vm_offset_t *eventArray,
	mach_msg_type_number_t *eventArrayCnt,
	int *return_val
);

/* Routine io_pm_set_debug_flags */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_set_debug_flags
(
	mach_port_t server,
	uint32_t newFlags,
	uint32_t setMode,
	uint32_t *oldFlags,
	int *return_val
);

/* Routine io_pm_set_bt_wake_interval */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_set_bt_wake_interval
(
	mach_port_t server,
	uint32_t newInterval,
	uint32_t *oldInterval,
	int *return_val
);

/* Routine io_pm_set_dw_linger_interval */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_set_dw_linger_interval
(
	mach_port_t server,
	uint32_t newInterval,
	uint32_t *oldInterval,
	int *return_val
);

/* Routine io_pm_change_sa_assertion_behavior */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_change_sa_assertion_behavior
(
	mach_port_t server,
	uint32_t newFlags,
	uint32_t *oldFlags,
	int *return_val
);

/* Routine io_pm_set_sleepservice_wake_time_cap */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_set_sleepservice_wake_time_cap
(
	mach_port_t server,
	int cap_time,
	int *return_val
);

/* Routine io_pm_get_capability_bits */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_get_capability_bits
(
	mach_port_t server,
	uint32_t *capBits,
	int *return_val
);

/* Routine io_pm_ctl_assertion_type */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_ctl_assertion_type
(
	mach_port_t server,
	string_t assertion,
	int action,
	int *return_code
);

/* Routine io_pm_assertion_notify */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_assertion_notify
(
	mach_port_t server,
	string_t name,
	int req_type,
	int *return_code
);

/* Routine io_pm_assertion_activity_log */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_assertion_activity_log
(
	mach_port_t server,
	vm_offset_t *log,
	mach_msg_type_number_t *logCnt,
	uint32_t *entryCnt,
	uint32_t *overflow,
	int *return_code
);

/* Routine io_pm_assertion_activity_aggregate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t io_pm_assertion_activity_aggregate
(
	mach_port_t server,
	vm_offset_t *statsData,
	mach_msg_type_number_t *statsDataCnt,
	int *return_code
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request__powermanagement_subsystem__defined
#define __Request__powermanagement_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int selector;
	} __Request__io_pm_get_value_int_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int selector;
		int value;
	} __Request__io_pm_set_value_int_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t profiles;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t profilesCnt;
	} __Request__io_pm_force_active_settings_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t profiles;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t profilesCnt;
	} __Request__io_pm_set_active_profile_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t package;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t packageCnt;
		int action;
	} __Request__io_pm_schedule_power_event_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t package;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t packageCnt;
		int action;
	} __Request__io_pm_schedule_repeat_event_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_pm_cancel_repeat_events_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_pm_last_wake_time_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t props;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propsCnt;
	} __Request__io_pm_assertion_create_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t props;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int assertion_id;
		mach_msg_type_number_t propsCnt;
	} __Request__io_pm_assertion_set_properties_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int assertion_id;
		int action;
	} __Request__io_pm_assertion_retain_release_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int assertion_id;
		int whichData;
	} __Request__io_pm_assertion_copy_details_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t props;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int state;
		mach_msg_type_number_t propsCnt;
		int assertion_id;
	} __Request__io_pm_declare_system_active_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t props;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int user_type;
		mach_msg_type_number_t propsCnt;
		int assertion_id;
	} __Request__io_pm_declare_user_active_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t props;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propsCnt;
		int assertion_id;
	} __Request__io_pm_declare_network_client_active_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int selector;
	} __Request__io_pm_get_uuid_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t task_in;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[1024];
		int interests;
	} __Request__io_pm_connection_create_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notify_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t connection_id;
		int disable;
	} __Request__io_pm_connection_schedule_notification_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t connection_id;
	} __Request__io_pm_connection_release_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t options;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t connection_id;
		int messageToken;
		mach_msg_type_number_t optionsCnt;
	} __Request__io_pm_connection_acknowledge_event_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int status_index;
	} __Request__io_pm_connection_copy_status_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_ps_new_pspowersource_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t psdetails;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int psid;
		mach_msg_type_number_t psdetailsCnt;
	} __Request__io_ps_update_pspowersource_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int psid;
	} __Request__io_ps_release_pspowersource_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_ps_copy_powersources_info_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		double time;
	} __Request__io_ps_copy_chargelog_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int _action;
	} __Request__io_pm_hid_event_report_activity_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_pm_hid_event_copy_history_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t newFlags;
		uint32_t setMode;
	} __Request__io_pm_set_debug_flags_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t newInterval;
	} __Request__io_pm_set_bt_wake_interval_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t newInterval;
	} __Request__io_pm_set_dw_linger_interval_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t newFlags;
	} __Request__io_pm_change_sa_assertion_behavior_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int cap_time;
	} __Request__io_pm_set_sleepservice_wake_time_cap_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_pm_get_capability_bits_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t assertionOffset; /* MiG doesn't use it */
		mach_msg_type_number_t assertionCnt;
		char assertion[1024];
		int action;
	} __Request__io_pm_ctl_assertion_type_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[1024];
		int req_type;
	} __Request__io_pm_assertion_notify_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t entryCnt;
	} __Request__io_pm_assertion_activity_log_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__io_pm_assertion_activity_aggregate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__powermanagement_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__powermanagement_subsystem__defined
#define __RequestUnion__powermanagement_subsystem__defined
union __RequestUnion__powermanagement_subsystem {
	__Request__io_pm_get_value_int_t Request_io_pm_get_value_int;
	__Request__io_pm_set_value_int_t Request_io_pm_set_value_int;
	__Request__io_pm_force_active_settings_t Request_io_pm_force_active_settings;
	__Request__io_pm_set_active_profile_t Request_io_pm_set_active_profile;
	__Request__io_pm_schedule_power_event_t Request_io_pm_schedule_power_event;
	__Request__io_pm_schedule_repeat_event_t Request_io_pm_schedule_repeat_event;
	__Request__io_pm_cancel_repeat_events_t Request_io_pm_cancel_repeat_events;
	__Request__io_pm_last_wake_time_t Request_io_pm_last_wake_time;
	__Request__io_pm_assertion_create_t Request_io_pm_assertion_create;
	__Request__io_pm_assertion_set_properties_t Request_io_pm_assertion_set_properties;
	__Request__io_pm_assertion_retain_release_t Request_io_pm_assertion_retain_release;
	__Request__io_pm_assertion_copy_details_t Request_io_pm_assertion_copy_details;
	__Request__io_pm_declare_system_active_t Request_io_pm_declare_system_active;
	__Request__io_pm_declare_user_active_t Request_io_pm_declare_user_active;
	__Request__io_pm_declare_network_client_active_t Request_io_pm_declare_network_client_active;
	__Request__io_pm_get_uuid_t Request_io_pm_get_uuid;
	__Request__io_pm_connection_create_t Request_io_pm_connection_create;
	__Request__io_pm_connection_schedule_notification_t Request_io_pm_connection_schedule_notification;
	__Request__io_pm_connection_release_t Request_io_pm_connection_release;
	__Request__io_pm_connection_acknowledge_event_t Request_io_pm_connection_acknowledge_event;
	__Request__io_pm_connection_copy_status_t Request_io_pm_connection_copy_status;
	__Request__io_ps_new_pspowersource_t Request_io_ps_new_pspowersource;
	__Request__io_ps_update_pspowersource_t Request_io_ps_update_pspowersource;
	__Request__io_ps_release_pspowersource_t Request_io_ps_release_pspowersource;
	__Request__io_ps_copy_powersources_info_t Request_io_ps_copy_powersources_info;
	__Request__io_ps_copy_chargelog_t Request_io_ps_copy_chargelog;
	__Request__io_pm_hid_event_report_activity_t Request_io_pm_hid_event_report_activity;
	__Request__io_pm_hid_event_copy_history_t Request_io_pm_hid_event_copy_history;
	__Request__io_pm_set_debug_flags_t Request_io_pm_set_debug_flags;
	__Request__io_pm_set_bt_wake_interval_t Request_io_pm_set_bt_wake_interval;
	__Request__io_pm_set_dw_linger_interval_t Request_io_pm_set_dw_linger_interval;
	__Request__io_pm_change_sa_assertion_behavior_t Request_io_pm_change_sa_assertion_behavior;
	__Request__io_pm_set_sleepservice_wake_time_cap_t Request_io_pm_set_sleepservice_wake_time_cap;
	__Request__io_pm_get_capability_bits_t Request_io_pm_get_capability_bits;
	__Request__io_pm_ctl_assertion_type_t Request_io_pm_ctl_assertion_type;
	__Request__io_pm_assertion_notify_t Request_io_pm_assertion_notify;
	__Request__io_pm_assertion_activity_log_t Request_io_pm_assertion_activity_log;
	__Request__io_pm_assertion_activity_aggregate_t Request_io_pm_assertion_activity_aggregate;
};
#endif /* !__RequestUnion__powermanagement_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__powermanagement_subsystem__defined
#define __Reply__powermanagement_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int value;
	} __Reply__io_pm_get_value_int_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_val;
	} __Reply__io_pm_set_value_int_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_val;
	} __Reply__io_pm_force_active_settings_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_val;
	} __Reply__io_pm_set_active_profile_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_val;
	} __Reply__io_pm_schedule_power_event_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_val;
	} __Reply__io_pm_schedule_repeat_event_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_val;
	} __Reply__io_pm_cancel_repeat_events_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t wakeData;
		mach_msg_ool_descriptor_t deltaData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t wakeDataCnt;
		mach_msg_type_number_t deltaDataCnt;
		int return_val;
	} __Reply__io_pm_last_wake_time_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int assertion_id;
		int disableAppSleep;
		int return_code;
	} __Reply__io_pm_assertion_create_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int disableAppSleep;
		int enableAppSleep;
		int return_code;
	} __Reply__io_pm_assertion_set_properties_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int disableAppSleep;
		int enableAppSleep;
		int return_code;
	} __Reply__io_pm_assertion_retain_release_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t assertions;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t assertionsCnt;
		int return_val;
	} __Reply__io_pm_assertion_copy_details_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int state;
		int assertion_id;
		int return_code;
	} __Reply__io_pm_declare_system_active_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int assertion_id;
		int disableAppSleep;
		int return_code;
	} __Reply__io_pm_declare_user_active_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int assertion_id;
		int disableAppSleep;
		int return_code;
	} __Reply__io_pm_declare_network_client_active_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t out_uuidOffset; /* MiG doesn't use it */
		mach_msg_type_number_t out_uuidCnt;
		char out_uuid[1024];
		int return_val;
	} __Reply__io_pm_get_uuid_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t connection_id;
		int return_code;
	} __Reply__io_pm_connection_create_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_code;
	} __Reply__io_pm_connection_schedule_notification_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_code;
	} __Reply__io_pm_connection_release_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_code;
	} __Reply__io_pm_connection_acknowledge_event_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t status_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t status_dataCnt;
		int return_val;
	} __Reply__io_pm_connection_copy_status_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int psid;
		int return_code;
	} __Reply__io_ps_new_pspowersource_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_code;
	} __Reply__io_ps_update_pspowersource_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__io_ps_release_pspowersource_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t powersources;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t powersourcesCnt;
		int return_code;
	} __Reply__io_ps_copy_powersources_info_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t log;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t logCnt;
		int return_code;
	} __Reply__io_ps_copy_chargelog_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int allow;
	} __Reply__io_pm_hid_event_report_activity_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t eventArray;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t eventArrayCnt;
		int return_val;
	} __Reply__io_pm_hid_event_copy_history_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t oldFlags;
		int return_val;
	} __Reply__io_pm_set_debug_flags_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t oldInterval;
		int return_val;
	} __Reply__io_pm_set_bt_wake_interval_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t oldInterval;
		int return_val;
	} __Reply__io_pm_set_dw_linger_interval_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t oldFlags;
		int return_val;
	} __Reply__io_pm_change_sa_assertion_behavior_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_val;
	} __Reply__io_pm_set_sleepservice_wake_time_cap_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t capBits;
		int return_val;
	} __Reply__io_pm_get_capability_bits_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_code;
	} __Reply__io_pm_ctl_assertion_type_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int return_code;
	} __Reply__io_pm_assertion_notify_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t log;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t logCnt;
		uint32_t entryCnt;
		uint32_t overflow;
		int return_code;
	} __Reply__io_pm_assertion_activity_log_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t statsData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t statsDataCnt;
		int return_code;
	} __Reply__io_pm_assertion_activity_aggregate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__powermanagement_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__powermanagement_subsystem__defined
#define __ReplyUnion__powermanagement_subsystem__defined
union __ReplyUnion__powermanagement_subsystem {
	__Reply__io_pm_get_value_int_t Reply_io_pm_get_value_int;
	__Reply__io_pm_set_value_int_t Reply_io_pm_set_value_int;
	__Reply__io_pm_force_active_settings_t Reply_io_pm_force_active_settings;
	__Reply__io_pm_set_active_profile_t Reply_io_pm_set_active_profile;
	__Reply__io_pm_schedule_power_event_t Reply_io_pm_schedule_power_event;
	__Reply__io_pm_schedule_repeat_event_t Reply_io_pm_schedule_repeat_event;
	__Reply__io_pm_cancel_repeat_events_t Reply_io_pm_cancel_repeat_events;
	__Reply__io_pm_last_wake_time_t Reply_io_pm_last_wake_time;
	__Reply__io_pm_assertion_create_t Reply_io_pm_assertion_create;
	__Reply__io_pm_assertion_set_properties_t Reply_io_pm_assertion_set_properties;
	__Reply__io_pm_assertion_retain_release_t Reply_io_pm_assertion_retain_release;
	__Reply__io_pm_assertion_copy_details_t Reply_io_pm_assertion_copy_details;
	__Reply__io_pm_declare_system_active_t Reply_io_pm_declare_system_active;
	__Reply__io_pm_declare_user_active_t Reply_io_pm_declare_user_active;
	__Reply__io_pm_declare_network_client_active_t Reply_io_pm_declare_network_client_active;
	__Reply__io_pm_get_uuid_t Reply_io_pm_get_uuid;
	__Reply__io_pm_connection_create_t Reply_io_pm_connection_create;
	__Reply__io_pm_connection_schedule_notification_t Reply_io_pm_connection_schedule_notification;
	__Reply__io_pm_connection_release_t Reply_io_pm_connection_release;
	__Reply__io_pm_connection_acknowledge_event_t Reply_io_pm_connection_acknowledge_event;
	__Reply__io_pm_connection_copy_status_t Reply_io_pm_connection_copy_status;
	__Reply__io_ps_new_pspowersource_t Reply_io_ps_new_pspowersource;
	__Reply__io_ps_update_pspowersource_t Reply_io_ps_update_pspowersource;
	__Reply__io_ps_release_pspowersource_t Reply_io_ps_release_pspowersource;
	__Reply__io_ps_copy_powersources_info_t Reply_io_ps_copy_powersources_info;
	__Reply__io_ps_copy_chargelog_t Reply_io_ps_copy_chargelog;
	__Reply__io_pm_hid_event_report_activity_t Reply_io_pm_hid_event_report_activity;
	__Reply__io_pm_hid_event_copy_history_t Reply_io_pm_hid_event_copy_history;
	__Reply__io_pm_set_debug_flags_t Reply_io_pm_set_debug_flags;
	__Reply__io_pm_set_bt_wake_interval_t Reply_io_pm_set_bt_wake_interval;
	__Reply__io_pm_set_dw_linger_interval_t Reply_io_pm_set_dw_linger_interval;
	__Reply__io_pm_change_sa_assertion_behavior_t Reply_io_pm_change_sa_assertion_behavior;
	__Reply__io_pm_set_sleepservice_wake_time_cap_t Reply_io_pm_set_sleepservice_wake_time_cap;
	__Reply__io_pm_get_capability_bits_t Reply_io_pm_get_capability_bits;
	__Reply__io_pm_ctl_assertion_type_t Reply_io_pm_ctl_assertion_type;
	__Reply__io_pm_assertion_notify_t Reply_io_pm_assertion_notify;
	__Reply__io_pm_assertion_activity_log_t Reply_io_pm_assertion_activity_log;
	__Reply__io_pm_assertion_activity_aggregate_t Reply_io_pm_assertion_activity_aggregate;
};
#endif /* !__RequestUnion__powermanagement_subsystem__defined */

#ifndef subsystem_to_name_map_powermanagement
#define subsystem_to_name_map_powermanagement \
    { "io_pm_get_value_int", 73000 },\
    { "io_pm_set_value_int", 73001 },\
    { "io_pm_force_active_settings", 73002 },\
    { "io_pm_set_active_profile", 73003 },\
    { "io_pm_schedule_power_event", 73004 },\
    { "io_pm_schedule_repeat_event", 73005 },\
    { "io_pm_cancel_repeat_events", 73006 },\
    { "io_pm_last_wake_time", 73007 },\
    { "io_pm_assertion_create", 73008 },\
    { "io_pm_assertion_set_properties", 73009 },\
    { "io_pm_assertion_retain_release", 73010 },\
    { "io_pm_assertion_copy_details", 73011 },\
    { "io_pm_declare_system_active", 73012 },\
    { "io_pm_declare_user_active", 73013 },\
    { "io_pm_declare_network_client_active", 73014 },\
    { "io_pm_get_uuid", 73015 },\
    { "io_pm_connection_create", 73016 },\
    { "io_pm_connection_schedule_notification", 73017 },\
    { "io_pm_connection_release", 73018 },\
    { "io_pm_connection_acknowledge_event", 73019 },\
    { "io_pm_connection_copy_status", 73020 },\
    { "io_ps_new_pspowersource", 73021 },\
    { "io_ps_update_pspowersource", 73022 },\
    { "io_ps_release_pspowersource", 73023 },\
    { "io_ps_copy_powersources_info", 73024 },\
    { "io_ps_copy_chargelog", 73025 },\
    { "io_pm_hid_event_report_activity", 73026 },\
    { "io_pm_hid_event_copy_history", 73027 },\
    { "io_pm_set_debug_flags", 73028 },\
    { "io_pm_set_bt_wake_interval", 73029 },\
    { "io_pm_set_dw_linger_interval", 73030 },\
    { "io_pm_change_sa_assertion_behavior", 73031 },\
    { "io_pm_set_sleepservice_wake_time_cap", 73032 },\
    { "io_pm_get_capability_bits", 73033 },\
    { "io_pm_ctl_assertion_type", 73034 },\
    { "io_pm_assertion_notify", 73035 },\
    { "io_pm_assertion_activity_log", 73036 },\
    { "io_pm_assertion_activity_aggregate", 73037 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _powermanagement_user_ */
