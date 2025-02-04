/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_CancelledCellinEAI_H_
#define	_SBCAP_CancelledCellinEAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBCAP_CancelledCellinEAI_Item;

/* SBCAP_CancelledCellinEAI */
typedef struct SBCAP_CancelledCellinEAI {
	A_SEQUENCE_OF(struct SBCAP_CancelledCellinEAI_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCAP_CancelledCellinEAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_CancelledCellinEAI;
extern asn_SET_OF_specifics_t asn_SPC_SBCAP_CancelledCellinEAI_specs_1;
extern asn_TYPE_member_t asn_MBR_SBCAP_CancelledCellinEAI_1[1];
extern asn_per_constraints_t asn_PER_type_SBCAP_CancelledCellinEAI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_CancelledCellinEAI_H_ */
#include <asn_internal.h>
