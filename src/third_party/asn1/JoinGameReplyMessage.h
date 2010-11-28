/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_JoinGameReplyMessage_H_
#define	_JoinGameReplyMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "JoinGameAck.h"
#include "JoinGameFailed.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum joinGameResult_PR {
	joinGameResult_PR_NOTHING,	/* No components present */
	joinGameResult_PR_joinGameAck,
	joinGameResult_PR_joinGameFailed,
	/* Extensions may appear below */
	
} joinGameResult_PR;

/* JoinGameReplyMessage */
typedef struct JoinGameReplyMessage {
	NonZeroId_t	 gameId;
	struct joinGameResult {
		joinGameResult_PR present;
		union JoinGameReplyMessage__joinGameResult_u {
			JoinGameAck_t	 joinGameAck;
			JoinGameFailed_t	 joinGameFailed;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} joinGameResult;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} JoinGameReplyMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_JoinGameReplyMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _JoinGameReplyMessage_H_ */
#include <asn_internal.h>
