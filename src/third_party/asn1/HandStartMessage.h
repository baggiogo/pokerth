/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_HandStartMessage_H_
#define	_HandStartMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include <NativeInteger.h>
#include "PlainCards.h"
#include "EncryptedCards.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum yourCards_PR {
	yourCards_PR_NOTHING,	/* No components present */
	yourCards_PR_plainCards,
	yourCards_PR_encryptedCards,
	/* Extensions may appear below */
	
} yourCards_PR;

/* HandStartMessage */
typedef struct HandStartMessage {
	NonZeroId_t	 gameId;
	struct yourCards {
		yourCards_PR present;
		union HandStartMessage__yourCards_u {
			PlainCards_t	 plainCards;
			EncryptedCards_t	 encryptedCards;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} yourCards;
	long	 smallBlind;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandStartMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandStartMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _HandStartMessage_H_ */
#include <asn_internal.h>
