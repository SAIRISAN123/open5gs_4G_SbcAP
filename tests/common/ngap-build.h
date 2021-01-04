/*
 * Copyright (C) 2019,2020 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef TEST_NGAP_BUILD_H
#define TEST_NGAP_BUILD_H

#ifdef __cplusplus
extern "C" {
#endif

ogs_pkbuf_t *testngap_build_ng_setup_request(uint32_t gnb_id, uint8_t bitsize);
ogs_pkbuf_t *testngap_build_initial_ue_message(
        test_ue_t *test_ue, ogs_pkbuf_t *gmmbuf, bool s_tmsi);
ogs_pkbuf_t *testngap_build_uplink_nas_transport(
        test_ue_t *test_ue, ogs_pkbuf_t *gmmbuf);

ogs_pkbuf_t *testngap_build_initial_context_setup_response(
        test_ue_t *test_ue, bool pdu_session);
ogs_pkbuf_t *testngap_build_initial_context_setup_failure(test_ue_t *test_ue,
        NGAP_Cause_PR group, long cause);

ogs_pkbuf_t *testngap_build_ue_radio_capability_info_indication(
        test_ue_t *test_ue);

ogs_pkbuf_t *testngap_build_ue_context_release_request(test_ue_t *test_ue,
        NGAP_Cause_PR group, long cause, bool pdu_session);
ogs_pkbuf_t *testngap_build_ue_context_release_complete(test_ue_t *test_ue);

ogs_pkbuf_t *testngap_build_pdu_session_resource_setup_response(
        test_sess_t *sess);
ogs_pkbuf_t *testngap_build_pdu_session_resource_modify_response(
        test_bearer_t *qos_flow);
ogs_pkbuf_t *testngap_build_pdu_session_resource_release_response(
        test_sess_t *sess);

ogs_pkbuf_t *testngap_build_path_switch_request(test_ue_t *test_ue);

#ifdef __cplusplus
}
#endif

#endif /* TEST_NGAP_BUILD_H */
