/* _binding.h
 * This file is generated. Do not modify its contents.
 */

#ifndef DRIVER_MNT_CANOPEN_BINDING_H
#define DRIVER_MNT_CANOPEN_BINDING_H

/* -- Type casting -- */
#define driver_mnt_canopen_Access(o) ((driver_mnt_canopen_Access*)corto_assert_type((corto_type)driver_mnt_canopen_Access_o, o))
#define driver_mnt_canopen_Category(o) ((driver_mnt_canopen_Category*)corto_assert_type((corto_type)driver_mnt_canopen_Category_o, o))
#define driver_mnt_canopen_DataArr(o) ((corto_uint8*)corto_assert_type((corto_type)driver_mnt_canopen_DataArr_o, o))
#define driver_mnt_canopen_DataType(o) ((driver_mnt_canopen_DataType*)corto_assert_type((corto_type)driver_mnt_canopen_DataType_o, o))
#define driver_mnt_canopen_IndexMap(o) ((driver_mnt_canopen_IndexMap*)corto_assert_type((corto_type)driver_mnt_canopen_IndexMap_o, o))
#define driver_mnt_canopen_Dictionary(o) ((driver_mnt_canopen_Dictionary)corto_assert_type((corto_type)driver_mnt_canopen_Dictionary_o, o))
#define driver_mnt_canopen_Driver(o) ((driver_mnt_canopen_Driver*)corto_assert_type((corto_type)driver_mnt_canopen_Driver_o, o))
#define driver_mnt_canopen_ObjectCode(o) ((driver_mnt_canopen_ObjectCode*)corto_assert_type((corto_type)driver_mnt_canopen_ObjectCode_o, o))
#define driver_mnt_canopen_Meta(o) ((driver_mnt_canopen_Meta)corto_assert_type((corto_type)driver_mnt_canopen_Meta_o, o))
#define driver_mnt_canopen_Entry(o) ((driver_mnt_canopen_Entry)corto_assert_type((corto_type)driver_mnt_canopen_Entry_o, o))
#define driver_mnt_canopen_SocketCAN(o) ((driver_mnt_canopen_SocketCAN)corto_assert_type((corto_type)driver_mnt_canopen_SocketCAN_o, o))
#define driver_mnt_canopen_Heartbeat(o) ((driver_mnt_canopen_Heartbeat)corto_assert_type((corto_type)driver_mnt_canopen_Heartbeat_o, o))
#define driver_mnt_canopen_Timing(o) ((driver_mnt_canopen_Timing*)corto_assert_type((corto_type)driver_mnt_canopen_Timing_o, o))
#define driver_mnt_canopen_Mount(o) ((driver_mnt_canopen_Mount)corto_assert_type((corto_type)driver_mnt_canopen_Mount_o, o))
#define driver_mnt_canopen_NMTState(o) ((driver_mnt_canopen_NMTState*)corto_assert_type((corto_type)driver_mnt_canopen_NMTState_o, o))
#define driver_mnt_canopen_nmt(o) ((driver_mnt_canopen_nmt)corto_assert_type((corto_type)driver_mnt_canopen_nmt_o, o))
#define driver_mnt_canopen_TxData(o) ((driver_mnt_canopen_TxData)corto_assert_type((corto_type)driver_mnt_canopen_TxData_o, o))

/* -- Non-expanding typedefs -- */
typedef driver_mnt_canopen_Access _type_driver_mnt_canopen_Access;
typedef driver_mnt_canopen_Category _type_driver_mnt_canopen_Category;
typedef driver_mnt_canopen_DataArr _type_driver_mnt_canopen_DataArr;
typedef driver_mnt_canopen_DataType _type_driver_mnt_canopen_DataType;
#ifndef _type_driver_mnt_canopen_IndexMap_DEFINED
#define _type_driver_mnt_canopen_IndexMap_DEFINED
typedef driver_mnt_canopen_IndexMap _type_driver_mnt_canopen_IndexMap;
#endif
typedef driver_mnt_canopen_Dictionary _type_driver_mnt_canopen_Dictionary;
typedef driver_mnt_canopen_Driver _type_driver_mnt_canopen_Driver;
typedef driver_mnt_canopen_ObjectCode _type_driver_mnt_canopen_ObjectCode;
typedef driver_mnt_canopen_Meta _type_driver_mnt_canopen_Meta;
typedef driver_mnt_canopen_Entry _type_driver_mnt_canopen_Entry;
typedef driver_mnt_canopen_SocketCAN _type_driver_mnt_canopen_SocketCAN;
typedef driver_mnt_canopen_Heartbeat _type_driver_mnt_canopen_Heartbeat;
typedef driver_mnt_canopen_Timing _type_driver_mnt_canopen_Timing;
typedef driver_mnt_canopen_Mount _type_driver_mnt_canopen_Mount;
typedef driver_mnt_canopen_NMTState _type_driver_mnt_canopen_NMTState;
typedef driver_mnt_canopen_nmt _type_driver_mnt_canopen_nmt;
typedef driver_mnt_canopen_TxData _type_driver_mnt_canopen_TxData;

/* -- Argument type casting -- */
#ifndef DRIVER_MNT_CANOPEN_IMPL
#define driver_mnt_canopen_Dictionary_construct(_this) _driver_mnt_canopen_Dictionary_construct(driver_mnt_canopen_Dictionary(_this))
#define driver_mnt_canopen_Dictionary_fill_device(_this) _driver_mnt_canopen_Dictionary_fill_device(driver_mnt_canopen_Dictionary(_this))
#define driver_mnt_canopen_Dictionary_fill_pdo(_this) _driver_mnt_canopen_Dictionary_fill_pdo(driver_mnt_canopen_Dictionary(_this))
#define driver_mnt_canopen_Dictionary_traverse(_this, callback, data) _driver_mnt_canopen_Dictionary_traverse(driver_mnt_canopen_Dictionary(_this), callback, data)
#define driver_mnt_canopen_Dictionary_lookup(_this, index, sub) _driver_mnt_canopen_Dictionary_lookup(driver_mnt_canopen_Dictionary(_this), index, sub)
#define driver_mnt_canopen_Heartbeat_construct(_this) _driver_mnt_canopen_Heartbeat_construct(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_destruct(_this) _driver_mnt_canopen_Heartbeat_destruct(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_is_consumer(_this) _driver_mnt_canopen_Heartbeat_is_consumer(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_is_producer(_this) _driver_mnt_canopen_Heartbeat_is_producer(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_process_consumer(_this) _driver_mnt_canopen_Heartbeat_process_consumer(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_process_producer(_this) _driver_mnt_canopen_Heartbeat_process_producer(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_producer(_this) _driver_mnt_canopen_Heartbeat_producer(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_start(_this) _driver_mnt_canopen_Heartbeat_start(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Heartbeat_stop(_this) _driver_mnt_canopen_Heartbeat_stop(driver_mnt_canopen_Heartbeat(_this))
#define driver_mnt_canopen_Mount_construct(_this) _driver_mnt_canopen_Mount_construct(driver_mnt_canopen_Mount(_this))
#define driver_mnt_canopen_Mount_init_driver(_this) _driver_mnt_canopen_Mount_init_driver(driver_mnt_canopen_Mount(_this))
#define driver_mnt_canopen_nmt_construct(_this) _driver_mnt_canopen_nmt_construct(driver_mnt_canopen_nmt(_this))
#define driver_mnt_canopen_Dictionary_add_entry(_this, map, entry) _driver_mnt_canopen_Dictionary_add_entry(driver_mnt_canopen_Dictionary(_this), map, driver_mnt_canopen_Entry(entry))
#define driver_mnt_canopen_SocketCAN_construct(_this) _driver_mnt_canopen_SocketCAN_construct(driver_mnt_canopen_SocketCAN(_this))
#define driver_mnt_canopen_SocketCAN_receive(_this) _driver_mnt_canopen_SocketCAN_receive(driver_mnt_canopen_SocketCAN(_this))
#define driver_mnt_canopen_TxData_initialize(_this, ident, rtr, dlc) _driver_mnt_canopen_TxData_initialize(driver_mnt_canopen_TxData(_this), ident, rtr, dlc)
#define driver_mnt_canopen_SocketCAN_transmit(_this, data) _driver_mnt_canopen_SocketCAN_transmit(driver_mnt_canopen_SocketCAN(_this), driver_mnt_canopen_TxData(data))
#else
/* Can't use argument type casting macro's within project, as they would
 * substitute headers in implementation files. */
#define driver_mnt_canopen_Dictionary_construct _driver_mnt_canopen_Dictionary_construct
#define driver_mnt_canopen_Dictionary_fill_device _driver_mnt_canopen_Dictionary_fill_device
#define driver_mnt_canopen_Dictionary_fill_pdo _driver_mnt_canopen_Dictionary_fill_pdo
#define driver_mnt_canopen_Dictionary_traverse _driver_mnt_canopen_Dictionary_traverse
#define driver_mnt_canopen_Dictionary_lookup _driver_mnt_canopen_Dictionary_lookup
#define driver_mnt_canopen_Heartbeat_construct _driver_mnt_canopen_Heartbeat_construct
#define driver_mnt_canopen_Heartbeat_destruct _driver_mnt_canopen_Heartbeat_destruct
#define driver_mnt_canopen_Heartbeat_is_consumer _driver_mnt_canopen_Heartbeat_is_consumer
#define driver_mnt_canopen_Heartbeat_is_producer _driver_mnt_canopen_Heartbeat_is_producer
#define driver_mnt_canopen_Heartbeat_process_consumer _driver_mnt_canopen_Heartbeat_process_consumer
#define driver_mnt_canopen_Heartbeat_process_producer _driver_mnt_canopen_Heartbeat_process_producer
#define driver_mnt_canopen_Heartbeat_producer _driver_mnt_canopen_Heartbeat_producer
#define driver_mnt_canopen_Heartbeat_start _driver_mnt_canopen_Heartbeat_start
#define driver_mnt_canopen_Heartbeat_stop _driver_mnt_canopen_Heartbeat_stop
#define driver_mnt_canopen_Mount_construct _driver_mnt_canopen_Mount_construct
#define driver_mnt_canopen_Mount_init_driver _driver_mnt_canopen_Mount_init_driver
#define driver_mnt_canopen_nmt_construct _driver_mnt_canopen_nmt_construct
#define driver_mnt_canopen_Dictionary_add_entry _driver_mnt_canopen_Dictionary_add_entry
#define driver_mnt_canopen_SocketCAN_construct _driver_mnt_canopen_SocketCAN_construct
#define driver_mnt_canopen_SocketCAN_receive _driver_mnt_canopen_SocketCAN_receive
#define driver_mnt_canopen_TxData_initialize _driver_mnt_canopen_TxData_initialize
#define driver_mnt_canopen_SocketCAN_transmit _driver_mnt_canopen_SocketCAN_transmit
/* Macro for doing argument type casting within project. */
#define safe_driver_mnt_canopen_Dictionary_construct(_this) _driver_mnt_canopen_Dictionary_construct(driver_mnt_canopen_Dictionary(_this))
#define safe_driver_mnt_canopen_Dictionary_fill_device(_this) _driver_mnt_canopen_Dictionary_fill_device(driver_mnt_canopen_Dictionary(_this))
#define safe_driver_mnt_canopen_Dictionary_fill_pdo(_this) _driver_mnt_canopen_Dictionary_fill_pdo(driver_mnt_canopen_Dictionary(_this))
#define safe_driver_mnt_canopen_Dictionary_traverse(_this, callback, data) _driver_mnt_canopen_Dictionary_traverse(driver_mnt_canopen_Dictionary(_this), callback, data)
#define safe_driver_mnt_canopen_Dictionary_lookup(_this, index, sub) _driver_mnt_canopen_Dictionary_lookup(driver_mnt_canopen_Dictionary(_this), index, sub)
#define safe_driver_mnt_canopen_Heartbeat_construct(_this) _driver_mnt_canopen_Heartbeat_construct(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_destruct(_this) _driver_mnt_canopen_Heartbeat_destruct(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_is_consumer(_this) _driver_mnt_canopen_Heartbeat_is_consumer(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_is_producer(_this) _driver_mnt_canopen_Heartbeat_is_producer(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_process_consumer(_this) _driver_mnt_canopen_Heartbeat_process_consumer(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_process_producer(_this) _driver_mnt_canopen_Heartbeat_process_producer(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_producer(_this) _driver_mnt_canopen_Heartbeat_producer(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_start(_this) _driver_mnt_canopen_Heartbeat_start(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Heartbeat_stop(_this) _driver_mnt_canopen_Heartbeat_stop(driver_mnt_canopen_Heartbeat(_this))
#define safe_driver_mnt_canopen_Mount_construct(_this) _driver_mnt_canopen_Mount_construct(driver_mnt_canopen_Mount(_this))
#define safe_driver_mnt_canopen_Mount_init_driver(_this) _driver_mnt_canopen_Mount_init_driver(driver_mnt_canopen_Mount(_this))
#define safe_driver_mnt_canopen_nmt_construct(_this) _driver_mnt_canopen_nmt_construct(driver_mnt_canopen_nmt(_this))
#define safe_driver_mnt_canopen_Dictionary_add_entry(_this, map, entry) _driver_mnt_canopen_Dictionary_add_entry(driver_mnt_canopen_Dictionary(_this), map, driver_mnt_canopen_Entry(entry))
#define safe_driver_mnt_canopen_SocketCAN_construct(_this) _driver_mnt_canopen_SocketCAN_construct(driver_mnt_canopen_SocketCAN(_this))
#define safe_driver_mnt_canopen_SocketCAN_receive(_this) _driver_mnt_canopen_SocketCAN_receive(driver_mnt_canopen_SocketCAN(_this))
#define safe_driver_mnt_canopen_TxData_initialize(_this, ident, rtr, dlc) _driver_mnt_canopen_TxData_initialize(driver_mnt_canopen_TxData(_this), ident, rtr, dlc)
#define safe_driver_mnt_canopen_SocketCAN_transmit(_this, data) _driver_mnt_canopen_SocketCAN_transmit(driver_mnt_canopen_SocketCAN(_this), driver_mnt_canopen_TxData(data))
#endif

/* -- Overridable methods -- */

/* -- Short identifier translation -- */
#define CANOPEN_CONST DRIVER_MNT_CANOPEN_CONST
#define CANOPEN_RO DRIVER_MNT_CANOPEN_RO
#define CANOPEN_RW DRIVER_MNT_CANOPEN_RW
#define CANOPEN_WO DRIVER_MNT_CANOPEN_WO
#define canopen_Access driver_mnt_canopen_Access
#define CANOPEN_MANDATORY DRIVER_MNT_CANOPEN_MANDATORY
#define CANOPEN_OPTIONAL DRIVER_MNT_CANOPEN_OPTIONAL
#define canopen_Category driver_mnt_canopen_Category
#define canopen_DataArr driver_mnt_canopen_DataArr
#define CANOPEN_TYPE_BOOLEAN DRIVER_MNT_CANOPEN_TYPE_BOOLEAN
#define CANOPEN_TYPE_DOMAIN DRIVER_MNT_CANOPEN_TYPE_DOMAIN
#define CANOPEN_TYPE_INTEGER16 DRIVER_MNT_CANOPEN_TYPE_INTEGER16
#define CANOPEN_TYPE_INTEGER32 DRIVER_MNT_CANOPEN_TYPE_INTEGER32
#define CANOPEN_TYPE_INTEGER8 DRIVER_MNT_CANOPEN_TYPE_INTEGER8
#define CANOPEN_TYPE_REAL32 DRIVER_MNT_CANOPEN_TYPE_REAL32
#define CANOPEN_TYPE_STRING_OCTET DRIVER_MNT_CANOPEN_TYPE_STRING_OCTET
#define CANOPEN_TYPE_STRING_UNICODE DRIVER_MNT_CANOPEN_TYPE_STRING_UNICODE
#define CANOPEN_TYPE_STRING_VISIBLE DRIVER_MNT_CANOPEN_TYPE_STRING_VISIBLE
#define CANOPEN_TYPE_TIME_DIFFERENCE DRIVER_MNT_CANOPEN_TYPE_TIME_DIFFERENCE
#define CANOPEN_TYPE_TIME_OF_DAY DRIVER_MNT_CANOPEN_TYPE_TIME_OF_DAY
#define CANOPEN_TYPE_UNSIGNED16 DRIVER_MNT_CANOPEN_TYPE_UNSIGNED16
#define CANOPEN_TYPE_UNSIGNED32 DRIVER_MNT_CANOPEN_TYPE_UNSIGNED32
#define CANOPEN_TYPE_UNSIGNED8 DRIVER_MNT_CANOPEN_TYPE_UNSIGNED8
#define canopen_DataType driver_mnt_canopen_DataType
#define canopen_Dictionary_construct driver_mnt_canopen_Dictionary_construct
#define safe_canopen_Dictionary_construct safe_driver_mnt_canopen_Dictionary_construct
#define canopen_Dictionary_fill_device driver_mnt_canopen_Dictionary_fill_device
#define safe_canopen_Dictionary_fill_device safe_driver_mnt_canopen_Dictionary_fill_device
#define canopen_Dictionary_fill_pdo driver_mnt_canopen_Dictionary_fill_pdo
#define safe_canopen_Dictionary_fill_pdo safe_driver_mnt_canopen_Dictionary_fill_pdo
#define canopen_Dictionary_traverse driver_mnt_canopen_Dictionary_traverse
#define safe_canopen_Dictionary_traverse safe_driver_mnt_canopen_Dictionary_traverse
#define CANOPEN_DRIVER_SOCKET_CAN DRIVER_MNT_CANOPEN_DRIVER_SOCKET_CAN
#define CANOPEN_DRIVER_UNKNOWN DRIVER_MNT_CANOPEN_DRIVER_UNKNOWN
#define canopen_Driver driver_mnt_canopen_Driver
#define canopen_Dictionary_lookup driver_mnt_canopen_Dictionary_lookup
#define safe_canopen_Dictionary_lookup safe_driver_mnt_canopen_Dictionary_lookup
#define canopen_Heartbeat_construct driver_mnt_canopen_Heartbeat_construct
#define safe_canopen_Heartbeat_construct safe_driver_mnt_canopen_Heartbeat_construct
#define canopen_Heartbeat_destruct driver_mnt_canopen_Heartbeat_destruct
#define safe_canopen_Heartbeat_destruct safe_driver_mnt_canopen_Heartbeat_destruct
#define canopen_Heartbeat_is_consumer driver_mnt_canopen_Heartbeat_is_consumer
#define safe_canopen_Heartbeat_is_consumer safe_driver_mnt_canopen_Heartbeat_is_consumer
#define canopen_Heartbeat_is_producer driver_mnt_canopen_Heartbeat_is_producer
#define safe_canopen_Heartbeat_is_producer safe_driver_mnt_canopen_Heartbeat_is_producer
#define canopen_Heartbeat_process_consumer driver_mnt_canopen_Heartbeat_process_consumer
#define safe_canopen_Heartbeat_process_consumer safe_driver_mnt_canopen_Heartbeat_process_consumer
#define canopen_Heartbeat_process_producer driver_mnt_canopen_Heartbeat_process_producer
#define safe_canopen_Heartbeat_process_producer safe_driver_mnt_canopen_Heartbeat_process_producer
#define canopen_Heartbeat_producer driver_mnt_canopen_Heartbeat_producer
#define safe_canopen_Heartbeat_producer safe_driver_mnt_canopen_Heartbeat_producer
#define canopen_Heartbeat_start driver_mnt_canopen_Heartbeat_start
#define safe_canopen_Heartbeat_start safe_driver_mnt_canopen_Heartbeat_start
#define canopen_Heartbeat_stop driver_mnt_canopen_Heartbeat_stop
#define safe_canopen_Heartbeat_stop safe_driver_mnt_canopen_Heartbeat_stop
#define canopen_IndexMap driver_mnt_canopen_IndexMap
#define canopen_Mount_construct driver_mnt_canopen_Mount_construct
#define safe_canopen_Mount_construct safe_driver_mnt_canopen_Mount_construct
#define canopen_Mount_init_driver driver_mnt_canopen_Mount_init_driver
#define safe_canopen_Mount_init_driver safe_driver_mnt_canopen_Mount_init_driver
#define canopen_nmt_construct driver_mnt_canopen_nmt_construct
#define safe_canopen_nmt_construct safe_driver_mnt_canopen_nmt_construct
#define CANOPEN_NMT_BOOT DRIVER_MNT_CANOPEN_NMT_BOOT
#define CANOPEN_NMT_OPERATIONAL DRIVER_MNT_CANOPEN_NMT_OPERATIONAL
#define CANOPEN_NMT_PRE_OPERATIONAL DRIVER_MNT_CANOPEN_NMT_PRE_OPERATIONAL
#define CANOPEN_NMT_STOPPED DRIVER_MNT_CANOPEN_NMT_STOPPED
#define canopen_NMTState driver_mnt_canopen_NMTState
#define CANOPEN_ARRAY DRIVER_MNT_CANOPEN_ARRAY
#define CANOPEN_DEFSTRUCT DRIVER_MNT_CANOPEN_DEFSTRUCT
#define CANOPEN_DEFTYPE DRIVER_MNT_CANOPEN_DEFTYPE
#define CANOPEN_DOMAIN DRIVER_MNT_CANOPEN_DOMAIN
#define CANOPEN_NULL DRIVER_MNT_CANOPEN_NULL
#define CANOPEN_RECORD DRIVER_MNT_CANOPEN_RECORD
#define CANOPEN_VAR DRIVER_MNT_CANOPEN_VAR
#define canopen_ObjectCode driver_mnt_canopen_ObjectCode
#define canopen_Meta driver_mnt_canopen_Meta
#define canopen_Entry driver_mnt_canopen_Entry
#define canopen_Dictionary_add_entry driver_mnt_canopen_Dictionary_add_entry
#define safe_canopen_Dictionary_add_entry safe_driver_mnt_canopen_Dictionary_add_entry
#define canopen_Dictionary driver_mnt_canopen_Dictionary
#define canopen_SocketCAN_construct driver_mnt_canopen_SocketCAN_construct
#define safe_canopen_SocketCAN_construct safe_driver_mnt_canopen_SocketCAN_construct
#define canopen_SocketCAN_receive driver_mnt_canopen_SocketCAN_receive
#define safe_canopen_SocketCAN_receive safe_driver_mnt_canopen_SocketCAN_receive
#define CANOPEN_TIMING_10 DRIVER_MNT_CANOPEN_TIMING_10
#define CANOPEN_TIMING_1000 DRIVER_MNT_CANOPEN_TIMING_1000
#define CANOPEN_TIMING_125 DRIVER_MNT_CANOPEN_TIMING_125
#define CANOPEN_TIMING_20 DRIVER_MNT_CANOPEN_TIMING_20
#define CANOPEN_TIMING_250 DRIVER_MNT_CANOPEN_TIMING_250
#define CANOPEN_TIMING_50 DRIVER_MNT_CANOPEN_TIMING_50
#define CANOPEN_TIMING_500 DRIVER_MNT_CANOPEN_TIMING_500
#define CANOPEN_TIMING_800 DRIVER_MNT_CANOPEN_TIMING_800
#define CANOPEN_TIMING_UNKNOWN DRIVER_MNT_CANOPEN_TIMING_UNKNOWN
#define canopen_Timing driver_mnt_canopen_Timing
#define canopen_TxData_initialize driver_mnt_canopen_TxData_initialize
#define safe_canopen_TxData_initialize safe_driver_mnt_canopen_TxData_initialize
#define canopen_TxData driver_mnt_canopen_TxData
#define canopen_SocketCAN_transmit driver_mnt_canopen_SocketCAN_transmit
#define safe_canopen_SocketCAN_transmit safe_driver_mnt_canopen_SocketCAN_transmit
#define canopen_SocketCAN driver_mnt_canopen_SocketCAN
#define canopen_Heartbeat driver_mnt_canopen_Heartbeat
#define canopen_Mount driver_mnt_canopen_Mount
#define canopen_nmt driver_mnt_canopen_nmt

/* -- Local only short identifier translation -- */
#ifdef DRIVER_MNT_CANOPEN_IMPL
#ifndef __cplusplus
#define Meta canopen_Meta
#endif
#ifndef __cplusplus
#define Entry canopen_Entry
#endif
#ifndef __cplusplus
#define Dictionary canopen_Dictionary
#endif
#ifndef __cplusplus
#define TxData canopen_TxData
#endif
#ifndef __cplusplus
#define SocketCAN canopen_SocketCAN
#endif
#ifndef __cplusplus
#define Heartbeat canopen_Heartbeat
#endif
#ifndef __cplusplus
#define Mount canopen_Mount
#endif
#ifndef __cplusplus
#define Nmt canopen_nmt
#endif
#endif

/* -- Short object variable translation -- */
#define CANOPEN_CONST_o DRIVER_MNT_CANOPEN_CONST_o
#define CANOPEN_RO_o DRIVER_MNT_CANOPEN_RO_o
#define CANOPEN_RW_o DRIVER_MNT_CANOPEN_RW_o
#define CANOPEN_WO_o DRIVER_MNT_CANOPEN_WO_o
#define canopen_Access_o driver_mnt_canopen_Access_o
#define CANOPEN_MANDATORY_o DRIVER_MNT_CANOPEN_MANDATORY_o
#define CANOPEN_OPTIONAL_o DRIVER_MNT_CANOPEN_OPTIONAL_o
#define canopen_Category_o driver_mnt_canopen_Category_o
#define canopen_DataArr_o driver_mnt_canopen_DataArr_o
#define CANOPEN_TYPE_BOOLEAN_o DRIVER_MNT_CANOPEN_TYPE_BOOLEAN_o
#define CANOPEN_TYPE_DOMAIN_o DRIVER_MNT_CANOPEN_TYPE_DOMAIN_o
#define CANOPEN_TYPE_INTEGER16_o DRIVER_MNT_CANOPEN_TYPE_INTEGER16_o
#define CANOPEN_TYPE_INTEGER32_o DRIVER_MNT_CANOPEN_TYPE_INTEGER32_o
#define CANOPEN_TYPE_INTEGER8_o DRIVER_MNT_CANOPEN_TYPE_INTEGER8_o
#define CANOPEN_TYPE_REAL32_o DRIVER_MNT_CANOPEN_TYPE_REAL32_o
#define CANOPEN_TYPE_STRING_OCTET_o DRIVER_MNT_CANOPEN_TYPE_STRING_OCTET_o
#define CANOPEN_TYPE_STRING_UNICODE_o DRIVER_MNT_CANOPEN_TYPE_STRING_UNICODE_o
#define CANOPEN_TYPE_STRING_VISIBLE_o DRIVER_MNT_CANOPEN_TYPE_STRING_VISIBLE_o
#define CANOPEN_TYPE_TIME_DIFFERENCE_o DRIVER_MNT_CANOPEN_TYPE_TIME_DIFFERENCE_o
#define CANOPEN_TYPE_TIME_OF_DAY_o DRIVER_MNT_CANOPEN_TYPE_TIME_OF_DAY_o
#define CANOPEN_TYPE_UNSIGNED16_o DRIVER_MNT_CANOPEN_TYPE_UNSIGNED16_o
#define CANOPEN_TYPE_UNSIGNED32_o DRIVER_MNT_CANOPEN_TYPE_UNSIGNED32_o
#define CANOPEN_TYPE_UNSIGNED8_o DRIVER_MNT_CANOPEN_TYPE_UNSIGNED8_o
#define canopen_DataType_o driver_mnt_canopen_DataType_o
#define canopen_Dictionary_construct_o driver_mnt_canopen_Dictionary_construct_o
#define canopen_Dictionary_fill_device_o driver_mnt_canopen_Dictionary_fill_device_o
#define canopen_Dictionary_fill_pdo_o driver_mnt_canopen_Dictionary_fill_pdo_o
#define canopen_Dictionary_from_o driver_mnt_canopen_Dictionary_from_o
#define canopen_Dictionary_id_o driver_mnt_canopen_Dictionary_id_o
#define canopen_Dictionary_traverse_o driver_mnt_canopen_Dictionary_traverse_o
#define CANOPEN_DRIVER_SOCKET_CAN_o DRIVER_MNT_CANOPEN_DRIVER_SOCKET_CAN_o
#define CANOPEN_DRIVER_UNKNOWN_o DRIVER_MNT_CANOPEN_DRIVER_UNKNOWN_o
#define canopen_Driver_o driver_mnt_canopen_Driver_o
#define canopen_Dictionary_lookup_o driver_mnt_canopen_Dictionary_lookup_o
#define canopen_Entry_v_o driver_mnt_canopen_Entry_v_o
#define canopen_Heartbeat_construct_o driver_mnt_canopen_Heartbeat_construct_o
#define canopen_Heartbeat_destruct_o driver_mnt_canopen_Heartbeat_destruct_o
#define canopen_Heartbeat_frequency_o driver_mnt_canopen_Heartbeat_frequency_o
#define canopen_Heartbeat_is_consumer_o driver_mnt_canopen_Heartbeat_is_consumer_o
#define canopen_Heartbeat_is_producer_o driver_mnt_canopen_Heartbeat_is_producer_o
#define canopen_Heartbeat_process_consumer_o driver_mnt_canopen_Heartbeat_process_consumer_o
#define canopen_Heartbeat_process_producer_o driver_mnt_canopen_Heartbeat_process_producer_o
#define canopen_Heartbeat_producer_o driver_mnt_canopen_Heartbeat_producer_o
#define canopen_Heartbeat_quit_o driver_mnt_canopen_Heartbeat_quit_o
#define canopen_Heartbeat_start_o driver_mnt_canopen_Heartbeat_start_o
#define canopen_Heartbeat_state_o driver_mnt_canopen_Heartbeat_state_o
#define canopen_Heartbeat_stop_o driver_mnt_canopen_Heartbeat_stop_o
#define canopen_Heartbeat_thread_o driver_mnt_canopen_Heartbeat_thread_o
#define canopen_IndexMap_o driver_mnt_canopen_IndexMap_o
#define canopen_Dictionary_map_o driver_mnt_canopen_Dictionary_map_o
#define canopen_Meta_access_o driver_mnt_canopen_Meta_access_o
#define canopen_Meta_category_o driver_mnt_canopen_Meta_category_o
#define canopen_Meta_dataType_o driver_mnt_canopen_Meta_dataType_o
#define canopen_Meta_description_o driver_mnt_canopen_Meta_description_o
#define canopen_Meta_index_o driver_mnt_canopen_Meta_index_o
#define canopen_Meta_pdo_o driver_mnt_canopen_Meta_pdo_o
#define canopen_Meta_subindex_o driver_mnt_canopen_Meta_subindex_o
#define canopen_Mount_construct_o driver_mnt_canopen_Mount_construct_o
#define canopen_Mount_id_o driver_mnt_canopen_Mount_id_o
#define canopen_Mount_init_driver_o driver_mnt_canopen_Mount_init_driver_o
#define canopen_Mount_socketType_o driver_mnt_canopen_Mount_socketType_o
#define canopen_nmt_construct_o driver_mnt_canopen_nmt_construct_o
#define CANOPEN_NMT_BOOT_o DRIVER_MNT_CANOPEN_NMT_BOOT_o
#define CANOPEN_NMT_OPERATIONAL_o DRIVER_MNT_CANOPEN_NMT_OPERATIONAL_o
#define CANOPEN_NMT_PRE_OPERATIONAL_o DRIVER_MNT_CANOPEN_NMT_PRE_OPERATIONAL_o
#define CANOPEN_NMT_STOPPED_o DRIVER_MNT_CANOPEN_NMT_STOPPED_o
#define canopen_NMTState_o driver_mnt_canopen_NMTState_o
#define canopen_nmt_state_o driver_mnt_canopen_nmt_state_o
#define CANOPEN_ARRAY_o DRIVER_MNT_CANOPEN_ARRAY_o
#define CANOPEN_DEFSTRUCT_o DRIVER_MNT_CANOPEN_DEFSTRUCT_o
#define CANOPEN_DEFTYPE_o DRIVER_MNT_CANOPEN_DEFTYPE_o
#define CANOPEN_DOMAIN_o DRIVER_MNT_CANOPEN_DOMAIN_o
#define CANOPEN_NULL_o DRIVER_MNT_CANOPEN_NULL_o
#define CANOPEN_RECORD_o DRIVER_MNT_CANOPEN_RECORD_o
#define CANOPEN_VAR_o DRIVER_MNT_CANOPEN_VAR_o
#define canopen_ObjectCode_o driver_mnt_canopen_ObjectCode_o
#define canopen_Meta_code_o driver_mnt_canopen_Meta_code_o
#define canopen_Meta_o driver_mnt_canopen_Meta_o
#define canopen_Entry_meta_o driver_mnt_canopen_Entry_meta_o
#define canopen_Entry_o driver_mnt_canopen_Entry_o
#define canopen_Dictionary_add_entry_o driver_mnt_canopen_Dictionary_add_entry_o
#define canopen_Dictionary_o driver_mnt_canopen_Dictionary_o
#define canopen_Heartbeat_dictionary_o driver_mnt_canopen_Heartbeat_dictionary_o
#define canopen_Mount_dictionary_o driver_mnt_canopen_Mount_dictionary_o
#define canopen_nmt_dictionary_o driver_mnt_canopen_nmt_dictionary_o
#define canopen_SocketCAN_construct_o driver_mnt_canopen_SocketCAN_construct_o
#define canopen_SocketCAN_fd_o driver_mnt_canopen_SocketCAN_fd_o
#define canopen_SocketCAN_id_o driver_mnt_canopen_SocketCAN_id_o
#define canopen_SocketCAN_receive_o driver_mnt_canopen_SocketCAN_receive_o
#define CANOPEN_TIMING_10_o DRIVER_MNT_CANOPEN_TIMING_10_o
#define CANOPEN_TIMING_1000_o DRIVER_MNT_CANOPEN_TIMING_1000_o
#define CANOPEN_TIMING_125_o DRIVER_MNT_CANOPEN_TIMING_125_o
#define CANOPEN_TIMING_20_o DRIVER_MNT_CANOPEN_TIMING_20_o
#define CANOPEN_TIMING_250_o DRIVER_MNT_CANOPEN_TIMING_250_o
#define CANOPEN_TIMING_50_o DRIVER_MNT_CANOPEN_TIMING_50_o
#define CANOPEN_TIMING_500_o DRIVER_MNT_CANOPEN_TIMING_500_o
#define CANOPEN_TIMING_800_o DRIVER_MNT_CANOPEN_TIMING_800_o
#define CANOPEN_TIMING_UNKNOWN_o DRIVER_MNT_CANOPEN_TIMING_UNKNOWN_o
#define canopen_Timing_o driver_mnt_canopen_Timing_o
#define canopen_Mount_timing_o driver_mnt_canopen_Mount_timing_o
#define canopen_TxData_data_o driver_mnt_canopen_TxData_data_o
#define canopen_TxData_dlc_o driver_mnt_canopen_TxData_dlc_o
#define canopen_TxData_id_o driver_mnt_canopen_TxData_id_o
#define canopen_TxData_initialize_o driver_mnt_canopen_TxData_initialize_o
#define canopen_TxData_rtr_o driver_mnt_canopen_TxData_rtr_o
#define canopen_TxData_o driver_mnt_canopen_TxData_o
#define canopen_SocketCAN_transmit_o driver_mnt_canopen_SocketCAN_transmit_o
#define canopen_SocketCAN_o driver_mnt_canopen_SocketCAN_o
#define canopen_Heartbeat_driver_o driver_mnt_canopen_Heartbeat_driver_o
#define canopen_Heartbeat_o driver_mnt_canopen_Heartbeat_o
#define canopen_nmt_hb_o driver_mnt_canopen_nmt_hb_o
#define canopen_Mount_driver_o driver_mnt_canopen_Mount_driver_o
#define canopen_Mount_o driver_mnt_canopen_Mount_o
#define canopen_nmt_driver_o driver_mnt_canopen_nmt_driver_o
#define canopen_nmt_o driver_mnt_canopen_nmt_o

#endif

