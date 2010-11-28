/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_JoinGameRequestMessage_H_
#define	_JoinGameRequestMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTF8String.h>
#include "JoinExistingGame.h"
#include "JoinNewGame.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum joinGameAction_PR {
	joinGameAction_PR_NOTHING,	/* No components present */
	joinGameAction_PR_joinExistingGame,
	joinGameAction_PR_joinNewGame,
	/* Extensions may appear below */
	
} joinGameAction_PR;

/* JoinGameRequestMessage */
typedef struct JoinGameRequestMessage {
	struct joinGameAction {
		joinGameAction_PR present;
		union JoinGameRequestMessage__joinGameAction_u {
			JoinExistingGame_t	 joinExistingGame;
			JoinNewGame_t	 joinNewGame;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} joinGameAction;
	UTF8String_t	*password	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} JoinGameRequestMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_JoinGameRequestMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _JoinGameRequestMessage_H_ */
#include <asn_internal.h>
