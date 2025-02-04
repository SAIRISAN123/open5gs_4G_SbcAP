/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_List_of_5GS_Cells_for_Failure_H_
#define	_SBCAP_List_of_5GS_Cells_for_Failure_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBCAP_NR_CGI;

/* SBCAP_List-of-5GS-Cells-for-Failure */
typedef struct SBCAP_List_of_5GS_Cells_for_Failure {
	A_SEQUENCE_OF(struct SBCAP_NR_CGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCAP_List_of_5GS_Cells_for_Failure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_List_of_5GS_Cells_for_Failure;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_List_of_5GS_Cells_for_Failure_H_ */
#include <asn_internal.h>
