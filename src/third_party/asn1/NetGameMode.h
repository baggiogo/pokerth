/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_NetGameMode_H_
#define	_NetGameMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NetGameMode {
	NetGameMode_gameCreated	= 1,
	NetGameMode_gameStarted	= 2,
	NetGameMode_gameClosed	= 3
} e_NetGameMode;

/* NetGameMode */
typedef long	 NetGameMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NetGameMode;
asn_struct_free_f NetGameMode_free;
asn_struct_print_f NetGameMode_print;
asn_constr_check_f NetGameMode_constraint;
ber_type_decoder_f NetGameMode_decode_ber;
der_type_encoder_f NetGameMode_encode_der;
xer_type_decoder_f NetGameMode_decode_xer;
xer_type_encoder_f NetGameMode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _NetGameMode_H_ */
#include <asn_internal.h>
