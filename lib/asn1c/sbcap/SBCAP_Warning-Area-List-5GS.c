/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "SBCAP_Warning-Area-List-5GS.h"

#include "SBCAP_ECGIList.h"
#include "SBCAP_NR-CGIList.h"
#include "SBCAP_TAI-5GS.h"
#include "SBCAP_Emergency-Area-ID-List.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SBCAP_Warning_Area_List_5GS_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_SBCAP_Warning_Area_List_5GS_1[] = {
	{ ATF_POINTER, 0, offsetof(struct SBCAP_Warning_Area_List_5GS, choice.cell_ID_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_ECGIList,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"cell-ID-List"
		},
	{ ATF_POINTER, 0, offsetof(struct SBCAP_Warning_Area_List_5GS, choice.nR_CGIList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_NR_CGIList,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nR-CGIList"
		},
	{ ATF_POINTER, 0, offsetof(struct SBCAP_Warning_Area_List_5GS, choice.tAIList_5GS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_TAI_5GS,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"tAIList-5GS"
		},
	{ ATF_POINTER, 0, offsetof(struct SBCAP_Warning_Area_List_5GS, choice.emergencyAreaIDList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_Emergency_Area_ID_List,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"emergencyAreaIDList"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SBCAP_Warning_Area_List_5GS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cell-ID-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nR-CGIList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tAIList-5GS */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* emergencyAreaIDList */
};
asn_CHOICE_specifics_t asn_SPC_SBCAP_Warning_Area_List_5GS_specs_1 = {
	sizeof(struct SBCAP_Warning_Area_List_5GS),
	offsetof(struct SBCAP_Warning_Area_List_5GS, _asn_ctx),
	offsetof(struct SBCAP_Warning_Area_List_5GS, present),
	sizeof(((struct SBCAP_Warning_Area_List_5GS *)0)->present),
	asn_MAP_SBCAP_Warning_Area_List_5GS_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SBCAP_Warning_Area_List_5GS = {
	"Warning-Area-List-5GS",
	"Warning-Area-List-5GS",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SBCAP_Warning_Area_List_5GS_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_SBCAP_Warning_Area_List_5GS_1,
	4,	/* Elements count */
	&asn_SPC_SBCAP_Warning_Area_List_5GS_specs_1	/* Additional specs */
};

