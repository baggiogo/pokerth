/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ChatMessage_H_
#define	_ChatMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTF8String.h>
#include "ChatTypeLobby.h"
#include "ChatTypeGame.h"
#include "ChatTypeBot.h"
#include "ChatTypeBroadcast.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum chatType_PR {
	chatType_PR_NOTHING,	/* No components present */
	chatType_PR_chatTypeLobby,
	chatType_PR_chatTypeGame,
	chatType_PR_chatTypeBot,
	chatType_PR_chatTypeBroadcast,
	/* Extensions may appear below */
	
} chatType_PR;

/* ChatMessage */
typedef struct ChatMessage {
	struct chatType {
		chatType_PR present;
		union ChatMessage__chatType_u {
			ChatTypeLobby_t	 chatTypeLobby;
			ChatTypeGame_t	 chatTypeGame;
			ChatTypeBot_t	 chatTypeBot;
			ChatTypeBroadcast_t	 chatTypeBroadcast;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} chatType;
	UTF8String_t	 chatText;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ChatMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChatMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _ChatMessage_H_ */
#include <asn_internal.h>
