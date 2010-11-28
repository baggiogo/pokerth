/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_PlayerInfoData_H_
#define	_PlayerInfoData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTF8String.h>
#include <BOOLEAN.h>
#include "PlayerInfoRights.h"
#include "NetAvatarType.h"
#include "AvatarHash.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PlayerInfoData */
typedef struct PlayerInfoData {
	UTF8String_t	 playerName;
	BOOLEAN_t	 isHuman;
	PlayerInfoRights_t	 playerRights;
	UTF8String_t	*countryCode	/* OPTIONAL */;
	struct avatarData {
		NetAvatarType_t	 avatarType;
		AvatarHash_t	 avatar;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *avatarData;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PlayerInfoData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlayerInfoData;

#ifdef __cplusplus
}
#endif

#endif	/* _PlayerInfoData_H_ */
#include <asn_internal.h>
