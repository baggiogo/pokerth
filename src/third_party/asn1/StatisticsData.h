/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_StatisticsData_H_
#define	_StatisticsData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum statisticsType {
	statisticsType_statNumberOfPlayers	= 1
} e_statisticsType;

/* StatisticsData */
typedef struct StatisticsData {
	long	 statisticsType;
	long	 statisticsValue;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StatisticsData_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_statisticsType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_StatisticsData;

#ifdef __cplusplus
}
#endif

#endif	/* _StatisticsData_H_ */
#include <asn_internal.h>
